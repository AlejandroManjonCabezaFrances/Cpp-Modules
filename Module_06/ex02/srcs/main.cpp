/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon <amanjon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/22 18:48:53 by amanjon           #+#    #+#             */
/*   Updated: 2025/01/09 01:50:27 by amanjon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Base.hpp"
#include "../include/A.hpp"
#include "../include/B.hpp"
#include "../include/C.hpp"

/**
 * uint32_t random_number = arc4random_uniform(3);
   Función más eficiente para la generación de números aleatorios, pero genera un pequeño
   problema con el "includePath"
   Es una función específica de ciertos sistemas operativos basados en BSD
 * Usamos memoria dinámica para que la instancia del objeto perdure más allá de la función.
   Crear una instancia del objeto "A obj" y retornarlo "return (&obj)" ---> ERROR, el objeto
   Se destruiría al salir de la función
*/
Base*	generate(void)
{
	int randomNumber;
	
	srand(static_cast<unsigned int>(time(0)));
	randomNumber = rand() % 3;

	if (randomNumber == 0)
		return (new A());
	else if (randomNumber == 1)
		return (new B());
	else
		return (new C());
}

/**
 * dynamic_cast<A*>(p):
 * Intenta convertir el puntero p (de tipo Base*) a un puntero de tipo A*.
   Si el tipo real de p es un objeto de tipo A (o una clase derivada de A), el cast tendrá éxito
   y dynamic_cast<A*>(p) devolverá un puntero no nulo. Si no es el caso, devolverá nullptr.
 * Ya que no se puede usar typeid() o type_info()
*/
void identify(Base* p)
{
	if (dynamic_cast<A*>(p))
        std::cout << GREEN << "A" << std::endl << std::endl;
	else if (dynamic_cast<B*>(p))
        std::cout << GREEN << "B" << std::endl << std::endl;
    else if (dynamic_cast<C*>(p))
        std::cout << GREEN << "C" << std::endl << RESET << std::endl;
}

/**
 * Si el cast falla, lanza una excepción std::bad_cast.
   Si no manejas la excepción (usando try/catch), el programa se terminará abruptamente.
*/
void identify(Base& p)
{
	try
	{
		(void)dynamic_cast<A&>(p);
		std::cout << GREEN << "It's A's reference" << RESET << std::endl;
	}
	catch(std::exception& error)
	{
		std::cout << RED << "The casting from type Base to type A was not possible." << RESET << std::endl;
	}
	try
	{
		(void)dynamic_cast<B&>(p);
		std::cout << GREEN << "It's B's reference" << RESET << std::endl;
	}
	catch(std::exception& error)
	{
		std::cout << RED << "The casting from type Base to type B was not possible." << RESET << std::endl;
	}
	try
	{
		(void)dynamic_cast<C&>(p);
		std::cout << GREEN << "It's C's reference" << RESET << std::endl;
	}
	catch(std::exception& error)
	{
		std::cout << RED << "The casting from type Base to type C was not possible." << RESET << std::endl;
	}
}

int main()
{
	Base* obj;

	obj = generate(); 
	identify(obj);
	identify(*obj);

	delete (obj);

	return (0);
}