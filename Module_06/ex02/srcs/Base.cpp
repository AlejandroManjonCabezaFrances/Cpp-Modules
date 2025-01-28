/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon <amanjon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/22 18:48:56 by amanjon           #+#    #+#             */
/*   Updated: 2024/12/29 08:34:13 by amanjon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Base.hpp"

Base::~Base()
{
}

std::ostream& operator<<(std::ostream &output, const Base& constrCopy)
{
    output << constrCopy;
	return (output);
}