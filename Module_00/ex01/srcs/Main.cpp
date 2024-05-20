/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon- <amanjon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 18:32:00 by amanjon-          #+#    #+#             */
/*   Updated: 2024/05/20 07:05:26 by amanjon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

int main()
{
	Phonebook phonebook;
	std::string	input;
	while (1)
	{
		std::cout << "write ADD, SEARCH OR EXIT" << std::endl;
		std::cin >> input;
		
		if (std::cin.eof())
			break;
		if (input == "ADD")
			phonebook.addContact();
		if (input == "SEARCH")
			phonebook.searchContact();
		if (input == "EXIT")
		{
			phonebook.exit();
			break;
		}
	}
	return (0);
}
