
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

/**
 *Un "stream (flujo)" puede ser de entrada (istream), de salida (ostream), o de entrada y salida (iostream).
*/
int      						main(int argc, char **argv);
void               	  			readFileTxt(char *fileTxt);
void	               			readFileCsv(std::map<std::string, double> &dataTxt);
std::pair<double, int>			SearchingInTheFileCsv(std::map<std::string, double> &dataTxt, std::string &line, std::string &previousLine);
double							returnResultPreviousLine(std::string &previousLine, std::map<std::string, double>::iterator &it);
std::map<std::string, double>	parseFileTxt(std::string &line, char delimiter);
double							stringToDouble(const std::string &value);

#endif
