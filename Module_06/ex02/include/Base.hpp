/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon <amanjon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/22 18:48:42 by amanjon           #+#    #+#             */
/*   Updated: 2024/12/22 18:51:49 by amanjon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
#define BASE_HPP

#include <iostream>
#include <iomanip>

class Base
{
    private:

    public:
        Base();
        Base(const Base& constrCopy);
        Base& operator=(const Base& constrCopy);
        ~Base();
};

#endif
