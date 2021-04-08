/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cromalde <cromalde@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 14:24:00 by cromalde          #+#    #+#             */
/*   Updated: 2021/04/08 15:11:43 by cromalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

std::string	Brain::identify(void) const
{
	std::stringstream	ret;

	ret << this;
	return (ret.str());
}

Brain::Brain(void)
{
	_qi = rand();
	_size = _qi * rand();
}

Brain::~Brain()
{
}
