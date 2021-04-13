/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cromalde <cromalde@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 15:38:13 by cromalde          #+#    #+#             */
/*   Updated: 2021/04/13 17:36:51 by cromalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const & _type) :
	type(_type), xp(0)	{}


AMateria::~AMateria(void)	{}

std::string	const & AMateria::getType(void) const
{
	return this->type;
}

unsigned int AMateria::getXP(void) const
{
	return this->xp;
}

void	AMateria::use(ICharacter& _target)
{
	(void)_target;
	this->xp += 10;
}
