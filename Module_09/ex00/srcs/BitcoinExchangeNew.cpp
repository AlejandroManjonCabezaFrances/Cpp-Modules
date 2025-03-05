/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchangeNew.cpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon- <amanjon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 07:34:42 by amanjon           #+#    #+#             */
/*   Updated: 2025/03/05 20:27:22 by amanjon-         ###   ########.fr       */
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
 * 
*/
std::map<std::string, double>	parseFileTxt(std::string &line, char delimiter)
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
			return (dataTxt);
		}
	}
	else
		std::cout << "Error: bad input => " << dateTxt << std::endl;
	
	return (dataTxt);
}

double	dateDontMatch(std::map<std::string, double> &dataTxt, std::map<std::string, double>::iterator &it, std::string &dateCsv, std::string &previousLine)
{
	int			resultCompare = 0; // local
	std::string	dateCsvPrev; // local
	std::string	valueCsvStrPrev; // local
	double		valueCsvPrev = 0.0; // local
	double		resultBtcPrev = 0.0; // local
	
/* 	std::cout << "LLEGA 3" << std::endl;
 */	if (!dataTxt.empty())
	{
/* 		std::cout << "LLEGA 4" << std::endl;
 */		it = dataTxt.begin();
		/* std::cout << "dateCsv = " << std::endl; */
		resultCompare = it->first.compare(dateCsv);
/* 		std::cout << "LLEGA 5" << std::endl;
 */	}
	
	/* std::cout << "resultCompare = " << valueCsvPrev << std::endl; */
	if (resultCompare < 0 && resultCompare != -50)
	{
/* 		std::cout << "LLEGA 6" << std::endl;
 */		std::istringstream	issPrev(previousLine);
		getline(issPrev, dateCsvPrev, ',') && getline(issPrev, valueCsvStrPrev);
		valueCsvPrev = stringToDouble(valueCsvStrPrev);
/* 		std::cout << "valueCsvPrev" << valueCsvPrev << std::endl;
 */		resultBtcPrev = (it->second) * valueCsvPrev;
		
		/* return (std::make_pair(resultBtcPrev, -1)); */
	}
	/* std::cout << "resultBtcPrev = " << resultBtcPrev << std::endl; */
	
	return (resultBtcPrev);
}

/**
 * Buscando en el archivo .csv
	- if(la fecha existe en el archivo .csv)
	- else(la fecha no se encuentra, hay que buscar la fecha anterior a la puesta en el .txt)
 
 * it->first.compare(dateCsv); --> lo que devuelve
  	- Un valor negativo si la cadena de la izquierda es menor que la de la derecha.
	- Cero si ambas cadenas son iguales.
	- Un valor positivo si la cadena de la izquierda es mayor que la de la derecha.
	
 * if (!dataTxt.empty()) --> dataTxt está vacío cuando valueTxt es negativo
*/
std::pair<double, int>	SearchingInTheFileCsv(std::map<std::string, double> &dataTxt, std::string &line, std::string &previousLine)
{
	std::istringstream	iss(line);
	std::string 		dateCsv;
	std::string 		valueCsvStr;
	double				resultBtc = 0.0;
	double				valueCsv = 0.0;
	double 				valueTxt = 0.0;
	
/* 	std::string			dateCsvPrev; // local
	std::string			valueCsvStrPrev; // local
	double				valueCsvPrev; // local
	int 				resultCompare = 0; // local */
	
	double				resultBtcPrev; // local
	
	if (getline(iss, dateCsv, ',') && getline(iss, valueCsvStr))
	{
		valueCsv = stringToDouble(valueCsvStr);
/* 		std::cout << "dateCsv = " << dateCsv << std::endl;
 */		std::map<std::string, double>::iterator it = dataTxt.find(dateCsv);
		
/* 		std::cout << "LLEGA 1" << std::endl;
 */		
		if (it != dataTxt.end()) // la fecha coincide en .Cvs y .Txt
		{
/* 			std::cout << "LLEGA 2" << std::endl;
 */			valueTxt = it->second;
			resultBtc = valueTxt * valueCsv;
			return (std::make_pair(resultBtc, 1));
		}
  		else					// no coincide fechas
		{			
/* 			if (!dataTxt.empty())
			{
				it = dataTxt.begin();
				resultCompare = it->first.compare(dateCsv);
			}
			
			if (resultCompare < 0 && resultCompare != -50)
			{
				std::istringstream	issPrev(previousLine);
				getline(issPrev, dateCsvPrev, ',') && getline(issPrev, valueCsvStrPrev);
				valueCsvPrev = stringToDouble(valueCsvStrPrev);
				resultBtcPrev = (it->second) * valueCsvPrev; */

				
				resultBtcPrev = dateDontMatch(dataTxt, it, dateCsv, previousLine);
				
				/* return (std::make_pair(dateDontMatch(dataTxt, it, dateCsv, previousLine), -1)); */
				return (std::make_pair(resultBtcPrev, -1));
			/* } */
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
	std::string 			previousLine = "";

	if (!file.is_open())
		throw (std::runtime_error("Error: could not open file."));
	
		
	{
		/* std::cout << "currentLine = " << currentLine << std::endl;  */
		resultBtc = SearchingInTheFileCsv(dataTxt, currentLine, previousLine);
/* 		std::cout << "LLEGA 7" << std::endl;
 */		previousLine = currentLine;
 		/* sleep (1); */
		if (resultBtc.second == 1)
		{
/* 			std::cout << "LLEGA 8" << std::endl;
 */			for (std::map<std::string, double>::iterator it = dataTxt.begin(); it != dataTxt.end(); ++it)
				std::cout << it->first << " => " << it->second << " = " << resultBtc.first << std::endl;
			break;
		}
		else if (resultBtc.second == -1)
		{
/* 			std::cout << "LLEGA 9" << std::endl;
 */			for (std::map<std::string, double>::iterator it = dataTxt.begin(); it != dataTxt.end(); ++it)
   				std::cout << it->first << " => " << it->second << " = " << resultBtc.first << std::endl;
			break;
		}
	}
	file.close();
}

/**
 * Abrimos y guardamos cada línea del archivo pasado
 * std::ifstream (flujo de entrada del archivo .txt)
*/
void    readFileTxt(char *fileTxt)
{
	std::string 							line;
	std::ifstream 							file(fileTxt);
	std::map<std::string, double>			dataTxt;
	
	if (!file.is_open())
		throw (std::runtime_error("Error: could not open file."));
	while (std::getline(file, line))
	{
		dataTxt = parseFileTxt(line, '|');
		readFileCsv(dataTxt);
	}	
	file.close();
}
