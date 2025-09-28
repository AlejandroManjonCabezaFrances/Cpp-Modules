/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon- <amanjon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 11:25:01 by amanjon-          #+#    #+#             */
/*   Updated: 2025/09/28 15:12:02 by amanjon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
#define RPN_HPP

#include <unistd.h>
#include <iostream>
#include <iomanip>
#include <map>
#include <fstream> // (flujo de entrada de archivo)
#include <sstream> // (flujo de entrada de cadena)
#include <climits>
#include <cstdlib>
#include <stack>

#include "../include/Colors.hpp"

void    RpnFunction(char *argv);
void    parsingArguments(char *argv);

#endif
