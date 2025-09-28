/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon <amanjon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/29 10:23:46 by amanjon           #+#    #+#             */
/*   Updated: 2024/12/29 11:41:27 by amanjon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Whatever.hpp"

int main()
{
    // 1 Example (int):
    
    int a;
    int b;
    int biggestNumber;
    int smallestNumber;

    a = 9;
    b = 5;

    swap(a, b);
    
    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;

    biggestNumber = max(a, b);
    smallestNumber = min (a, b);

    std::cout << "biggestNumber = " << biggestNumber << std::endl;
    std::cout << "smallestNumber = " << smallestNumber << std::endl;


    // 2 Example (char):
    
    char c;
    char d;
    char testMax;
    char testMin;
    
    c = 'w';
    d = 'z';

    swap(c, d);
    testMax = max(c, d);
    testMin = min(c, d);

    std::cout << "c = " << c << std::endl;
    std::cout << "d = " << d << std::endl;
    std::cout << "testMax = " << testMax << std::endl;
    std::cout << "testMin = " << testMin << std::endl;
    
    return (0);
}