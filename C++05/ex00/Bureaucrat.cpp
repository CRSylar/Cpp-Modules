/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cromalde <cromalde@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 13:36:25 by cromalde          #+#    #+#             */
/*   Updated: 2021/04/14 13:37:21 by cromalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

/* ************************************************************************** */
	// Constructor & Destructor
Bureaucrat::Bureaucrat(std::string _name, int _grade) :
	name(_name), grade(_grade)
{
	if (_grade < 1)
		Bureaucrat::GradeTooHighException();
	else if (_grade > 150)
		Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat& src) :
	name(src.name), grade(src.grade)	{}

Bureaucrat::~Bureaucrat(void)
{}
/* ************************************************************************** */
	// Op. Overload
Bureaucrat&		Bureaucrat::operator=(const Bureaucrat& src)
{
	this->grade = src.getGrade();
	return *this;
}

std::ostream&	operator<<(std::ostream& _stream, const Bureaucrat& _bureau)
{
	_stream << _bureau.getName() << ", bureaucrat grade " << _bureau.getGrade() << std::endl;
	return _stream;
}
/* ************************************************************************** */
	// Getter
int			Bureaucrat::getGrade(void) const
{
	return this->grade;
}

std::string	Bureaucrat::getName(void) const
{
	return this->name;
}
/* ************************************************************************** */
	// Member func.
void		Bureaucrat::incrementGrade(void)
{
	if (this->grade > 1)
		this->grade--;
	else
		Bureaucrat::GradeTooHighException();
}

void		Bureaucrat::decrementGrade(void)
{
	if (this->grade < 150)
		this->grade++;
	else
		Bureaucrat::GradeTooLowException();
}
