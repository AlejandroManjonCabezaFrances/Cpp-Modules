/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon- <amanjon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 11:36:51 by amanjon           #+#    #+#             */
/*   Updated: 2025/01/20 19:00:39 by amanjon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/MutantStack.hpp"

	
/**
 * std::stack<int> s(mstack); Crea una nueva instancia de std::stack<int>, copiando 
   el contenedor subyacente de mstack
*/
int main()
{
	// int main(); SUBJECT
	
	MutantStack<int> mstack;
		
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;  // 17
	mstack.pop();
	std::cout << mstack.size() << std::endl; // 1
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
		
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
		
	while (it != ite)
	{
			std::cout << *it << std::endl;
			++it;
	}
	std::stack<int> s(mstack);
		
	std::cout << std::endl;
	
	// PRUEBA CON std::list<int> (LISTA DOBLEMENTE ENLAZADA)

	std::list<int> lst;

	lst.push_back(1);
	lst.push_back(2);
	lst.pop_back();
	lst.push_back(3);
	lst.push_back(4);
	lst.push_back(5);
	lst.push_back(6);
	std::cout << lst.back() << std::endl; // 6 --> igual que mstack.top(), para std::list. último elemento del contenedor
	std::cout << lst.size() << std::endl; // 5


	std::list<int>::iterator itt = lst.begin();
	std::list<int>::iterator itte = lst.end();

	while (itt != itte)
	{
		std::cout << *itt << std::endl;
		itt++;
	}
	
	return 0;
}

/**
 * int main(); SUBJECT

 * mstack.top()
	 Muestra el valor del elemento superior de la pila sin eliminarlo.

 * mstack.pop();
	 Elimina el elemento superior de la pila
 
 * std::stack<int> s(mstack);
	 Crea una copia de mstack en una nueva pila llamada s (otro objeto), con el contructor en copia de std::stack

*/
/* int main()
{
		MutantStack<int> mstack;
		
		mstack.push(5);
		mstack.push(17);
		std::cout << mstack.top() << std::endl;  // 17
		mstack.pop();
		std::cout << mstack.size() << std::endl; // 1
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		//[...]
		mstack.push(0);
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite)
		{
				std::cout << *it << std::endl;
				++it;
		}
		std::stack<int> s(mstack);
		
		return 0;
} */
