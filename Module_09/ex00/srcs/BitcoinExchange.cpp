/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon <amanjon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 18:18:35 by amanjon-          #+#    #+#             */
/*   Updated: 2025/01/30 17:40:31 by amanjon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/BitcoinExchange.hpp"

/**
 * std::stoi(value) --> c++11 . 
 * Función (std::stoi y stringToInt), convierten un cadena std::string en un int
 * iss >> num; --> creas un flujo de entrada para la manipulacion de std::string a int
*/
double	stringToDouble(const std::string &value)
{
	std::istringstream	iss(value);
	double				num;
	
	iss >> num;
	
	if (iss.fail() || num > INT_MAX)
	{
		std::cerr << "Error: too large a number." << std::endl;
		return (0);
	}
		
	return (num);		 
}


void	parseFileCsv(std::string &line, std::map<std::string, double> &data)
{
	std::istringstream	iss(line);
	std::string 		dateCsv;
	std::string 		valueCsvS;
	char 				delimiter = ',';
	double				resultBtc;
	double				valueCsv;
	double 				valueTxt;
	
	if (getline(iss, dateCsv, delimiter) && getline(iss, valueCsvS))
	{
		valueCsv = stringToDouble(valueCsvS);
		std::map<std::string, double>::iterator it = data.find(dateCsv);
		if (it != data.end())
		{
			valueTxt = it->second;
			resultBtc = valueTxt * valueCsv;
		}
		usleep(50000);
	}
}

void	readFileCsv(std::map<std::string, double> &data)
{
	std::string	fileCsv = "data.csv";
	std::string line;
	std::ifstream file(fileCsv.c_str());

	if (!file.is_open())
		throw (std::runtime_error("Error: could not open file."));
	while (std::getline(file, line))
	{
		parseFileCsv(line, data);
	}
	
	file.close();
}

/**
 * Parseo del valor (value) del archivo .txt (no negativos, rango adecuado)
*/
/* void	FileProcessor::parseFileTxt1(std::string date, std::string &value)
{
	double numTxt;
	
	numTxt = stringToDouble(value);
	if (value[1] == '-')
		std::cerr << "Error: not a positive number." << std::endl;
	if (numTxt > 0 && numTxt <= 1000)
		readFileCsv(date, numTxt);
} */

/**
 * Guarda la fecha y valor en sus atributos correspondientes, pudiéndole pasar a la función
   un delimitador u otro (',' / '|')
 * std::istringstream (flujo de entrada de cadena)
 * Parseo del valor (value) del archivo .txt (no negativos, rango adecuado)
*/
void	FileProcessor::parseFileTxt(std::string &line, char delimiter)
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
			data[date] = valueTxt;
			readFileCsv(data);
			/* parseFileTxt1(date, value); */
	}
	else
		std::cout << "Error: bad input => " << date << std::endl;
	
}

/**
 * Guardamos cada linea del archivo pasado
 * std::ifstream (flujo de entrada de archivo)
*/
void	FileProcessor::readFileTxt(const std::string &fileName, char delimiter)
{
	std::map<std::string, double>::iterator it;
	std::ifstream file(fileName.c_str());
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
void    FileProcessor::btcExchange()
{
	std::string fileTxt = "input_prueba.txt";
	/* std::string fileTxt = "input.txt"; */
	/* std::string	fileCsv = "data.csv"; */
	char		delimiterOne = '|';
	/* char		delimiterTwo = ','; */

	readFileTxt(fileTxt, delimiterOne);
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
