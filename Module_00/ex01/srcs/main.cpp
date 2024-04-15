/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon- <amanjon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 18:32:00 by amanjon-          #+#    #+#             */
/*   Updated: 2024/04/15 18:51:56 by amanjon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int main()
{
	Phonebook phonebook;
	std::string	input;
	while (1)
	{
		std::cout << "write ADD, SEARCH OR EXIT" << std::endl;
		std::cin >> input;
		if (input == "ADD")
			phonebook.add_contact();
		if (input == "SEARCH")
			phonebook.search_contact();
		if (input == "EXIT")
			break;
	}
	return (0);
}