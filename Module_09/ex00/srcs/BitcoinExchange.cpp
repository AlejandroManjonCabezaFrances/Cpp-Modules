/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon- <amanjon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 18:18:35 by amanjon-          #+#    #+#             */
/*   Updated: 2025/01/24 15:23:10 by amanjon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/BitcoinExchange.hpp"

void	ParseFileTxt(/* char *inputTxt */)
{
	std::map<std::string, double> data;
	std::ifstream file("input.txt");
	std::string line;

	if (!file.is_open())
	{
		throw (std::runtime_error("Error: could not open file."));
		return;
	}

	while (std::getline(file, line))
		std::cout << line << std::endl;
	
	file.close();
}

void	ParseFileCsv()
{
	std::map<std::string, double> data;
	std::ifstream file("data.csv");
	std::string line;

	if (!file.is_open())
	{
		throw (std::runtime_error("Error: could not open file."));
		return;
	}

	while (std::getline(file, line))
		std::cout << line << std::endl;
	
	file.close();
}

void    btcExchange(/* char *inputTxt */)
{
	ParseFileTxt(/* inputTxt */);
	ParseFileCsv();
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
