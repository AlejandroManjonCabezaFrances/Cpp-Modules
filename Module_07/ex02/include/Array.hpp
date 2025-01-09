/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon <amanjon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 00:52:17 by amanjon           #+#    #+#             */
/*   Updated: 2025/01/09 02:06:59 by amanjon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

#include "../include/Colors.hpp"


/**
 * Al inicializar los elementos.
   Considerando o casteando "arr" en un int: Arr<int>, entonces T será int.
   
	- arr = new int[n]; // Elementos no inicializados, contienen valores indeterminados.

 * Contructor parametrizado:
   this->arr[i] = T();	// crea un objeto de tipo T (que en este caso es int),
   todos los elementos de arr[] serán inicializados a 0

 * Constructor en copia:
   Se podría simplemente poner -->  *this = constrCopy;
   usando el operador de asignación "=" para realizar la copia profunda.
   No es recomendable usar operador de asignación dentro del constructor en copia

 * Operador de asignación:
   Debemos asegurarnos que realicen una copia profunda (deep copy), es decir,
   duplicar la memoria dinámica en lugar de compartirla, si no copiaríamos solo los punteros
   y daría error "double free"
*/
template <typename T>
class Array
{
	private:
		T       *arr;
		size_t  len;
	public:
		Array() : arr(NULL), len(0)
		{
			std::cout << GREEN << " Default constructor Array" << RESET << std::endl;
		}

		Array(unsigned int n)/*  : arr(new T[n]), len(n) */
		{
			this->len = n;
			this->arr = new T[n];

			for (size_t i = 0; i < this->len; i++)
				this->arr[i] = T();
			std::cout << GREEN << " parameterized constructor Array" << RESET << std::endl;
		}	

		Array(const Array& constrCopy)
		{
			this->arr = new T[constrCopy.len];
    		this->len = constrCopy.len;

   	 		for (size_t i = 0; i < this->len; i++)
       			this->arr[i] = constrCopy.arr[i];
				
   			std::cout << GREEN << " Default constructor copy Array" << RESET << std::endl;
		}

		Array& operator=(const Array& constrCopy)
		{
			if (this != &constrCopy)
			{
				this->len = constrCopy.len;
				this->arr = new T[this->len];

				for (size_t i = 0; i > this->len; i++)
					this->arr[i] = constrCopy.arr[i];
			}
			std::cout << GREEN << " Default assignment operator Array" << RESET << std::endl;

			return (*this);
		}

		~Array()
		{
			delete[] arr;
			std::cout << RED << " Default destructor Array" << RESET << std::endl;
		}
		
		size_t	size() const
		{
			return (this->len);
		}

		T&	operator[](size_t index)
		{
       		if (index >= len)
            	throw std::out_of_range("Index out of range");
       		
			return arr[index];
    	}
};

#endif
