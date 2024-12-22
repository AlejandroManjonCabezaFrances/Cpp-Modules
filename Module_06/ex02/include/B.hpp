/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon <amanjon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/22 18:48:48 by amanjon           #+#    #+#             */
/*   Updated: 2024/12/22 18:51:27 by amanjon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef B_HPP
#define B_HPP

#include "../include/Base.hpp"

#include <iostream>
#include <iomanip>

class B : public Base
{
    private:

    public:
        B();
        B(const B& constrCopy);
        B& operator=(const B& constrCopy);
        ~B();
};

std::ostream& operator<<(std::ostream &output, const B& constrCopy);

#endif
