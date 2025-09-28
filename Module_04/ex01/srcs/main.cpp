/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon- <amanjon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 01:37:26 by amanjon-          #+#    #+#             */
/*   Updated: 2024/10/17 21:52:55 by amanjon-         ###   ########.fr       */
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
	
	/**
	 * Deep copy: Contructor(); & Copy Contructor
	 * Copy contructor: un objeto se inicializa con otro objeto del mismo tipo.
	 * Esto ocurre al declarar un nuevo objeto y pasarlo como argumento a su propio constructor
	*/
	Dog originalDog;
	Dog copiedDog = originalDog;

	std::cout << std:: endl << GOLD << "Checking that are different pointers, deep copies OK" << RESET << std::endl;
	std::cout << "originalDog: " << originalDog << std::endl;
	std::cout << "copiedDog: " << copiedDog << std::endl << std::endl;
	
	Cat originalCat;
	Cat copiedCat = originalCat;

	std::cout << GOLD << std::endl << "Checking that are different pointers, deep copies OK" << RESET << std::endl;
	std::cout << "originalCat: " << originalCat << std::endl;
	std::cout << "copiedCat: " << copiedCat << std::endl << std::endl;
	
	return (0);
}
