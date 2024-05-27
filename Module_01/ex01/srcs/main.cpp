/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon- <amanjon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 08:02:53 by amanjon-          #+#    #+#             */
/*   Updated: 2024/05/27 08:34:48 by amanjon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

const int MAX_ZOMBIES = 10000;
int	main()
{
	Zombie *zombiesHomer;
	std::string input;
	int N;
	int i;

	while (1)
	{
		std::cout << "Enter a number to create Zombies horder" << std::endl;
		std::cin >> N;
		if (N >= 0 && N <= MAX_ZOMBIES)
			break;
		else
			std::cerr << "You should put a positive number" << std::endl;
	}

	zombiesHomer = zombieHorde(N, "Homer");
	for (i = 0; i < N; i++)
		zombiesHomer[i].announce();
	delete[] zombiesHomer;
	return (0);
}
