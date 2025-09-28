/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon <amanjon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/22 18:48:42 by amanjon           #+#    #+#             */
/*   Updated: 2024/12/29 09:38:29 by amanjon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
#define BASE_HPP

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <stdexcept>

/**
 * Base* ptr = new A();
   - En tiempo de compilación, el tipo de ptr es Base.
   - En tiempo de ejecución, el tipo del objeto al que apunta ptr es A.
*/
class Base
{
	private:

	public:
		virtual ~Base();
};

std::ostream& operator<<(std::ostream &output, const Base& constrCopy);

Base*	generate(void);
void	identify(Base* p);
void	identify(Base& p);

#endif
