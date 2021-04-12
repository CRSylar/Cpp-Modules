/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cromalde <cromalde@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 17:47:29 by cromalde          #+#    #+#             */
/*   Updated: 2021/04/12 17:59:04 by cromalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

	//	Costructor & Destructor
Character::Character(void) :
	name("Odisseo"), Ap(0), ptr(0)	{}

Character::Character(std::string const & _name) :
	name(_name), Ap(40), ptr(0)	{}

Character::Character(const Character& src)
{
	this->name = src.getName();
	this->Ap = 40;
	this->ptr = src.ptr;
}

Character::~Character(void)
{}
/*===============================================*/
	//	Operator Overload
Character&	Character::operator=(const Character& src)
{
	this->name = src.getName();
	this->Ap = 40;
	this->ptr = src.ptr;
	return *this;
}

std::ostream&	operator<<(std::ostream& stream, const Character& src)
{
	std::cout << src.getName() << " has " << src.getAp() << " and " << src.getWpName() << std::endl;
}
/*===============================================*/
	// Getter
int		Character::getAp(void) const
{
	return Ap;
}

std::string	 Character::getWpName(void) const
{
	if (ptr != 0)
		return ("wields a " + ptr->getName());
	return "is unarmed";
}
/*===============================================*/
	// Member Function
void	Character::recoverAP(void)
{
	if (this->Ap <= 30)
		this->Ap += 10;
	else
		this->Ap = 40;
}

void	Character::equip(AWeapon *_wp)
{
	this->ptr = _wp;
}

void	Character::attack(Enemy *_enemy)
{
	if (ptr == 0)
		return ;
	if ((this->Ap - ptr->getAPCost()) >= 0)
	{
		std::cout << getName() << " attacks " << _enemy->getType();
		std::cout << " with a " << ptr->getName() << std::endl;
		ptr->attack();
		this->Ap -= ptr->getAPCost();
		_enemy->takeDamage(ptr->getDamage());
		if (_enemy->getHP() <= 0)
			_enemy->~Enemy();
	}
	else
		std::cout << "* " << this->getName() << " * had not enought AP to attack with" \
		<< ptr->getName() << std::endl;
}
