/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon- <amanjon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 18:18:31 by amanjon-          #+#    #+#             */
/*   Updated: 2025/09/23 12:43:42 by amanjon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/BitcoinExchange.hpp"

/**
 *  Para debbugear con "gdb", poner estos 2 comandos:
1º  "gdb ./btc"
2º  "run input.txt"

 * $> ./btc
Error: could not open file.

 * $> ./btc input.txt
2011-01-03 => 3 = 0.9
2011-01-03 => 2 = 0.6
2011-01-03 => 1 = 0.3
2011-01-03 => 1.2 = 0.36
2011-01-09 => 1 = 0.32
Error: not a positive number.
Error: bad input => 2001-42-42
2012-01-11 => 1 = 7.1
Error: too large a number.
$>
*/
int main(int argc, char **argv)
{
	(void) argv;
	
	try
	{
/* 		if (argv[1] == NULL || std::strlen(argv[1]) == 0) 
    		throw std::invalid_argument("Error: empty filename."); */
		if (argc != 2)
			throw (std::invalid_argument("Error: could not open file."));
		else
			readFileTxt(argv[1]);
	}
	catch(const std::exception &error)
	{
		std::cerr << error.what() << std::endl;
	}
	
	return (0);
}
