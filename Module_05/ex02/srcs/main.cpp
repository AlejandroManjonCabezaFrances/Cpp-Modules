/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon <amanjon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 10:18:34 by amanjon           #+#    #+#             */
/*   Updated: 2024/11/26 12:12:45 by amanjon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Bureaucrat.hpp"
#include "../include/ShrubberyCreationForm.hpp"
/* #include "../include/AForm.hpp" */

int main()
{
	Bureaucrat Murphy("Murphy", 136);

	ShrubberyCreationForm a;

/* 	std::cout << a << std::endl;
	a.printAttributes(); */

	try
	{
		a.beSigned(Murphy);
		std::cout << a << std::endl;
		Murphy.executeForm(a);
	}
	catch(std::exception& error)
	{
		std::cerr << PINK << std::endl << "Caught exception " << error.what() << RESET << std::endl;
	}
	
	return (0);
}

// int main()
// {
// 	Bureaucrat	ironman("Ironman", 2);
// 	Bureaucrat	thanos("Thanos", 151);
// 	Bureaucrat	thor("Thor", 3);
// 	Bureaucrat	annibal("Annibal", 0);
// 	Bureaucrat	hulk("Hulk", 4);
	
// 	Form		a("Document_A", 5, 5, false);
// 	Form		b("Domcument_B", 5, 5, false);
// 	Form		c("Document_C", 1, 1, false);
// 	Form		d("Document_E", 3, 3, false);
	
	
// 	std::cout << UNDERLINE << "Print attributes of \"Bureaucrat	Ironman\"" << RESET << std::endl;
// 	ironman.printAttributes();
	
// 	std::cout << UNDERLINE << std::endl << "Print attributes of \"Form a\"" << RESET << std::endl;
// 	a.printAttributes();
	
// 	std::cout << std::endl;
	
// 	try
// 	{	
// 		a.beSigned(ironman);
// 	}
// 	catch (std::exception& error)
// 	{
// 		std::cout << PINK << std::endl << "Caught exception " << error.what() << RESET << std::endl;
// 	}

// 	try
// 	{	
// 		b.beSigned(thanos);
// 	}
// 	catch (std::exception& error)
// 	{
// 		std::cout << PINK << std::endl << "Caught exception " << error.what() << RESET << std::endl;
// 	}

// 	try
// 	{	
// 		c.beSigned(thor);
// 	}
// 	catch (std::exception& error)
// 	{
// 		std::cout << PINK << "Caught exception " << error.what() << RESET << std::endl ;
// 	}

// 	try
// 	{	
// 		d.beSigned(annibal);
// 	}
// 	catch (std::exception& error)
// 	{
// 		std::cout << PINK << "Caught exception " << error.what() << RESET << std::endl ;
// 	}
	
// 	try
// 	{
// 		Form		e("Document_e", 0, 0, false);  // después de esta linea, ejecuta el catch
// 		e.beSigned(hulk);
// 	}
// 	catch (std::exception& error)
// 	{
// 		std::cerr << PINK << "Caught exception " << error.what() << RESET << std::endl ;
// 	}

// 	return (0);	
// } 
