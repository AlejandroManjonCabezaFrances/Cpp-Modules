/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon- <amanjon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 11:24:55 by amanjon-          #+#    #+#             */
/*   Updated: 2025/09/28 16:44:25 by amanjon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/RPN.hpp"

/**
--> Entender notación polaca inversa (RPN)
--> 3 4 5 * +         -->(ARGV)
 
	[3]

	[3, 4]

	[3, 4, 5]

* → uso 4 y 5: 4*5=20 → [3, 20]

+ → uso 3 y 20: 3+20=23 → [23]

Resultado final = 23. 
 
 
* push(x) Agrega un elemento al tope del contenedor
* pop()	  Quita el elemento del tope del contenedor
* top()	  Devuelve el elemento del tope sin quitarlo (último en meter a la pila)
* empty() Devuelve true si la pila está vacía	if (container.empty()) ...
* size()  Devuelve el número de elementos en la pila	int n = container.size();


* container.push(token[0] - '0'); --> necesitamos meter en la pila numeros int, 
  estamos pasando (token[0] - '0') un char a int. arduino --> 
  argv: '8', en ASCII es 56, y '0' es 48 en ASCII 
  --> 56 - 48 = 8 pasado a int
*/

void    parsingArguments(char *argv)
{
	std::istringstream 	iss(argv);
	std::stack<int>		container;
	std::string			token; 			
	
	while (iss >> token)
	{
	/* 	std::cout << "token: " << token << std::endl; */
		if (token.size() == 1 && isdigit(token[0]))
			container.push(token[0] - '0');

		else if (token == "+" || token == "-" || token == "*" || token == "/")
			if (container.size() < 2)
				int b = container.top();
				container.pop();
				int a = container.top();
				container.pop();
		
		
/* 		std::cout << "tamaño pila: " << container.size() << std::endl;
		std::cout << "top pila: " << container.top() << std::endl; */
	}
	return;
}

void    RpnFunction(char *argv)
{
	parsingArguments(argv);
}