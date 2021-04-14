/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cromalde <cromalde@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 14:36:40 by cromalde          #+#    #+#             */
/*   Updated: 2021/04/14 16:31:21 by cromalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int		main(void)
{
	Bureaucrat	boss("boss", 2);
	Bureaucrat	empl("stupid", 150);

	Bureaucrat	err("err", 160);

	Form	f1("3a", 70, 40);
	Form	f2("wrg", 155, 1);
	Form	f3("2b", 2, 1);

	std::cout << boss << empl << std::endl;
	boss.incrementGrade();

	std::cout << boss << empl << f1 << f3 << std::endl;
	boss.incrementGrade();

	std::cout << boss << empl << std::endl;
	boss.incrementGrade();

	std::cout << boss << empl << std::endl;
	empl.decrementGrade();

	f1.beSigned(empl);

	std::cout << boss << empl << f1 << f3 << std::endl;
	empl.decrementGrade();

	std::cout << boss << empl << std::endl;
	empl.decrementGrade();
	std::cout << boss << empl << std::endl;

	empl.incrementGrade();
	std::cout << boss << empl << std::endl;

	return (0);
}
