/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cromalde <cromalde@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 16:59:14 by cromalde          #+#    #+#             */
/*   Updated: 2021/04/11 16:43:54 by cromalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

	//	Constructors & Destructor
ScavTrap::ScavTrap(void) : ClapTrap()
{
	set_ep(50);
	set_mxep();
	set_dmg(20, 15, 3);
	std::cout << "Default Constructor called, now There's a new SC4V_Tr4p !" << std::endl;
}

ScavTrap::ScavTrap(std::string	name) : ClapTrap(name)
{
	set_ep(50);
	set_mxep();
	set_dmg(20, 15, 3);
	std::cout << "Constructor called, new SC4V named >" << get_name() << "< created !" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& src) : ClapTrap(src)
{
	std::cout << "Copy Constructor called, now there's <" << src.get_name() << "> and <";
	std::cout << get_name() << "> !" << std::endl;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "Dismantling -> " << get_name() << std::endl;
}

/*=======================================================*/
		// Setter & Getter
void	ScavTrap::set_ep(int ep)
{
	ClapTrap::set_ep(ep);
}

void	ScavTrap::set_mxep(void)
{
	ClapTrap::set_mxep(50);
}

void	ScavTrap::set_dmg(int mad, int rad, int adr)
{
	ClapTrap::set_dmg(mad, rad, adr);
}

/*=======================================================*/
	// Operator Overload
ScavTrap&	ScavTrap::operator=(const ScavTrap& src)
{
	ClapTrap::set_hp(src.get_hp());
	ClapTrap::set_mxhp();
	ClapTrap::set_ep(src.get_ep());
	ClapTrap::set_mxep(src.get_mxep());
	ClapTrap::set_lvl();
	ClapTrap::set_dmg(src.get_mad(), src.get_rad(), src.get_adr());
	ClapTrap::set_name(src.get_name());
	return *this;
}
/*=======================================================*/
	// Member Funcions
void	ScavTrap::rangedAttack(std::string const & target)
{
	std::cout << "SC4V-TP <" << get_name() << "> firing to <" << target;
	std::cout << "> with the rocket launcher, causing <" << get_rad() << "> damages point !" << std::endl;
}

void	ScavTrap::meleeAttack(std::string const & target)
{
	std::cout << "SC4V-TP <" << get_name() << "> draw a sword hit <" << target;
	std::cout << "> , causing <" << get_mad() << "> damages point !" << std::endl;
}

void	ScavTrap::takeDamage(unsigned int amount)
{
	int hp;

	hp = get_hp();
	hp -= amount - get_adr();
	if (hp > 0)
	{
		set_hp(hp);
		std::cout << "SC4V-TP <" << get_name() << "> is taking damage";
		std::cout << ", it's armor reduce the damage to <" << amount - get_adr() << "> damages !" << std::endl;
	}
	else
	{
		set_hp(0);
		std::cout << "SC4V-TP <" << get_name() << "> is taking damage";
		std::cout << " <" << get_mxhp() << "> damages !\n";
		std::cout << "<" << get_name() << ">'s hp is 0!" << std::endl;
		std::cout << get_name() << ":.....*disassembles in the background*..." << std::endl;
	}
}

void	ScavTrap::beRepaired(unsigned int amount)
{
	unsigned int hp;

	hp = get_hp();
	if ((hp + amount ) <= get_mxhp())
	{
		set_hp(hp + amount);
		std::cout << "<" << get_name() << "> is Repairing itself !.";
		std::cout << ".. <" << amount << "> hp gained !" << std::endl;
	}
	else
	{
		set_hp(get_mxhp());
		std::cout << "<" << get_name() << "> is Repairing...";
		std::cout << "can't repair more than.. <" << get_mxhp() - hp << "> full Hp now !" << std::endl;
	}
}

void	ScavTrap::challengeNewcomer(std::string const & target)
{
	std::string	chllg[5] = {"Burp race", "Death Challenge", "The first who laugh Lose",
										"Gunfighter duel", "Squat Challenge"};
	int		nrg;

	nrg = get_ep();
	if (nrg >= 25)
	{
		set_ep(nrg - 25);
		std::cout << "SC4V_TP <" << get_name() << "> challenge <";
		std::cout << target << "> to <" << chllg[rand() % 5] << "> !" << std::endl;
	}
	else
		std::cout << "SC4V_TP <" << get_name() << "> is out of energy!" << std::endl;
}