/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon- <amanjon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 18:18:35 by amanjon-          #+#    #+#             */
/*   Updated: 2025/01/27 22:48:53 by amanjon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/BitcoinExchange.hpp"

/**
 * std::stoi(value) --> c++11 . 
 * Función (std::stoi y stringToInt), convierten un cadena std::string en un int
 * iss >> num; --> creas un flujo de entrada para la manipulacion de std::string a int
*/
int	stringToInt(const std::string &value)
{
	std::istringstream	iss(value);
	int					num;
	
	iss >> num;
	
	if (iss.fail() || num > INT_MAX)
		throw (std::invalid_argument("Error: too large a number."));

	return (num);		 
}

/**
 * Parseo del valor (value) del archivo .txt (no negativos, rango adecuado)
*/
void	parseFileTxt1( std::string &value)
{
	if (value[1] == '-')
	{
		std::cerr << "Error: not a positive number." << std::endl;
		return;
	}
	if (stringToInt(value) > 0 && stringToInt(value) <= 1000)
		std::cout << "parseo del .txt ok: transformar value x valor btc .csv" << std::endl;

		
}

/**
 * Guarda la fecha y valor en sus atributos correspondientes, pudiéndole pasar a la función
   un delimitador u otro (',' / '|')
 * std::istringstream (flujo de entrada de cadena)
*/
std::pair<std::string, std::string>	parseFileTxt(std::string &line, char delimiter)
{
	std::string	date;
	std::string	value;
	std::istringstream iss(line);	// Se crea nuevo flujo de entrada para la linea
	
	if (getline(iss, date, delimiter) && getline(iss, value) && line.find(delimiter))
	{
		/* std::cout << "date: " << date << std::endl;
		std::cout << "value: " << value << std::endl; */
		parseFileTxt1(value);
	}
	else
		std::cout << "Error: bad input => " << date << std::endl;
	
	return (std::make_pair(date, value));
}

void	parseFileCsv(std::string &date, std::string &value)
{
	std::cout << "date = " << date << std::endl;
	std::cout << "value = " << value << std::endl;
}

/**
 * Guardamos cada linea del archivo pasado
 * std::ifstream (flujo de entrada de archivo)
*/
void	readFile(const std::string &fileName, char delimiter)
{
	std::map<std::string, double> data;
	std::ifstream file(fileName.c_str());
	std::string line;
	std::pair<std::string, std::string> pair;

	if (!file.is_open())
	{
		throw (std::runtime_error("Error: could not open file."));
	}

	while (std::getline(file, line))
	{
		/* std::cout << line << std::endl; */
		if (fileName == "input.txt")
		{
			pair = parseFileTxt(line, delimiter);
/* 			std::cout << "pair.first = " << pair.first << std::endl;
			std::cout << "pair.second = " << pair.second << std::endl; */
		}
		else
			parseFileCsv(pair.first, pair.second);
			
		usleep(10000);
	}
		
	file.close();
}

/**
 * 
*/
void    btcExchange()
{
	std::string fileTxt = "input_prueba.txt";
	/* std::string fileTxt = "inpu.txt"; */
	/* std::string	fileCsv = "data.csv"; */
	char		delimiterOne = '|';
	/* char		delimiterTwo = ','; */

	readFile(fileTxt, delimiterOne);
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
