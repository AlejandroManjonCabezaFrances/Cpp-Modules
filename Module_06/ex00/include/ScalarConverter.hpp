/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon <amanjon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 20:50:32 by amanjon           #+#    #+#             */
/*   Updated: 2024/12/16 20:51:51 by amanjon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <iomanip>

class ScalarConverter
{
    private:

    public:
        ScalarConverter();
        ScalarConverter(const ScalarConverter& constrCopy);
        ScalarConverter& operator=(const ScalarConverter& constrCopy);
        ~ScalarConverter();

        virtual void convert(std::string& literalString) const = 0;
};

std::ostream& operator<<(std::ostream &output, const ScalarConverter& constrCopy);

#endif
