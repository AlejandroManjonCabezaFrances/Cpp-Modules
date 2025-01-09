/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon <amanjon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 03:24:48 by amanjon           #+#    #+#             */
/*   Updated: 2025/01/09 03:24:49 by amanjon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <iomanip>

class easyfind
{
    private:

    public:
        easyfind();
        easyfind(const easyfind& constrCopy);
        easyfind& operator=(const easyfind& constrCopy);
        ~easyfind();
};

std::ostream& operator<<(std::ostream &output, const easyfind& constrCopy);

#endif
