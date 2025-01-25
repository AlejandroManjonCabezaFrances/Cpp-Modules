/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon <amanjon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 18:18:35 by amanjon-          #+#    #+#             */
/*   Updated: 2025/01/25 10:58:14 by amanjon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/BitcoinExchange.hpp"

/**
 * 
*/
void	parseFile(std::string &line, char delimiter)
{
	std::string	date;
	std::string	value;
	std::istringstream iss(line);	// Se crea nuevo flujo de entrada para la linea
	
	if (getline(iss, date, delimiter) && getline(iss, value))
	{
		std::cout << "date: " << date << std::endl;
		std::cout << "value: " << value << std::endl;
	}
}

/**
 * 
*/
void	readFile(const std::string &fileName, char delimiter)
{
	std::map<std::string, double> data;
	std::ifstream file(fileName.c_str());
	std::string line;

	if (!file.is_open())
	{
		throw (std::runtime_error("Error: could not open file."));
		return;
	}

	while (std::getline(file, line))
	{
		std::cout << line << std::endl;
		parseFile(line, delimiter);
	}
		
	file.close();

}

/**
 * 
*/
void    btcExchange()
{
	std::string fileTxt = "input.txt";
	std::string	fileCsv = "data.csv";
	char		delimiterOne = '|';
	char		delimiterTwo = ',';

	readFile(fileTxt, delimiterOne);
	readFile(fileCsv, delimiterTwo);
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
