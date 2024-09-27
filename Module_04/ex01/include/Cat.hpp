/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon- <amanjon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 01:37:24 by amanjon-          #+#    #+#             */
/*   Updated: 2024/09/27 14:50:51 by amanjon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

#include <iostream>
#include <iomanip>

class Cat : virtual public Animal
{
	private:
        Brain* catBrain;
	public:
		Cat();
		Cat(const Cat& constrCopy);
		Cat& operator=(const Cat& constrCopy);
		~Cat();

		virtual void makeSound() const;
		virtual std::string getType();
		friend std::ostream& operator<<(std::ostream &output, const Cat& constrCopy);
};

#endif
