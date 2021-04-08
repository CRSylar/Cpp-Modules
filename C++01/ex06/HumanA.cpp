/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cromalde <cromalde@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 15:35:06 by cromalde          #+#    #+#             */
/*   Updated: 2021/04/08 15:47:37 by cromalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

void	HumanA::attack(void)
{
	std::cout << _name << " attacks with his " << _wp.getType() << std::endl;
}

void	HumanA::setWeapon(Weapon wp)
{
	_wp = wp;
}

HumanA::HumanA(std::string name, Weapon &wp) : _wp(wp)
{
	_name = name;
}

HumanA::~HumanA(void)
{
}
