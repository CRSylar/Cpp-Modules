/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cromalde <cromalde@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 17:27:09 by cromalde          #+#    #+#             */
/*   Updated: 2021/04/11 17:46:04 by cromalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

	//	Constructors & Destructor
NinjaTrap::NinjaTrap(void) : ClapTrap()
{
	set_hp(60);
	set_mxhp(60);
	set_ep(120);
	set_mxep();
	set_dmg(60, 5, 0);
	std::cout << "Creating a new Ninja Trap!" << std::endl;
}

NinjaTrap::NinjaTrap(std::string name) : ClapTrap(name)
{
	set_hp(60);
	set_mxhp(60);
	set_ep(120);
	set_mxep();
	set_dmg(60, 5, 0);
	std::cout << "There's a new Ninja called <" << get_name() "> around, but maibe you can't see it" << std::endl;
}

NinjaTrap::NinjaTrap(const NinjaTrap& src) : ClapTrap(src)
{
	std::cout << "Copy Constructor called, now there's two invisible <" << get_name() << "> !" << std::endl;
}

NinjaTrap::~NinjaTrap()
{
	std::cout << "Destroing this Ninja <" << get_name() << "> " << std::endl;
}
