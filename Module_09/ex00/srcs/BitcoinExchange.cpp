/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon <amanjon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 18:18:35 by amanjon-          #+#    #+#             */
/*   Updated: 2025/01/31 12:35:29 by amanjon          ###   ########.fr       */
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
/**
 * 
*/
double	SearchingInTheFileCsv(std::string &line, std::map<std::string, double> &data)
{
	std::istringstream	iss(line);
	std::string 		dateCsv;
	std::string 		valueCsv1;
	double				resultBtc;
	double				valueCsv;
	double 				valueTxt;
	char 				delimiter = ',';
	
	if (getline(iss, dateCsv, delimiter) && getline(iss, valueCsv1))
	{
		valueCsv = stringToDouble(valueCsv1);
		std::map<std::string, double>::iterator it = data.find(dateCsv);
		

		if (it != data.end()) // Revisar el contenedor (archivo txt y no csv que me he liado)
		{
			valueTxt = it->second;
			resultBtc = valueTxt * valueCsv;
		}
		else
		{
			std::map<std::string, double>::iterator ite = data.begin();
			if (it != data.begin())
			{
				if (ite->first.compare(dateCsv) < 0)
				{
					std::cout << "ite = " << ite->first << std::endl;
					--ite;
					std::cout << "ite prev = " << ite->first << std::endl;
				}
/* 				std::cout << "Resultado de compare(): " << ite->first.compare(dateCsv) << std::endl;
				std::cout << "dateCsv: " << dateCsv << std::endl; */
				
				/* usleep(50000); */
			}
		}
	}
	return (resultBtc);
}

/**
 * Abrimos archivo .csv, leemos linea a linea con flujo de entrada
 * Función "SearchingInTheFileCsv", busca fecha en .csv y multiplica valor de btc
 * Si todo es correcto, imprimimos resultado final "fecha => Nº btc = $"
*/
void	readFileCsv(std::map<std::string, double> &data)
{
	std::string		fileCsv = "data.csv";
	std::string 	line;
	std::ifstream 	file(fileCsv.c_str());
	double			resultBtc;

	if (!file.is_open())
		throw (std::runtime_error("Error: could not open file."));
	while (std::getline(file, line))
		resultBtc = SearchingInTheFileCsv(line, data);
	for (std::map<std::string, double>::iterator it = data.begin(); it != data.end(); ++it)
   		std::cout << it->first << " => " << it->second << " = " << resultBtc << std::endl;
	
	file.close();
}

/**
 * Guardamos la info del archivo .txt en date y value y ckeckeamos existencia del delimiter "|"
 * Chekeamos números neg. y eliminamos espacios al principio y al final
 * data[date] = valueTxt; --> Contenedor std::map que almacena pares "clave-valor" / "date-value"
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
			date.erase(0, date.find_first_not_of(" \t\r\n"));
			date.erase(date.find_last_not_of(" \t\r\n") + 1);
			data[date] = valueTxt;
			readFileCsv(data);
		}
	}
	else
		std::cout << "Error: bad input => " << date << std::endl;
}

/**
 * Abrimos y guardamos cada línea del archivo pasado
 * std::ifstream (flujo de entrada del archivo .txt)
*/
void    readFileTxt()
{
	std::string								fileTxt = "input_prueba.txt";
	std::string 							line;
	std::ifstream 							file(fileTxt.c_str());
	std::map<std::string, double>::iterator it;
	char									delimiter = '|';

	if (!file.is_open())
		throw (std::runtime_error("Error: could not open file."));
	while (std::getline(file, line))
		parseFileTxt(line, delimiter);
		
	file.close();
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
