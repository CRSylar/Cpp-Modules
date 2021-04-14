/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cromalde <cromalde@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 14:36:40 by cromalde          #+#    #+#             */
/*   Updated: 2021/04/14 14:57:07 by cromalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int		main(void)
{
	Bureaucrat	boss("boss", 2);
	Bureaucrat	empl("stupid", 150);

	Bureaucrat	err("err", 160);


	std::cout << boss << empl << std::endl;
	boss.incrementGrade();

	std::cout << boss << empl << std::endl;
	boss.incrementGrade();

	std::cout << boss << empl << std::endl;
	boss.incrementGrade();

	std::cout << boss << empl << std::endl;
	empl.decrementGrade();

	std::cout << boss << empl << std::endl;
	empl.decrementGrade();

	std::cout << boss << empl << std::endl;
	empl.decrementGrade();
	std::cout << boss << empl << std::endl;

	empl.incrementGrade();
	std::cout << boss << empl << std::endl;

	return (0);
}
