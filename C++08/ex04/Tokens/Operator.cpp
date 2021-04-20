/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Operator.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cromalde <cromalde@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 16:43:19 by cromalde          #+#    #+#             */
/*   Updated: 2021/04/20 16:43:31 by cromalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Operator.hpp"

Operator::Operator(void)	{}

Operator::Operator(char _c) :
	value(_c)	{}

Operator::Operator(const Operator& src) :
	value(src.value)	{}

Operator::~Operator()	{}

Operator&	Operator::operator=(const Operator& src)
{
	value = src.value;
	return *this;
}

int		Operator::getType(void) const
{
	return 2;
}

void	Operator::print(void) const
{
	std::cout << "Op(" << value << ")";
}
