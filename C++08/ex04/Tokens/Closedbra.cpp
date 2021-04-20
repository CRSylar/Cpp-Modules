/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Closedbra.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cromalde <cromalde@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 16:41:47 by cromalde          #+#    #+#             */
/*   Updated: 2021/04/20 16:42:18 by cromalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Closedbra.hpp"

Closedbra::Closedbra(void)	{}

Closedbra::Closedbra(const Closedbra& src)
{
	(void)src;
}

Closedbra::~Closedbra()	{}

Closedbra&	Closedbra::operator=(const Closedbra& src)
{
	(void)src;
	return *this;
}

int		Closedbra::getType(void) const
{
	return 4;
}

void	Closedbra::print(void) const
{
	std::cout << "ParClose";
}
