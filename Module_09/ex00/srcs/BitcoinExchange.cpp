/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon <amanjon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 18:18:35 by amanjon-          #+#    #+#             */
/*   Updated: 2025/01/28 22:47:38 by amanjon          ###   ########.fr       */
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
	{
		std::cerr << "Error: too large a number." << std::endl;
		return (0);
	}
		
	return (num);		 
}

void	ParseFileCsv(std::string &line, std::string &dateTxt, std::string &valueTxt)
{
	std::istringstream	iss(line);
	std::string 		dateCsv;
	std::string 		valueCsv;
	char 				delimiter = ',';

	dateTxt = ""; // silenciar compilados "not used"
	valueTxt = "";
	

	if (getline(iss, dateCsv, delimiter) && getline(iss, valueCsv))
	{
		// Tengo tanto los datos parseados del txt como los del csv, me falta hacer funcion que busque fecha, y cambie valor del bitcoin
		// make function "looking for date" and "change value of Bitcoin""
		std::cout << "dateCsv: " << dateCsv << std::endl;
		std::cout << "valueCsv: " << valueCsv << std::endl;
	}
}

void	readFileCsv(std::string &dateTxt, std::string &valueTxt)
{
	std::string	fileCsv = "data.csv";
	std::string line;
	std::ifstream file(fileCsv.c_str());

	if (!file.is_open())
		throw (std::runtime_error("Error: could not open file."));
	while (std::getline(file, line))
		ParseFileCsv(line, dateTxt, valueTxt);
	
	file.close();

	
}

/**
 * Parseo del valor (value) del archivo .txt (no negativos, rango adecuado)
*/
void	FileProcessor::parseFileTxt1(std::string date, std::string &value)
{
	if (value[1] == '-')
		std::cerr << "Error: not a positive number." << std::endl;
	if (stringToInt(value) > 0 && stringToInt(value) <= 1000)
		readFileCsv(date, value);
}

/**
 * Guarda la fecha y valor en sus atributos correspondientes, pudiéndole pasar a la función
   un delimitador u otro (',' / '|')
 * std::istringstream (flujo de entrada de cadena)
*/
void	FileProcessor::parseFileTxt(std::string &line, char delimiter)
{
	std::string	date;
	std::string	value;
	std::istringstream iss(line);	// Se crea nuevo flujo de entrada para la linea
	
	if (getline(iss, date, delimiter) && getline(iss, value) && line.find(delimiter))
		parseFileTxt1(date, value);
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
