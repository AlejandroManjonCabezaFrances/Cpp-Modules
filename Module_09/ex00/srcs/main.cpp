/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon <amanjon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 18:18:31 by amanjon-          #+#    #+#             */
/*   Updated: 2025/01/22 22:37:24 by amanjon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/BitcoinExchange.hpp"

int main(int argc, char **argv)
{
	try
	{
		if (argc != 2)
		{
			throw (std::invalid_argument("Error: could not open file."));
			return (1);
		}
		else
			btcExchange(argv[1]);
	}
	catch(const std::exception &error)
	{
		std::cerr << error.what() << std::endl;
	}
	
	return (0);
}
