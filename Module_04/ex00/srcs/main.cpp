/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon- <amanjon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 01:37:26 by amanjon-          #+#    #+#             */
/*   Updated: 2024/10/17 11:36:21 by amanjon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Dog.hpp"
#include "../include/Cat.hpp"
#include "../include/WrongAnimal.hpp"

/* int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();

    delete (meta);
    delete (j);
    delete (i);

    return (0);
} */

// Trying classes "Wrong" without Poliforfism, just Inheritance 
int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    
    const WrongAnimal* orco = new WrongAnimal();
    const WrongAnimal* orcoInheritance = new WrongAnimal();

    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();
    
    std::cout << std::endl << std::endl;
    orco->makeSound();
    orcoInheritance->makeSound();
    std::cout << std::endl << std::endl;
    
    delete (meta);
    delete (j);
    delete (i);

    delete (orco);
    delete (orcoInheritance);
    return (0);
}
