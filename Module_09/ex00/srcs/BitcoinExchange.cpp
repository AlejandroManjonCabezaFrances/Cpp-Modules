/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon- <amanjon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 18:18:35 by amanjon-          #+#    #+#             */
/*   Updated: 2025/01/30 22:59:34 by amanjon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/BitcoinExchange.hpp"

/**
 * std::stoi(value) --> c++11 . función convierte std::string a int
 * std::stod(value) --> c++11 . función convierte std::string a double
 * Función (stringToDouble), convierten un cadena std::string en un double
 * iss >> num; --> creas un flujo de entrada para la manipulacion de std::string a double
*/
double	stringToDouble(const std::string &value)
{
	std::istringstream	iss(value);
	double				num;
	
	iss >> num;
	if ((iss.fail() || num > INT_MAX) && value != "exchange_rate")
	{
		std::cerr << "Error: too large a number." << std::endl;
		return (0);
	}

	return (num);		 
}

double	parseFileCsv(std::string &line, std::map<std::string, double> &data)
{
	std::istringstream	iss(line);
	std::string 		dateCsv;
	std::string 		valueCsv1;
	char 				delimiter = ',';
	double				resultBtc;
	double				valueCsv;
	double 				valueTxt;
	
	if (getline(iss, dateCsv, delimiter) && getline(iss, valueCsv1))
	{
		valueCsv = stringToDouble(valueCsv1);
		std::map<std::string, double>::iterator it = data.find(dateCsv);

		if (it != data.end())
		{
			valueTxt = it->second;
			resultBtc = valueTxt * valueCsv;
		}
		/* usleep(50000); */
	}
	return (resultBtc);
}

void	readFileCsv(std::map<std::string, double> &data)
{
	std::string		fileCsv = "data.csv";
	std::string 	line;
	std::ifstream 	file(fileCsv.c_str());
	double			resultBtc;

	if (!file.is_open())
		throw (std::runtime_error("Error: could not open file."));
	while (std::getline(file, line))
		resultBtc = parseFileCsv(line, data);
	for (std::map<std::string, double>::iterator it = data.begin(); it != data.end(); ++it)
   		std::cout << it->first << " => " << it->second << " = " << resultBtc << std::endl;
	
	file.close();
}

/**
 * Guarda la fecha y valor en sus atributos correspondientes, pudiéndole pasar a la función
   un delimitador u otro (',' / '|')
 * std::istringstream (flujo de entrada de cadena)
 * Parseo del valor (value) del archivo .txt (no negativos, rango adecuado)
*/
void	parseFileTxt(std::string &line, char delimiter)
{
	std::map<std::string, double>	data;
	std::istringstream 				iss(line);
	std::string						date;
	std::string						value;
	double 							valueTxt;
	
	if (getline(iss, date, delimiter) && getline(iss, value) && line.find(delimiter))
	{
		valueTxt = stringToDouble(value);
	
		if (value[1] == '-')
			std::cerr << "Error: not a positive number." << std::endl;
		if (valueTxt > 0 && valueTxt <= 1000)
		{
			date.erase(0, date.find_first_not_of(" \t\r\n"));  // Elimina espacios al inicio
			date.erase(date.find_last_not_of(" \t\r\n") + 1);  // Elimina espacios al final
			data[date] = valueTxt;
			readFileCsv(data);
		}
	}
	else
		std::cout << "Error: bad input => " << date << std::endl;
	
}

/**
 * Guardamos cada linea del archivo pasado
 * std::ifstream (flujo de entrada de archivo)
*/
void	readFileTxt(const std::string &fileTxt, char delimiter)
{
	std::map<std::string, double>::iterator it;
	std::ifstream file(fileTxt.c_str());
	std::string line;

	if (!file.is_open())
		throw (std::runtime_error("Error: could not open file."));
	while (std::getline(file, line))
			parseFileTxt(line, delimiter);
	file.close();
}

/**
 * 
*/
void    btcExchange()
{
	std::string fileTxt = "input_prueba.txt";
	/* std::string fileTxt = "input.txt"; */
	/* std::string	fileCsv = "data.csv"; */
	char		delimiter = '|';
	/* char		delimiterTwo = ','; */

	readFileTxt(fileTxt, delimiter);
	/* readFile(fileCsv, delimiterTwo); */
}













/* BitcoinExchange::BitcoinExchange()
{
}

BitcoinExchange::BitcoinExchange()
{
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& constrCopy)
{	
}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& constrCopy)
{
	if (this != &constrCopy)
	{

	}

	return (*this);
}

BitcoinExchange::~BitcoinExchange()
{
} */
