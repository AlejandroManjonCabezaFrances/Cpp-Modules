/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon- <amanjon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 03:24:48 by amanjon           #+#    #+#             */
/*   Updated: 2025/01/24 12:34:34 by amanjon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>

#include "../include/Colors.hpp"

/**
 * Esta función encuentra la primera ocurrencia del segundo parámetro en el primer parámetro.

 * la Funcion std::find(); devuelve puntero si hay ocurrencia o devuelve puntero a vec.end(); 
   cuando no hay ocurrencia. 

 * std::runtime_error --> derivada se std::exception. La diferencia clave es que exception (más genérica), 
   no genera información y runtime_error, indicar un error que ocurre durante la ejecución del programa.
*/
template <typename T>
void    easyfind(T vec, int numberFind)
{
	std::vector<int>::iterator it;

	it = std::find(vec.begin(), vec.end(), numberFind);

	if (it != vec.end())
		std::cout << "Occurrence was found in the vector: " << *it << std::endl; 
	else
		throw std::runtime_error ("No occurrence found in the vector");
}

#endif
