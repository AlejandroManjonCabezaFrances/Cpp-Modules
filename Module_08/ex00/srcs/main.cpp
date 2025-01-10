/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon <amanjon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 03:24:40 by amanjon           #+#    #+#             */
/*   Updated: 2025/01/10 01:07:14 by amanjon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/easyfind.hpp"

/**
 * std::vector<int>	vec = {1, 2, 3, 4, 5}; (c++11)
 
 * int arr[] = {1, 2, 3, 4, 5};
    std::vector<int> vec(arr, arr + 5); // Construir vector desde un array (c++98)
*/
int main()
{
	std::vector<int>::iterator  it;
	std::vector<int>            vec;
		
	vec.push_back(1);
	vec.push_back(2);
	vec.push_back(3);
	vec.push_back(4);
	vec.push_back(5);
	try
	{

		for (it = vec.begin(); it != vec.end(); ++it)
			std::cout << *it << std::endl;

		std::cout << std::endl << ORANGE << "Test 1" << RESET << std::endl;
		easyfind(vec, 2);
	}
	catch (const std::runtime_error& e)
	{
		std::cout << "Exception: " << e.what() << std::endl;
	}
	try
	{
		std::cout << std::endl << ORANGE << "Test 2" << RESET << std::endl;
		easyfind(vec, 130);
	}
	catch (const std::runtime_error& e)
	{
		std::cout << "Exception: " << e.what() << std::endl;
	}
	try
	{
		std::cout << std::endl << ORANGE << "Test 3" << RESET << std::endl;
		easyfind(vec, -22);
	}
	catch (const std::runtime_error& e)
	{
		std::cout << "Exception: " << e.what() << std::endl;
	}

	return (0);
}
