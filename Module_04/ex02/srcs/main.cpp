/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon- <amanjon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 01:37:26 by amanjon-          #+#    #+#             */
/*   Updated: 2024/10/21 14:13:10 by amanjon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Dog.hpp"
#include "../include/Cat.hpp"
#include "../include/WrongAnimal.hpp"

int main ()
{
	/* AAnimal animals; */ // error: cannot declare variable ‘animals’ to be of abstract type ‘AAnimal’

	Dog dog;
	Cat cat;
	
	dog.makeSound();
	cat.makeSound();
	
	return (0);
}
