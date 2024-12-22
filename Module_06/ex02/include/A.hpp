/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon <amanjon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/22 18:48:46 by amanjon           #+#    #+#             */
/*   Updated: 2024/12/22 18:51:19 by amanjon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef A_HPP
#define A_HPP

#include "../include/Base.hpp"

#include <iostream>
#include <iomanip>

class A : public Base
{
    private:

    public:
        A();
        A(const A& constrCopy);
        A& operator=(const A& constrCopy);
        ~A();
};

std::ostream& operator<<(std::ostream &output, const A& constrCopy);

#endif
