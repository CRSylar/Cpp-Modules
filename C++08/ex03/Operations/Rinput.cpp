/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Rinput.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cromalde <cromalde@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 11:57:00 by cromalde          #+#    #+#             */
/*   Updated: 2021/04/19 11:58:53 by cromalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Rinput.hpp"
/* ************************************************************************** */

Rinput::Rinput(void)	{}

Rinput::Rinput(Brainfuck& bfk) :
	Operation(bfk)
{}

Rinput::~Rinput(void)	{}

/* ************************************************************************** */
Rinput&	Rinput::operator=(const Rinput& src)
{
	(void)src;
	return *this;
}

/* ************************************************************************** */
void	Rinput::execute(void)
{
	char c;

	std::cin >> c;
	bf.set_val(c);
}

int		Rinput::myId(void) const
{
	return 5;
}
