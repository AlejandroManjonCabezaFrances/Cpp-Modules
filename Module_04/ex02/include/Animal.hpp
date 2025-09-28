/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon <amanjon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 01:37:05 by amanjon-          #+#    #+#             */
/*   Updated: 2024/10/06 20:18:45 by amanjon          ###   ########.fr       */
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
 * MÉTODO VIRTUAL PURO: Sin Implementación en la Clase Base: No se puede instanciar la clase base
 * que contiene el método puro.
 * Obligación en las Clases Derivadas: Cualquier clase que herede de la clase base debe proporcionar
 * una implementación para el método puro; de lo contrario, también se convertirá en una clase abstracta
 * y no podrá ser instanciada.
 * Compruebo en el int main() que la función makeSound sobreescribe.
 */
class AAnimal
{
	protected:
		std::string type;
	public:
		AAnimal();
		AAnimal(const std::string& _type);
		AAnimal(const AAnimal& constrCopy);
		AAnimal& operator=(const AAnimal& constrCopy);
		virtual ~AAnimal();

		virtual std::string getType() const;
		virtual void makeSound() const = 0; // Método virtual puro
};

#endif
