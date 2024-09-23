#include "../include/Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain has been created !!" << std::endl;
}

Brain::Brain(const Brain& constrCopy)
{
	int i;

	i = 0;
	while (i < 100)
	{
		this->ideas[i] = constrCopy.ideas[i];
		i++;
	}
}

Brain& Brain::operator=(const Brain& constrCopy)
{
	int i;

	i = 0;
	if (this != &constrCopy)
	{
		while (i < 100)
		{
			this->ideas[i] = constrCopy.ideas[i];
			i++;
		}
	}

	return (*this);
}

Brain::~Brain()
{
	std::cout << "Bye bye Brain class" << std::endl;
}

