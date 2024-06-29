/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon- <amanjon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 00:59:00 by amanjon-          #+#    #+#             */
/*   Updated: 2024/06/29 05:12:30 by amanjon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream> // Entrada/salida en consola
#include <fstream> // Para gestionar archivos .txt
#include <iomanip>
#include <string> // Para trabajar con std::string
#include <algorithm> // To use std::replace "forbidden"

/* int main()
{ 
	std::string str;

	str = "Lo que diga el papi";
	std::replace(str.begin(), str.end(), 'a', 'X');
	std::cout << str << std::endl;
	
	return (0);
} */

int	parsingArgv(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cerr << "Enter 4 arguments." << std::endl;
		return (1);
	}
	if (argv[2][1] || argv[3][1])
		std::cout << "2º and 3º arguments should be one character. " << std::endl
		<< "The first character of each argument will be taken, " << std::endl
		<< "like the replace function" << std::endl;
	return (0);
}

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

int main(int argc, char **argv)
{
	parsingArgv(argc, argv);
	
	std::string infileStr = argv[1];
	std::string oldStr = argv[2];
	std::string newStr = argv[3];
											
	std::ifstream infile(infileStr.c_str()); // el constructor del objeto ifstream necesita un const char *.
	if (!infile.is_open())					 // Prepara el archivo solo en escritura, poniendo un puntero al principio del mismo 
	{
		std::cerr << "Error: don `t open infile" << std::endl;
		return (1);
	}
	std::string outfileStr = infileStr + ".replace";
	
	std::ofstream outfile(outfileStr.c_str()); // Peprara el archivo en modo escritura, si no existe lo crea, si existe lo trunca.
	if (!outfile.is_open())
	{
		std::cerr << "Error: don `t open outfile" << std::endl;
		return(1);
	}
	replaceText(argv, infile, outfile);
	
	return (0);
}


/* int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cerr << "Wrong number of arguments." << std::endl;
		return (1);
	}

	std::ifstream	infile(argv[1]);
	if (!infile.is_open())
	{
		std::cerr << "Error opening file." << std::endl;
		return (1);
	}

	std::string		outfile_name(argv[1]);
	std::ofstream	outfile;
	outfile_name.append(".replace");
	outfile.open(outfile_name.c_str());
	
	std::string		content;
	std::string		searchWord(argv[2]);
	std::string		replaceWord(argv[3]);
	std::getline(infile, content, '\0');
	size_t			pos = content.find(searchWord);
	while (pos != std::string::npos)
	{
		content.erase(pos, searchWord.length());
		content.insert(pos, replaceWord);
		pos = content.find(searchWord);
	}
	outfile << content;

	infile.close();
	outfile.close();
	
	return (0);
} */

/* int inputHandling(std::string &s1)
{

	if (s1.empty())
	{
		std::cout << RED << "ERROR: " << RESET << "The second argument cannot be empty" << std::endl;
		return (1);
	}
	if (s1.find("\n") != std::string::npos)
		s1.erase(s1.find("\n"), 1);
	return (0);
}

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << RED << "\nERROR: " << RESET << "params are <filename> <string1> <string2>\n" << RESET << std::endl;
		return 1;
	}
	std::ifstream infile(argv[1]);
	std::string filename(argv[1]);
	std::string new_filename = filename.c_str(); 
	new_filename +=	".replace";
	std::ofstream outfile(new_filename.c_str());
	
	size_t pos;
	std::string line;
	std::string newline;
	
	std::string s1 (argv[2]);
	std::string s2 (argv[3]);
	if (s1 == s2)
	{
		while (getline(infile, line))
			outfile << line.append("\n");
		infile.close();
		return (0);
	}
	if (inputHandling(s1))
		return (2);
	if (infile.is_open())
	{
		while (getline(infile, line))
		{
			pos = line.find(s1, 0);
			if (pos == std::string::npos)
			{
				outfile << line.append("\n");
				continue;
			}
			while (pos != std::string::npos)
			{
				
				line.erase(pos, s1.size());
				newline = line.insert(pos, s2);
				pos = line.find(s1);
			}
			outfile << newline << std::endl;
		}
		infile.close();
		return (0);
	}
	else
	{
		std::cout << RED << "\nERROR: " << RESET 
			<< "Non-existent file or Missing permissions for '" 
			<< argv[1] << "'\n" << std::endl;
		return (3);
	}
	return (0);
} */