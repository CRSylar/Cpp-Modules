/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Lstart.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cromalde <cromalde@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 11:57:00 by cromalde          #+#    #+#             */
/*   Updated: 2021/04/19 11:58:53 by cromalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Lstart.hpp"
/* ************************************************************************** */

Lstart::Lstart(void)	{}

Lstart::Lstart(Brainfuck& bfk) :
	Operation(bfk)
{}

Lstart::~Lstart(void)	{}

/* ************************************************************************** */
Lstart&	Lstart::operator=(const Lstart& src)
{
	(void)src;
	return *this;
}

/* ************************************************************************** */
void	Lstart::execute(void)
{
	if (bf.get_val() != 0)
		bf.l_end();
}

int		Lstart::myId(void) const
{
	return 10;
}
