/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Openbra.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cromalde <cromalde@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 16:41:09 by cromalde          #+#    #+#             */
/*   Updated: 2021/04/20 16:41:21 by cromalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Openbra.hpp"


Openbra::Openbra(void)	{}

Openbra::Openbra(const Openbra& src)
{
	(void)src;
}

Openbra::~Openbra()	{}

Openbra&	Openbra::operator=(const Openbra& src)
{
	(void)src;
	return *this;
}

int		Openbra::getType(void) const
{
	return 3;
}

void	Openbra::print(void) const
{
	std::cout << "ParOpen";
}
