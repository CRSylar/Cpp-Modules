/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cromalde <cromalde@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 15:44:21 by cromalde          #+#    #+#             */
/*   Updated: 2021/04/13 16:00:50 by cromalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"


/* ************************************************************************** */
	//	Constructors & Destructor
Ice::Ice(void) :
	AMateria("ice")	{}

Ice::Ice(const Ice& src) :
	AMateria("ice")
{
	this->xp = src.xp;
}

Ice::~Ice()
{}

/* ************************************************************************** */
	//	Operation Overload
Ice&	Ice::operator=(const Ice& src)
{
	this->xp = src.xp;
	return *this;
}

/* ************************************************************************** */
	//	Member Funcion
AMateria*	Ice::clone(void) const
{
	Ice *copy = new Ice(*this);
	return copy;
}

void	Ice::use(ICharacter& _target)
{
	AMateria::use(_target);
	std::cout << "* shoots an ice bolt at " << _target.getName() << " *" << std::endl;
}
