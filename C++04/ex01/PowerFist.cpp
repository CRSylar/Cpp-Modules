/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cromalde <cromalde@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 16:27:13 by cromalde          #+#    #+#             */
/*   Updated: 2021/04/12 18:15:41 by cromalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

	//	Constructor & Destructor
PowerFist::PowerFist(void) :
	AWeapon("*Power Fist*", 8, 50)
{}

PowerFist::PowerFist(const PowerFist& src) :
	AWeapon(src)
{}

PowerFist::~PowerFist(void)
{}
/*===============================================*/
	//	Operator Override
PowerFist&	PowerFist::operator=(const PowerFist & src)
{
	this->name = src.getName();
	this->apcost = src.getAPCost();
	this->damage = src.getDamage();
	return *this;
}
/*===============================================*/
	//	Member function
void	PowerFist::attack() const
{
	std::cout << "* pschh    SBAM! *" << std::endl;
}
