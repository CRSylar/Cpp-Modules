/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cromalde <cromalde@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 14:36:40 by cromalde          #+#    #+#             */
/*   Updated: 2021/04/15 11:18:40 by cromalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int		main(void)
{
	Bureaucrat	boss("Boss", 2);
	Bureaucrat	junior("Junior", 100);
	Bureaucrat	mid("Mid", 50);
	Bureaucrat	senior("Senior", 20);
	Bureaucrat	stager("Noob", 150);

	std::cout << boss << junior << mid << senior << stager << std::endl;
	try
	{
		//	Errore grado
		Bureaucrat	err("err", 160);
	}
	catch (std::exception& e)
	{
		std::cout << "Creating new ";
		std::cout << e.what() << std::endl;
	}

	ShrubberyCreationForm	shf("home");
	RobotomyRequestForm		rbtm("Cristiano");
	PresidentialPardonForm	prpf("Target1");


	try
	{
		stager.decrementGrade();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		boss.incrementGrade();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		stager.signForm(shf);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		stager.signForm(shf);
	}
	catch(const std::exception& e)
	{
		std::cout << "Signing Form ";
		std::cerr << e.what() << std::endl;
	}

	try
	{
		junior.signForm(shf);
	}
	catch(const std::exception& e)
	{
		std::cout << "Signing Form ";
		std::cerr << e.what() << std::endl;
	}
	try
	{
		junior.signForm(shf);
	}
	catch(const std::exception& e)
	{
		std::cout << "Signing Form ";
		std::cerr << e.what() << std::endl;
	}

	try
	{
		junior.executeForm(shf);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		mid.signForm(rbtm);
		mid.executeForm(rbtm);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		try
		{
			senior.signForm(rbtm);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}

		senior.executeForm(rbtm);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		boss.signForm(prpf);
		boss.executeForm(prpf);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}


	return (0);
}
