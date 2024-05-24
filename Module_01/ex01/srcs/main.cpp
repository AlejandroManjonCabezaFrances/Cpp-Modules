/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon- <amanjon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 08:02:53 by amanjon-          #+#    #+#             */
/*   Updated: 2024/05/24 08:43:12 by amanjon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	Zombie *zombiesHomer;
	int N;
	int i;

	std::cout << "Enter a number to create Zombies horder" << std::endl;
	std::cin >> N;
	
	zombiesHomer = zombieHorde(N, "Homer");
	for (i = 0; i < N; i++)
	{
		zombiesHomer[i].announce();
		delete (zombiesHomer);
	}
	std::cout << N << std::endl;
	return (0);
}