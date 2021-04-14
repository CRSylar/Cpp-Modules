/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DeepCoreMiner.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cromalde <cromalde@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 09:32:00 by cromalde          #+#    #+#             */
/*   Updated: 2021/04/14 12:51:44 by cromalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DeepCoreMiner.hpp"

/* ************************************************************************** */
	// Constructor & Destructor
DeepCoreMiner::DeepCoreMiner(void)
{}

DeepCoreMiner::DeepCoreMiner(const DeepCoreMiner& src)
{
	(void)src;
}

DeepCoreMiner::~DeepCoreMiner(void)
{}

/* ************************************************************************** */
	// Operation Overload
DeepCoreMiner&	DeepCoreMiner::operator=(const DeepCoreMiner& src)
{
	(void)src;
	return *this;
}

/* ************************************************************************** */
	//	Member Function
void	DeepCoreMiner::mine(IAsteroid *_ast)
{
	if (_ast == 0)
		return ;
	std::cout << "* mining deep... got " << _ast->beMined(this) << "! *" << std::endl;
}
