/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cromalde <cromalde@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 15:44:21 by cromalde          #+#    #+#             */
/*   Updated: 2021/04/13 16:02:32 by cromalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"


/* ************************************************************************** */
	//	Constructors & Destructor
Cure::Cure(void) :
	AMateria("cure")	{}

Cure::Cure(const Cure& src) :
	AMateria("cure")
{
	this->xp = src.xp;
}

Cure::~Cure()
{}

/* ************************************************************************** */
	//	Operation Overload
Cure&	Cure::operator=(const Cure& src)
{
	this->xp = src.xp;
	return *this;
}

/* ************************************************************************** */
	//	Member Funcion
AMateria*	Cure::clone(void) const
{
	Cure *copy = new Cure(*this);
	return copy;
}

void	Cure::use(ICharacter& _target)
{
	AMateria::use(_target);
	std::cout << "* heals " << _target.getName() << "'s wounds *" << std::endl;
}
