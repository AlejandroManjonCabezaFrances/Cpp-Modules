/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon- <amanjon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 00:59:00 by amanjon-          #+#    #+#             */
/*   Updated: 2024/10/03 15:25:40 by amanjon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream> // To archives.txt
#include <iomanip>
#include <string> // To std::string
//#include <algorithm> //To use std::replace "forbidden"

/**
 * INPUT: ./replace Makefile a x
 * Parses arguments, pointers to NULL and size of arguments 3 and 4.
 * @param	int argc, char **argv
 * @return	int
*/
int	parsingArgv(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cerr << "Enter 4 arguments." << std::endl;
		return (1);
	}
	if (argv[1] == NULL || argv[2] == NULL || argv[3] == NULL)
		return(1);
	if (!argv[2][0] || !argv[3][0])
		return (1);
	if (argv[2][1] || argv[3][1])
		std::cout << "2º and 3º arguments should be one character. " << std::endl
		<< "The first character of each argument will be taken, " << std::endl
		<< "like the replace function" << std::endl;
	return (0);
}

/**
 * Replace argument 3 with 4, reading the input file and writing the line to the output file.
 * @param	char **argv, std::ifstream& infile, std::ofstream& outfile
 * @return	void
*/
void	replaceText(char **argv, std::ifstream& infile, std::ofstream& outfile)
{
	std::string line;
	size_t i;
	while (std::getline(infile, line))
	{
		i = 0;
		while (i < line.size())
		{
			if (line[i] == *argv[2])
				line[i] = *argv[3];
			i++;
		}
		outfile << line << std::endl;
	}
}

/**
 * std::ifstream: prepares file only on read, putting a pointer at the beginning of it.
 * c_str(): transforms a std::string into a const char *.
 * std::ofstream: prepares file only on write, if it does not exist it creates it, if it exists, will be truncates.
 * @param	int argc, char **argv
 * @return	int
*/
int main(int argc, char **argv)
{
	if (parsingArgv(argc, argv) == 1)
		return (1);
	std::string infileStr = argv[1];
	std::string oldStr = argv[2];
	std::string newStr = argv[3];								
	std::ifstream infile(infileStr.c_str());
	if (!infile.is_open()) 
	{
		std::cerr << "Error: don `t open infile" << std::endl;
		return (1);
	}
	std::string outfileStr = infileStr + ".replace";
	
	std::ofstream outfile(outfileStr.c_str());
	if (!outfile.is_open())
	{
		std::cerr << "Error: don `t open outfile" << std::endl;
		return(1);
	}
	replaceText(argv, infile, outfile);
	
	infile.close();
	outfile.close();
	return (0);
}

/**
 * Testing the std::replace function, which is forbidden in this exercise.
 * @param
 * @return	int
*/
/* int main()
{ 
	std::string str;

	str = "Lo que diga el papi";
	std::replace(str.begin(), str.end(), 'a', 'X');
	std::cout << str << std::endl;
	
	return (0);
} */
