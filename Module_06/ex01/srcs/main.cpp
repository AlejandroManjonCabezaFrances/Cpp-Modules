/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon <amanjon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/22 16:47:38 by amanjon           #+#    #+#             */
/*   Updated: 2024/12/22 19:35:28 by amanjon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Serializer.hpp"

/**
 * Su propósito principal es guardar el estado de un objeto para poder volver a 
 * crearlo cuando sea necesario (serializar/deserializarlo)
 * La idea es demostrar que puedes serializar un puntero (convertirlo en un entero)
   y luego deserializarlo (convertirlo de nuevo a un puntero)
*/
int main()
{
	Data 		data = {512, "RAM"};
	uintptr_t	test1;
	Data*		test2;

	Data* ptr = &data;

	std::cout << "ptr = " << ptr << std::endl;
	std::cout << "data = " << &data << std::endl;
	std::cout << "data.name = " << data.name << std::endl;
	std::cout << "data.value = " << data.value << std::endl;

	test1 = Serializer::serialize(ptr);
	test2 = Serializer::deserialize(reinterpret_cast<uintptr_t>(&data));

	std::cout << std::endl;
	std::cout << "test1 = " << test1 << std::endl;
	std::cout << "test2 = " << test2 << std::endl;
	
	return (0);
}