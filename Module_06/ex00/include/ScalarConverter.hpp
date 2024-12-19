/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon- <amanjon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 20:50:32 by amanjon           #+#    #+#             */
/*   Updated: 2024/12/19 18:34:56 by amanjon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <iomanip>

class ScalarConverter
{
	private:
		ScalarConverter();				// No instanciable
	public:
		ScalarConverter(const ScalarConverter& constrCopy);
		ScalarConverter& operator=(const ScalarConverter& constrCopy);
		~ScalarConverter();

		static void convert(std::string& literalString);
};

std::ostream& operator<<(std::ostream &output, const ScalarConverter& constrCopy);

#endif
