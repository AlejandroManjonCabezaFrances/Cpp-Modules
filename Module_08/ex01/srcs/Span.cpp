/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon <amanjon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 01:25:49 by amanjon           #+#    #+#             */
/*   Updated: 2025/01/17 10:59:35 by amanjon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Span.hpp"

Span::Span()
{
	std::cout << GREEN << " Default constructor Array" << RESET << std::endl;
}

Span::Span(unsigned int N) : maxSize(N)
{
	std::cout << GREEN << " parameterized constructor Array" << RESET << std::endl;
}

Span::Span(const Span& constrCopy)
{
	*this = constrCopy;
	std::cout << GREEN << " Default constructor copy Array" << RESET << std::endl;
}

Span& Span::operator=(const Span& constrCopy)
{
	if (this != &constrCopy)
	{
		this->numbers = constrCopy.numbers;
		this->maxSize = constrCopy.maxSize;
	}
	std::cout << GREEN << " Default assignment operator Array" << RESET << std::endl;

	return (*this);
}

Span::~Span()
{
	std::cout << RED << " Default destructor Array" << RESET << std::endl;
}

void	Span::addNumber(int number)
{
	if (numbers.size() >= maxSize)
		throw (std::overflow_error("vector is full !"));
	numbers.push_back(number);
}

/**
 * Esta función resta el máximo número con el mínimo del contenedor (vector::numbers) y lo printea
*/
int	Span::longestSpan() const
{
	int minNumber;
	int maxNumber;
	
	if (numbers.size() <= 1)
		throw (std::logic_error("vector size is less than 2"));

	maxNumber = *std::max_element(numbers.begin(), numbers.end());
	minNumber = *std::min_element(numbers.begin(), numbers.end());
	
	return (maxNumber - minNumber);
}

/**
 * Esta función checkea la distancia más pequeña entre todos los números del contenedor y lo printea
*/
int	Span::shortestSpan() const
{
	int shortest;
	int absoluteNumber;
	
	if (numbers.size() <= 1)
		throw (std::logic_error("vector size is less than 2"));
	shortest = std::numeric_limits<int>::max();
	for (size_t i = 0; i < numbers.size(); ++i)
	{
		for (size_t j = i + 1; j < numbers.size(); ++j)
		{
			absoluteNumber = std::abs(numbers[i] - numbers[j]);
			if (absoluteNumber < shortest)
				shortest = absoluteNumber;
		}
	}

	return (shortest);
}

void	Span::printNumbers()
{
	size_t	i;

	for (i = 0; i < numbers.size(); ++i)
		std::cout << "numners[" << i << "] = " << numbers[i] << std::endl;
}

int	Span::getMaxSize()
{
	return (this->maxSize);
}

void	Span::randomNumbersCreator(Span mySpan)
{
	int	i;
	
	srand(static_cast<unsigned int>(time(0)));
	i = 0;
	while (i < mySpan.getMaxSize())
	{
		addNumber(rand());
		i++;
	}
}

std::ostream& operator<<(std::ostream& output, const Span& constrCopy)
{
	output << "longestSpan: " << constrCopy.longestSpan() << std::endl;
	output << "shortestSpan: " << constrCopy.shortestSpan() << std::endl;

	return (output);
}
