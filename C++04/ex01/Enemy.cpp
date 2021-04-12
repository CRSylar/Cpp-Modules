/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cromalde <cromalde@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 16:54:37 by cromalde          #+#    #+#             */
/*   Updated: 2021/04/12 17:45:14 by cromalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

	//	Constructors & Destructor
Enemy::Enemy(void) :
	hp(0), type("No_type")	{}

Enemy::Enemy(int _hp, std::string const & _type) :
	hp(_hp), type("_type")	{}

Enemy::Enemy(const Enemy& src)
{
	this->hp = src.getHP();
	this->type = src.getType();
}

Enemy::~Enemy(void)	{}

/*===============================================*/
	// Operator Overload
Enemy&	Enemy::operator=(const Enemy& src)
{
	this->hp = src.getHP();
	this->type = src.getType();
	return *this;
}
/*===============================================*/
	//	Getter
std::string		const Enemy::getType(void) const
{
	return type;
}

int		Enemy::getHP(void) const
{
	return hp;
}
/*===============================================*/
	// Member Function
void	Enemy::takeDamage(int _n)
{
	if (_n <= 0)
		return;
	if ((this->hp -= _n) <= 0)
		this->hp = 0;
}
