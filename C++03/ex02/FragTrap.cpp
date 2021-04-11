/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cromalde <cromalde@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 16:59:14 by cromalde          #+#    #+#             */
/*   Updated: 2021/04/11 16:49:00 by cromalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

	//	Constructors & Destructor
FragTrap::FragTrap(void) : ClapTrap()
{
	set_ep(100);
	set_mxep();
	set_dmg(30, 20, 5);
	std::cout << "Default Constructor called, Welcome Fr4g_Tr4p !" << std::endl;
}

FragTrap::FragTrap(std::string	name) : ClapTrap(name)
{
	set_ep(100);
	set_mxep();
	set_dmg(30, 20, 5);
	std::cout << "Constructor called, Welcome " << get_name() << " !" << std::endl;
}

FragTrap::FragTrap(const FragTrap& src) : ClapTrap(src)
{
	std::cout << "Copy Constructor called, now there's two " << get_name() << " !" << std::endl;
}

FragTrap::~FragTrap(void)
{
	std::cout << "Destructor called on " << get_name() << std::endl;
}

/*=======================================================*/
		// Setter & Getter
void	FragTrap::set_ep(int ep)
{
	ClapTrap::set_ep(ep);
}

void	FragTrap::set_mxep(void)
{
	ClapTrap::set_mxep(100);
}

void	FragTrap::set_dmg(int mad, int rad, int adr)
{
	ClapTrap::set_dmg(mad, rad, adr);
}
/*=======================================================*/
	// Operator Overload
FragTrap&	FragTrap::operator=(const FragTrap& src)
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
void	FragTrap::rangedAttack(std::string const & target)
{
	std::cout << "FR4G-TP <" << get_name() << "> attacks <" << target;
	std::cout << "> at range, causing <" << get_rad() << "> damages point !" << std::endl;
}

void	FragTrap::meleeAttack(std::string const & target)
{
	std::cout << "FR4G-TP <" << get_name() << "> charge in melee <" << target;
	std::cout << "> , causing <" << get_mad() << "> damages point !" << std::endl;
}

void	FragTrap::takeDamage(unsigned int amount)
{
	int hp;

	hp = get_hp();
	hp -= amount - get_adr();
	if (hp > 0)
	{
		set_hp(hp);
		std::cout << "FR4G-TP <" << get_name() << "> is taking damage";
		std::cout << ", thaks to armor get <" << amount - get_adr() << "> damages !" << std::endl;
	}
	else
	{
		set_hp(0);
		std::cout << "FR4G-TP <" << get_name() << "> is taking damage";
		std::cout << " <" << get_mxhp() << "> damages !\n";
		std::cout << "<" << get_name() << ">'s hp is 0!" << std::endl;
		std::cout << get_name() << ":.....*is gone now*..." << std::endl;
	}
}

void	FragTrap::beRepaired(unsigned int amount)
{
	unsigned int hp;

	hp = get_hp();
	if ((hp + amount ) <= get_mxhp())
	{
		set_hp(hp + amount);
		std::cout << "Repairing <" << get_name() << ">...";
		std::cout << ".. <" << amount << "> hp gained !" << std::endl;
	}
	else
	{
		set_hp(get_mxhp());
		std::cout << "Repairing <" << get_name() << ">...";
		std::cout << "can't repair more than.. <" << get_mxhp() - hp << "> full Hp now !" << std::endl;
	}
}

void	FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	std::string	atks[5] = {"Flirting", "Ticking", "Funny Face", "Pinching", "Tricking"};
	int		nrg;

	nrg = get_ep();
	if (nrg >= 25)
	{
		set_ep(nrg - 25);
		std::cout << "FR4G_TP <" << get_name() << "> uses : <";
		std::cout << atks[rand() % 5] << "> on <" << target << "> !" << std::endl;
	}
	else
		std::cout << "FR4G_TP <" << get_name() << "> is out of energy!" << std::endl;
}
