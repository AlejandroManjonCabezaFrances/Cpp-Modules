/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon <amanjon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 10:18:34 by amanjon           #+#    #+#             */
/*   Updated: 2024/11/19 02:20:22 by amanjon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Bureaucrat.hpp"
#include "../include/Form.hpp"

/**
 * Form e (HULK), debe estar en el try, evitando --> 
 * terminate called after throwing an instance of 'Form::GradeTooHighException'
 * what():  Execption: Grade too high
 * [1]    10593 IOT instruction (core dumped)  ./Bureaucrat
*/

int main()
{
	Bureaucrat	ironman("Ironman", 2);
	Bureaucrat	thanos("Thanos", 151);
	Bureaucrat	thor("Thor", 3);
	Bureaucrat	annibal("Annibal", 0);
	Bureaucrat	hulk("Hulk", 4);
	
	Form		a("Document_A", 5, 5, false);
	Form		b("Domcument_B", 5, 5, false);
	Form		c("Document_C", 1, 1, false);
	Form		d("Document_E", 3, 3, false);
	
	
	std::cout << UNDERLINE << "Print attributes of \"Bureaucrat	Ironman\"" << RESET << std::endl;
	ironman.printAttributes();
	
	std::cout << UNDERLINE << std::endl << "Print attributes of \"Form a\"" << RESET << std::endl;
	a.printAttributes();
	
	std::cout << std::endl;
	
	try
	{	
		a.beSigned(ironman);
	}
	catch (std::exception& error)
	{
		std::cout << PINK << std::endl << "Caught exception " << error.what() << RESET << std::endl;
	}

	try
	{	
		b.beSigned(thanos);
	}
	catch (std::exception& error)
	{
		std::cout << PINK << std::endl << "Caught exception " << error.what() << RESET << std::endl;
	}

	try
	{	
		c.beSigned(thor);
	}
	catch (std::exception& error)
	{
		std::cout << PINK << "Caught exception " << error.what() << RESET << std::endl ;
	}

	try
	{	
		d.beSigned(annibal);
	}
	catch (std::exception& error)
	{
		std::cout << PINK << "Caught exception " << error.what() << RESET << std::endl ;
	}
	
	try
	{
		Form		e("Document_e", 0, 0, false);  // después de esta linea, ejecuta el catch
		e.beSigned(hulk);
	}
	catch (std::exception& error)
	{
		std::cerr << PINK << "Caught exception " << error.what() << RESET << std::endl ;
	}

	return (0);	
} 
