/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon <amanjon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 11:36:51 by amanjon           #+#    #+#             */
/*   Updated: 2025/01/17 16:04:56 by amanjon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/MutantStack.hpp"

/* int main()
{
    
    return (0);
} */

/**
 * int main(); SUBJECT

 * mstack.top()
   Muestra el valor del elemento superior de la pila sin eliminarlo.

 * mstack.pop();
   Elimina el elemento superior de la pila
 
 * std::stack<int> s(mstack);
   Crea una copia de mstack en una nueva pila llamada s (otro objeto), con el contructor en copia de std::stack

*/
int main()
{
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << mstack.top() << std::endl;
    mstack.pop();
    std::cout << mstack.size() << std::endl;
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
}