/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PtrDec.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cromalde <cromalde@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 11:57:00 by cromalde          #+#    #+#             */
/*   Updated: 2021/04/19 11:58:49 by cromalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PtrDec.hpp"
/* ************************************************************************** */

PtrDec::PtrDec(void)	{}

PtrDec::PtrDec(Brainfuck& bfk) :
	Operation(bfk)
{}

PtrDec::~PtrDec(void)	{}

/* ************************************************************************** */
PtrDec&	PtrDec::operator=(const PtrDec& src)
{
	(void)src;
	return *this;
}

/* ************************************************************************** */
void	PtrDec::execute(void)
{
	bf;
}

int		PtrDec::myId(void) const
{
	return 2;
}
