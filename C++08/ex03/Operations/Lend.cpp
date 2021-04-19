/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Lend.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cromalde <cromalde@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 11:57:00 by cromalde          #+#    #+#             */
/*   Updated: 2021/04/19 11:58:53 by cromalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Lend.hpp"
/* ************************************************************************** */

Lend::Lend(void)	{}

Lend::Lend(Brainfuck& bfk) :
	Operation(bfk)
{}

Lend::~Lend(void)	{}

/* ************************************************************************** */
Lend&	Lend::operator=(const Lend& src)
{
	(void)src;
	return *this;
}

/* ************************************************************************** */
void	Lend::execute(void)
{
	if (bf.get_val() != 0)
		bf.l_start();
}

int		Lend::myId(void) const
{
	return 10;
}
