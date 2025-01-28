/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon <amanjon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/22 16:47:28 by amanjon           #+#    #+#             */
/*   Updated: 2024/12/22 18:22:23 by amanjon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include "../include/Colors.hpp"

#include <iostream>
#include <iomanip>
#include <stdint.h>

/**
 * La serialización es un proceso que consiste en convertir un objeto en una secuencia de bytes.
 * En este ejercicio, intento simular la serializar/deserializarlo (explicado en el int main())
*/
struct Data
{
	int			value;
	std::string	name;
};

class Serializer
{
	private:
		Serializer();
	public:
		Serializer(const Serializer& constrCopy);
		Serializer& operator=(const Serializer& constrCopy);
		~Serializer();

		static uintptr_t serialize(Data* ptr);
		static Data* deserialize(uintptr_t raw);
};


#endif
