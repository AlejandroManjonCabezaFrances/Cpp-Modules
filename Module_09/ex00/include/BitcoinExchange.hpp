
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
#include <climits>
#include <cstdlib>

#include "../include/Colors.hpp"

/* class FileProcessor
{
	private:
		std::map<std::string, double> data;
	public:

}; */

/**
 *Un "stream (flujo)" puede ser de entrada (istream), de salida (ostream), o de entrada y salida (iostream).
*/
double	stringToDouble(const std::string &value);
std::pair<double, int>	SearchingInTheFileCsv(std::string &line, std::map<std::string, double> &dataTxt, std::string &previousLine);
void	readFileCsv(std::map<std::string, double> &data);

void  	readFileTxt();
void	parseFileTxt(std::string &line, char delimiter);
	










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
