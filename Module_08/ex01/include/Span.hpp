/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon <amanjon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 01:25:43 by amanjon           #+#    #+#             */
/*   Updated: 2025/01/10 01:25:44 by amanjon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <iomanip>

class Span
{
	private:

	public:
		Span();
		Span(const Span& constrCopy);
		Span& operator=(const Span& constrCopy);
		~Span();
};

std::ostream& operator<<(std::ostream &output, const Span& constrCopy);

#endif
