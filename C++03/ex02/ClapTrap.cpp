/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cromalde <cromalde@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 15:38:12 by cromalde          #+#    #+#             */
/*   Updated: 2021/04/11 17:00:01 by cromalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

//	Constructors & Destructor
ClapTrap::ClapTrap(void)
{
	srand(time(0));
	set_hp(100);
	set_mxhp();
	set_lvl();
	Name = "Cl4p_Tp";
	std::cout << "Building a new CL4P_TP" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
	srand(time(0));
	set_hp(100);
	set_mxhp();
	set_lvl();
	Name = name;
	std::cout << "Building a new CL4P_TP using Named Constructor" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& src)
{
	srand(time(0));
	Hit_points = src.get_hp();
	Max_hit_points = src.get_mxhp();
	Energy_points = src.get_ep();
	Max_energy_points =src.get_mxep();
	Level = src.get_lvl();
	Melee_attack_damage = src.get_mad();
	Ranged_attack_damage = src.get_rad();
	Armor_damage_reduction = src.get_adr();
	Name = src.get_name() + "_cp";
	std::cout << "Building a new CL4P_TP using the Copy Constructor" << std::endl;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "Destroing Clap-Trap" << std::endl;
}
/*=======================================================*/
	//	Setter & Getter
void	ClapTrap::set_name(std::string name)
{
	Name = name;
}

void	ClapTrap::set_hp(int hp)
{
	Hit_points = hp;
}

void	ClapTrap::set_mxhp(void)
{
	Max_hit_points = 100;
}

void	ClapTrap::set_lvl(void)
{
	Level = 1;
}

void	ClapTrap::set_ep(int ep)
{
	Energy_points = ep;
}

void	ClapTrap::set_mxep(int mxep)
{
	Max_energy_points = mxep;
}

void	ClapTrap::set_dmg(int mad, int rad, int adr)
{
	Melee_attack_damage  = mad;
	Ranged_attack_damage = rad;
	Armor_damage_reduction = adr;
}

unsigned int		ClapTrap::get_hp(void) const
{
	return (Hit_points);
}

unsigned int		ClapTrap::get_mxhp(void) const
{
	return (Max_hit_points);
}

unsigned int		ClapTrap::get_ep(void) const
{
	return (Energy_points);
}

unsigned int		ClapTrap::get_mxep(void) const
{
	return (Max_energy_points);
}

unsigned int		ClapTrap::get_lvl(void) const
{
	return (Level);
}

unsigned int		ClapTrap::get_mad(void) const
{
	return (Melee_attack_damage);
}

unsigned int		ClapTrap::get_rad(void) const
{
	return (Ranged_attack_damage);
}

unsigned int		ClapTrap::get_adr(void) const
{
	return (Armor_damage_reduction);
}

std::string		ClapTrap::get_name(void) const
{
	return (Name);
}
/*=======================================================*/
	//Operator Overload
ClapTrap&	ClapTrap::operator=(const ClapTrap& src)
{
	Hit_points = src.get_hp();
	Max_hit_points = src.get_mxhp();
	Energy_points = src.get_ep();
	Max_energy_points =src.get_mxep();
	Level = src.get_lvl();
	Melee_attack_damage = src.get_mad();
	Ranged_attack_damage = src.get_rad();
	Armor_damage_reduction = src.get_adr();
	Name = src.get_name();
	return *this;
}
