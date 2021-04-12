/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cromalde <cromalde@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 16:27:13 by cromalde          #+#    #+#             */
/*   Updated: 2021/04/12 16:28:54 by cromalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

	//	Constructor & Destructor
PlasmaRifle::PlasmaRifle(void) :
	AWeapon("*Plasma Rifle*", 5, 21)
{}

PlasmaRifle::PlasmaRifle(const PlasmaRifle& src) :
	AWeapon(src)
{}

PlasmaRifle::~PlasmaRifle(void)
{}
/*===============================================*/
	//	Operator Override
PlasmaRifle&	PlasmaRifle::operator=(const PlasmaRifle & src)
{
	this->name = src.getName();
	this->apcost = src.getAPCost();
	this->damage = src.getDamage();
	return *this;
}
/*===============================================*/
	//	Member function
void	PlasmaRifle::attack() const
{
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}
