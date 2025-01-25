
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon <amanjon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 18:18:39 by amanjon-          #+#    #+#             */
/*   Updated: 2025/01/22 23:49:10 by amanjon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <unistd.h>
#include <iostream>
#include <iomanip>
#include <map>
#include <fstream> // (flujo de entrada de archivo)
#include <sstream> // (flujo de entrada de cadena)
/* #include <string> */

#include "../include/Colors.hpp"

/**
 *Un "stream (flujo)" puede ser de entrada (istream), de salida (ostream), o de entrada y salida (iostream).
*/
void	readFile(const std::string &fileName, char delimiter);
void    btcExchange();
void	parseFile(std::string &line, std::string delimiter);
void	parseFile1(std::string &value);
int		stringToInt(const std::string &value);











/* class BitcoinExchange
{
	private:

	public:
		BitcoinExchange();
		BitcoinExchange(const BitcoinExchange& constrCopy);
		BitcoinExchange& operator=(const BitcoinExchange& constrCopy);
		~BitcoinExchange();
};

std::ostream& operator<<(std::ostream &output, const BitcoinExchange& constrCopy); */

#endif
