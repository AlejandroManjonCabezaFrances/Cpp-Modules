/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon- <amanjon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 18:18:35 by amanjon-          #+#    #+#             */
/*   Updated: 2025/02/11 13:44:21 by amanjon-         ###   ########.fr       */
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
 * Buscando en el archivo .csv
   - if(la fecha existe en el archivo .csv)
   - else(la fecha no se encuentra, hay que buscar la fecha anterior a la puesta en el .txt)
 
 * - Un valor negativo si la cadena de la izquierda es menor que la de la derecha.
   - Cero si ambas cadenas son iguales.
   - Un valor positivo si la cadena de la izquierda es mayor que la de la derecha.
*/
double	SearchingInTheFileCsv(std::string &line, std::map<std::string, double> &dataTxt, std::string &previousLine)
{
	std::istringstream	iss(line);
	std::string 		dateCsv;
	std::string 		valueCsvStr;
	double				resultBtc;
	double				valueCsv;
	double 				valueTxt;

	// Prev.
	std::string			dateCsvPrev;
	std::string			valueCsvStrPrev;
	double				valueCsvPrev;
	std::string			resultBtcPrev;

	int resultCompare = 99;
	/* previousLine = ' '; */
	
	if (getline(iss, dateCsv, ',') && getline(iss, valueCsvStr))
	{
		valueCsv = stringToDouble(valueCsvStr);
		std::map<std::string, double>::iterator it = dataTxt.find(dateCsv);
		
		if (it != dataTxt.end())
		{
			valueTxt = it->second;
			std::cout << "valueTxt: " << std::endl;
			resultBtc = valueTxt * valueCsv;
		}
  		else
		{
			it = dataTxt.begin();
			
			resultCompare = it->first.compare(dateCsv);
				std::cout << "resulCompare: " << resultCompare << std::endl;
			if (resultCompare < 0)
			{
				std::cout << "previousLine: " << previousLine << std::endl;
				std::istringstream	issPrev(previousLine);
				getline(issPrev, dateCsvPrev, ',') && getline(issPrev, valueCsvStrPrev);
				valueCsvPrev = stringToDouble(valueCsvStrPrev);
				std::map<std::string, double>::iterator itPrev = dataTxt.find(dateCsvPrev);
				
				resultBtcPrev = itPrev->second * valueCsvPrev;
				std::cout << "itPrev->second* * * * * * * *: " << itPrev->second << std::endl;
				std::cout << "valueCsvPrev* * * * * * * *: " << valueCsvPrev << std::endl;
				for (std::map<std::string, double>::iterator it = dataTxt.begin(); it != dataTxt.end(); ++it)
   					std::cout << it->first << " => " << it->second << " = " << resultBtcPrev << std::endl;

				
				std::cout << "dateCsvPrev: " << dateCsvPrev << std::endl;
				std::cout << "valueCsvPrev: " << valueCsvPrev << std::endl;
				usleep(50000);
				/* return (resultBtc); */
				
				
			}
			usleep(50000);
		}
	} 
	return (resultBtc);
}

/**
 * Abrimos archivo .csv, leemos linea a linea con flujo de entrada
 * Función "SearchingInTheFileCsv", busca fecha en .csv y multiplica valor de btc
 * Si todo es correcto, imprimimos resultado final "fecha => Nº btc = $"
*/
void	readFileCsv(std::map<std::string, double> &dataTxt)
{
	std::string		fileCsv = "data.csv";
	std::string 	line;
	std::ifstream 	file(fileCsv.c_str());
	double			resultBtc = 0;
	std::string 	currentLine;  
	std::string 	previousLine;

	if (!file.is_open())
		throw (std::runtime_error("Error: could not open file."));
	while (std::getline(file, currentLine))
	{
		resultBtc = SearchingInTheFileCsv(currentLine, dataTxt, previousLine);
		std::cout << "previousLine**********: " << previousLine << std::endl;

		previousLine = currentLine; // este condicional podria ser el problema
/* 		if (resultBtc == -1.0)
			break; */
	}
	for (std::map<std::string, double>::iterator it = dataTxt.begin(); it != dataTxt.end(); ++it)
   		std::cout << it->first << " => " << it->second << " = " << resultBtc << std::endl;
	
	file.close();
}

/**
 * Guardamos la info del archivo .txt en date y value y ckeckeamos existencia del delimiter "|"
 * Chekeamos números neg. y eliminamos espacios al principio y al final
 * dataTxt[date] = valueTxt; --> Contenedor std::map que almacena pares "clave-valor" / "date-value"
*/
void	parseFileTxt(std::string &line, char delimiter)
{
	std::map<std::string, double>	dataTxt;
	std::istringstream 				iss(line);
	std::string						dateTxt;
	std::string						valueTxTStr;
	double 							valueTxt;
	
	if (getline(iss, dateTxt, delimiter) && getline(iss, valueTxTStr) && line.find(delimiter))
	{
		valueTxt = stringToDouble(valueTxTStr);
	
		if (valueTxTStr[1] == '-')
			std::cerr << "Error: not a positive number." << std::endl;
		if (valueTxt > 0 && valueTxt <= 1000)
		{
			dateTxt.erase(0, dateTxt.find_first_not_of(" \t\r\n"));
			dateTxt.erase(dateTxt.find_last_not_of(" \t\r\n") + 1);
			dataTxt[dateTxt] = valueTxt;
			readFileCsv(dataTxt);
		}
	}
	else
		std::cout << "Error: bad input => " << dateTxt << std::endl;
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
