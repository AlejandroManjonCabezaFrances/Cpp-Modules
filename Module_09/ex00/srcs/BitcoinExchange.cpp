/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon <amanjon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 18:18:35 by amanjon-          #+#    #+#             */
/*   Updated: 2025/02/13 10:30:14 by amanjon          ###   ########.fr       */
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
	std::cout << "num: " << num << std::endl;
	std::cout << "value: " << value << std::endl;
	
	if (value != "exchange_rate")
	{
		if ((iss.fail() || num > INT_MAX))
		{
			std::cerr << "Error: too large a number." << std::endl;
			return (0);
		}
	}

	return (num);		 
}
/**
 * Buscando en el archivo .csv
	- if(la fecha existe en el archivo .csv)
	- else(la fecha no se encuentra, hay que buscar la fecha anterior a la puesta en el .txt)
 
 * it->first.compare(dateCsv); --> lo que devuelve
  	- Un valor negativo si la cadena de la izquierda es menor que la de la derecha.
	- Cero si ambas cadenas son iguales.
	- Un valor positivo si la cadena de la izquierda es mayor que la de la derecha.
*/
std::pair<double, int>	SearchingInTheFileCsv(std::string &line, std::map<std::string, double> &dataTxt, std::string &previousLine)
{
	std::istringstream	iss(line);
	std::string 		dateCsv;
	std::string 		valueCsvStr;
	double				resultBtc;
	double				valueCsv;
	double 				valueTxt;
	
	std::string			dateCsvPrev;
	std::string			valueCsvStrPrev;
	double				valueCsvPrev;
	double				resultBtcPrev;
	int 				resultCompare = 0;
	
	if (getline(iss, dateCsv, ',') && getline(iss, valueCsvStr))
	{
		valueCsv = stringToDouble(valueCsvStr);
		std::map<std::string, double>::iterator it = dataTxt.find(dateCsv);
		
		if (it != dataTxt.end())
		{
			valueTxt = it->second;
			resultBtc = valueTxt * valueCsv;
		}
  		else
		{
			it = dataTxt.begin();
			resultCompare = it->first.compare(dateCsv);
			
			std::cout << "1resultCompare: " << resultCompare << std::endl;
			if (resultCompare < 0 && resultCompare != -50)
			{
				std::istringstream	issPrev(previousLine);
				getline(issPrev, dateCsvPrev, ',') && getline(issPrev, valueCsvStrPrev);
				std::cout << "valueCsvStrPrev:::***:: " << valueCsvStrPrev << std::endl;
				valueCsvPrev = stringToDouble(valueCsvStrPrev);
				std::cout << "it->second: " << it->second << std::endl;
				std::cout << "valueCsvPrev: " << valueCsvPrev << std::endl;
				resultBtcPrev = (it->second) * valueCsvPrev;
				usleep(50000);
				std::cout << "resultBtcPrev**: " << resultBtcPrev << std::endl;
				return (std::make_pair(resultBtcPrev, -1));
				
/* 				for (std::map<std::string, double>::iterator it = dataTxt.begin(); it != dataTxt.end(); ++it)
				{
   					std::cout << it->first << " => " << it->second << " = " << resultBtcPrev << std::endl;
					break;
				} */
			}
			usleep(50000);
		}
	} 
	return (std::make_pair(resultBtc, 0));
}

/**
 * Abrimos archivo .csv, leemos linea a linea con flujo de entrada
 * Función "SearchingInTheFileCsv", busca fecha en .csv y multiplica valor de btc
 * Si todo es correcto, imprimimos resultado final "fecha => Nº btc = $"
*/
void	readFileCsv(std::map<std::string, double> &dataTxt)
{
	std::string				fileCsv = "data.csv";
	std::string 			line;
	std::ifstream 			file(fileCsv.c_str());
	std::pair<double, int>	resultBtc;
	std::string 			currentLine;  
	std::string 			previousLine;

	if (!file.is_open())
		throw (std::runtime_error("Error: could not open file."));
	while (std::getline(file, currentLine))
	{
		resultBtc = SearchingInTheFileCsv(currentLine, dataTxt, previousLine);
		previousLine = currentLine;
		std::cout << "resultBtc:::::::::::: " << resultBtc.first << std::endl;
		std::cout << "resultBtc:::::::::::: " << resultBtc.second << std::endl;
		if (resultBtc.second == -1)
		{
			for (std::map<std::string, double>::iterator it = dataTxt.begin(); it != dataTxt.end(); ++it)
   				std::cout << it->first << " =>>>>>>>>>>> " << it->second << " = " << resultBtc.first << std::endl;
			/* break; */
		}
	}
	
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
