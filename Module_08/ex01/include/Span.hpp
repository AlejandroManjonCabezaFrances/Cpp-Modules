/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon <amanjon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 01:25:43 by amanjon           #+#    #+#             */
/*   Updated: 2025/01/17 11:58:04 by amanjon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <limits>

#include "../include/Colors.hpp"

/**
 * addNumber(); si ya hay N elementos almacenados debe generar una excepción.

 * shortestSpan(); y longestSpan();
   Estas funciones calcularán respectivamente la distancia más corta o la más larga entre
   todos los números almacenados, y la devolverán. Si no hay números almacenados o
   si solo hay uno, no se puede calcular la distancia. En este caso, debes lanzar una excepción 

 * shortestSpan(): compara todos los pares de núm en el conjunto y encontrar la - diferencia.
   longestSpan(): diferencia entre el núm + grande y el núm + pequeño del conjunto (término absoluto).
*/
class Span
{
	private:
		std::vector<int>	numbers;
		unsigned int		maxSize;
	public:
		Span();
		Span(unsigned int N);
		Span(const Span& constrCopy);
		Span& operator=(const Span& constrCopy);
		~Span();

		void	addNumber(int number);
		int		shortestSpan() const;
		int		longestSpan() const;

		void	printNumbers();
		void	randomNumbersCreator(Span mySpan);

		int		getMaxSize();
		
		friend std::ostream& operator<<(std::ostream& output, const Span& constrCopy);
};



#endif
