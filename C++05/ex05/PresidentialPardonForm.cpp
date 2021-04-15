/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cromalde <cromalde@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 09:20:28 by cromalde          #+#    #+#             */
/*   Updated: 2021/04/15 09:42:24 by cromalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

std::string	const PresidentialPardonForm::name = "Presidential_Request";
/* ************************************************************************** */

PresidentialPardonForm::PresidentialPardonForm(std::string _name) :
	Form(PresidentialPardonForm::name, 25, 5), target(_name)	{}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& src) :
	Form(src), target(src.target)	{}

PresidentialPardonForm::~PresidentialPardonForm()	{}

/* ************************************************************************** */

PresidentialPardonForm&	PresidentialPardonForm::operator=(const PresidentialPardonForm& src)
{
	(void)src;
	return *this;
}

/* ************************************************************************** */

void	PresidentialPardonForm::execute(const Bureaucrat& _b) const
{
	(void)_b;
	std::cout << this->target << " has been pardoned by Zafod Beeblebrox" << std::endl;
}
