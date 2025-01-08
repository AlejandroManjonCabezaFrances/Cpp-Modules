/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon <amanjon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 00:12:10 by amanjon           #+#    #+#             */
/*   Updated: 2025/01/08 02:06:56 by amanjon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/iter.hpp"

/**
 * Este código utiliza plantillas de función (templates) para crear iteradores genéricos
 que pueden operar sobre cualquier tipo de dato o estructura, como arrays o cadenas de texto.
 Las funciones print, square, remove1 y addWord son ejemplos de operaciones que se pueden aplicar
 a los elementos de un arreglo de manera flexible. A través de la función iter, puedes pasar estas
 operaciones como parámetros y aplicarlas a cualquier tipo de arreglo, demostrando el poder y
 la versatilidad de las plantillas en C++.
*/
template <typename T>
void    print(T& num)
{
	std::cout << "num = " << num << std::endl; 
}

template <typename T>
void square(T& num)
{
	num = num * num;
	print(num);
}

template <typename T>
void remove1(T& num)
{
	if (num == 1)
		num = 0;
	print(num);
}

template <typename T>
void addWord(T& string)
{
	string = string + " Alex !!";
	print(string);
} 

int main()
{
	std::cout << ORANGE << "print" << RESET << std::endl;
	int arr[] = {1, 2, 3, 4, 5};
	iter(arr, 5, print);
	std::cout << std::endl;

	std::cout << ORANGE << "square" << RESET << std::endl;
	iter(arr, 5, square);
	std::cout << std::endl;

	std::cout << ORANGE << "remove1" << RESET << std::endl;
	iter(arr, 5, remove1);
	std::cout << std::endl;

	std::cout << ORANGE << "addWord" << RESET << std::endl;
	std::string arr1[] = {"Hello", "How are you,", "Bye",};
	iter(arr1, 3, addWord);
	std::cout << std::endl;
	
	return (0);
}
