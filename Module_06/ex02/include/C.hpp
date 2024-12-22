/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon <amanjon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/22 18:48:51 by amanjon           #+#    #+#             */
/*   Updated: 2024/12/22 18:51:29 by amanjon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef C_HPP
#define C_HPP

#include "../include/Base.hpp"

#include <iostream>
#include <iomanip>

class C : public Base
{
    private:

    public:
        C();
        C(const C& constrCopy);
        C& operator=(const C& constrCopy);
        ~C();
};

std::ostream& operator<<(std::ostream &output, const C& constrCopy);

#endif
