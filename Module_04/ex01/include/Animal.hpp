/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon- <amanjon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 01:37:05 by amanjon-          #+#    #+#             */
/*   Updated: 2024/10/21 14:08:37 by amanjon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include "Colors.hpp"

#include <iostream>
#include <iomanip>

/**
 * Palabra clave "virtual"
 * POLIMORFISMO: Se emplea "virtual" en los métodos de la clase
 * Se utiliza para indicar que una función miembro de una clase puede 
 * ser sobreescrita en una clase derivada.
 * Permite que un puntero o referencia a una clase base llame a la implementación de la 
 * clase derivada correspondiente en tiempo de ejecución.
 * MULTIHERENCIA: Se emplea "virtual" en el nombre de la clase 
 * Ayuda a resolver el problema del diamante.
 * Este problema ocurre cuando dos clases derivadas heredan de la misma clase base,
 * y una clase derivada hereda de ambas. Usar virtual asegura que solo haya una única
 * instancia de la clase base, evitando confusiones y problemas de ambigüedad.
 * CONST: la función no modifica el estado del objeto. Es decir, garantiza que la
 * función no cambiará los datos miembro de la instancia de la clase en la que está definida
*/
class Animal
{
	protected:
		std::string type;
	public:
		Animal();
		Animal(const std::string& _type);
		Animal(const Animal& constrCopy);
		Animal& operator=(const Animal& constrCopy);
		virtual ~Animal();

		virtual std::string getType() const;
		virtual void makeSound() const;
};

#endif
