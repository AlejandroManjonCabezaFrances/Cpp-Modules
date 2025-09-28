/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon <amanjon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 20:50:32 by amanjon           #+#    #+#             */
/*   Updated: 2024/12/22 17:06:59 by amanjon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include "../include/Colors.hpp"

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <string>

/**
 * "nan": Not a Number:  verificar un valor NaN en código con funciones como std::isnan().
 * "inf" y "inff": infinito positivo. "double" y "float": puedes detectarlos usando std::isinf().
 * "-inf" y "-inff": infinito negativo.
 * 
 * Método static, se puede acceder a este sin crear un objeto, ya que está clase no es instanciable
 * --> ScalarConverter::convert
*/
class ScalarConverter
{
	private:
		ScalarConverter();				// No instanciable
	public:
		ScalarConverter(const ScalarConverter& constrCopy);
		ScalarConverter& operator=(const ScalarConverter& constrCopy);
		~ScalarConverter();

		static void convert(std::string& input);
};

#endif
