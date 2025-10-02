/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon- <amanjon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 11:24:55 by amanjon-          #+#    #+#             */
/*   Updated: 2025/10/02 07:30:05 by amanjon-         ###   ########.fr       */
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

int    parsingArguments(char *argv)
{
	std::istringstream 	iss(argv);
	std::stack<int>		container;
	std::string			token; 			
	int 				resultTotal;
	
	while (iss >> token)
	{
		/* std::cout << "token: " << token << std::endl; */
		if (token.find("(") != std::string::npos || token.find(")") != std::string::npos)
		{
			std::cerr << "Error" << std::endl;
			exit(EXIT_FAILURE);
		}
		if (token.size() == 1 && isdigit(token[0]))
			container.push(token[0] - '0');
		else if (token == "+" || token == "-" || token == "*" || token == "/")
		{
			if (container.size() > 1)
			{
				int result = 0;
				int b = container.top();
				container.pop();
				int a = container.top();
				container.pop();
				
				if (token == "+")
					result = a + b;
				else if (token == "-")
					result = a - b;
				else if (token == "*")
					result = a * b;
				else if (token == "/")
					result = a / b;
				
				container.push(result);
				resultTotal = result;
			}
		}		
	}
	return (resultTotal);
}

void    RpnFunction(char *argv)
{
	int result;
	
	result = parsingArguments(argv);
	std::cout << result << std::endl;
}
