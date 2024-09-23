/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon- <amanjon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 01:37:24 by amanjon-          #+#    #+#             */
/*   Updated: 2024/09/23 13:17:50 by amanjon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

#include <iostream>
#include <iomanip>

class Cat : virtual public Animal
{
	public:
		Cat();
		Cat(const Cat& constrCopy);
		Cat& operator=(const Cat& constrCopy);
		~Cat();

		virtual void makeSound() const;
};

#endif
