/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cromalde <cromalde@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 15:50:12 by cromalde          #+#    #+#             */
/*   Updated: 2021/04/08 15:52:46 by cromalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void	HumanB::attack(void)
{
	std::cout << _name << " attacks with his " << _wp->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon &wp)
{
	_wp = &wp;
}

HumanB::HumanB(std::string name)
{
	_name = name;
}

HumanB::~HumanB()
{
}
