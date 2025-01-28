/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon- <amanjon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 01:37:24 by amanjon-          #+#    #+#             */
/*   Updated: 2024/10/17 11:20:06 by amanjon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

#include <iostream>
#include <iomanip>

/**
 * Palabra clave "virtual"
 * POLIMORFISMO: Se emplea "virtual" en los métodos de la clase
 *  Se utiliza para indicar que una función miembro de una clase puede 
 * ser sobreescrita en una clase derivada.
 * Permite que un puntero o referencia a una clase base llame a la implementación de la 
 * clase derivada correspondiente en tiempo de ejecución.
 * MULTIHERENCIA: Se emplea "virtual" en el nombre de la clase 
 *  Ayuda a resolver el problema del diamante.
 * Este problema ocurre cuando dos clases derivadas heredan de la misma clase base,
 *  y una clase derivada hereda de ambas. Usar virtual asegura que solo haya una única
 *  instancia de la clase base, evitando confusiones y problemas de ambigüedad.
*/

class Cat : public Animal
{
	public:
		Cat();
		Cat(const Cat& constrCopy);
		Cat& operator=(const Cat& constrCopy);
		virtual ~Cat();

		virtual void makeSound() const;
};

#endif
