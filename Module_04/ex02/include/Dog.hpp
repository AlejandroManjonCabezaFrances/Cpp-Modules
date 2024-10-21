/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon- <amanjon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 01:37:15 by amanjon-          #+#    #+#             */
/*   Updated: 2024/10/21 14:11:32 by amanjon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

#include <iostream>
#include <iomanip>

/**
 * Palabra clave "virtual"
 * POLIMORFISMO: Se utiliza para indicar que una función miembro de una clase puede 
 * ser sobreescrita en una clase derivada.
 * Permite que un puntero o referencia a una clase base llame a la implementación de la 
 * clase derivada correspondiente en tiempo de ejecución.
 * MULTIHERENCIA: ayuda a resolver el problema del diamante.
 * Este problema ocurre cuando dos clases derivadas heredan de la misma clase base,
 *  y una clase derivada hereda de ambas. Usar virtual asegura que solo haya una única
 *  instancia de la clase base, evitando confusiones y problemas de ambigüedad.
 * FRIEND: palabra clave para acceder a variable privada de la clase sin hacer un getter
*/
class Dog : virtual public AAnimal
{
	private:
		Brain* dogBrain;
	public:
		Dog();
		Dog(const Dog& constrCopy);
		Dog& operator=(const Dog& constrCopy);
		~Dog();

		virtual void makeSound() const;
		virtual std::string getType() const;
		friend std::ostream& operator<<(std::ostream &output, const Dog& constrCopy);
};

#endif
