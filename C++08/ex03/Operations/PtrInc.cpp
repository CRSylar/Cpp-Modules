/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PtrInc.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cromalde <cromalde@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 11:57:00 by cromalde          #+#    #+#             */
/*   Updated: 2021/04/19 11:58:49 by cromalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PtrInc.hpp"
/* ************************************************************************** */

PtrInc::PtrInc(void)	{}

PtrInc::PtrInc(Brainfuck& bfk) :
	Operation(bfk)
{}

PtrInc::~PtrInc(void)	{}

/* ************************************************************************** */
PtrInc&	PtrInc::operator=(const PtrInc& src)
{
	(void)src;
	return *this;
}

/* ************************************************************************** */
void	PtrInc::execute(void)
{
	bf.Incptr();
}

int		PtrInc::myId(void) const
{
	return 2;
}
