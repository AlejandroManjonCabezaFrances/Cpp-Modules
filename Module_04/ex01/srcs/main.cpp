/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon- <amanjon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 01:37:26 by amanjon-          #+#    #+#             */
/*   Updated: 2024/09/27 12:04:47 by amanjon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Dog.hpp"
#include "../include/Cat.hpp"
#include "../include/WrongAnimal.hpp"

int main()
{
	Animal* animals[20];
	int i;

	for (i = 0; i < 10; i++)
		animals[i] = new Dog();
	
	for (i = 10; i < 20; i++)
		animals[i] = new Cat();

	for (i = 0; i < 20; i++)
		delete animals[i];
	
	// Deep copy: Contructor(); & Copy Contructor
	Dog originalDog;
	Dog copiedDog = originalDog;

	std::cout << "originalDog: " << originalDog << std::endl;
	std::cout << "copiedDog: " << copiedDog << std::endl;
	
	Cat originalCat;
	Cat copiedCat = originalCat;
	
	return (0);
}
