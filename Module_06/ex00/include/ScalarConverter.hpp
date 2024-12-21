/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon <amanjon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 20:50:32 by amanjon           #+#    #+#             */
/*   Updated: 2024/12/21 17:50:20 by amanjon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include "../include/Colors.hpp"

#include <iostream>
#include <iomanip>

/**
 * "nan": Not a Number:  verificar un valor NaN en código con funciones como std::isnan().
 * "inf" y "inff": infinito positivo. "double" y "float": puedes detectarlos usando std::isinf().
 * "-inf" y "-inff": infinito negativo.
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

std::ostream& operator<<(std::ostream &output, const ScalarConverter& constrCopy);

#endif
