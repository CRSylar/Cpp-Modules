/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cromalde <cromalde@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 11:49:40 by cromalde          #+#    #+#             */
/*   Updated: 2021/04/14 12:52:09 by cromalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>

class Bureaucrat
{
	public:
		Bureaucrat(void);
		Bureaucrat(std::string _name, int _grade);
		~Bureaucrat(void);

		class GradeTooHighException : public std::exception
		{

		};
		class GradeTooLowException : public std::exception
		{

		};
	private:
		std::string const	name;
		int					grade;
};

Bureaucrat::Bureaucrat(std::string _name, int _grade) :
	name(_name)
{
	if (_grade < 1)
		Bureaucrat::GradeTooLowException();
	else if (_grade > 150)
		Bureaucrat::GradeTooHighException();

}

Bureaucrat::~Bureaucrat(void)
{}


#endif
