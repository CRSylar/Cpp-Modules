/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cromalde <cromalde@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 16:54:37 by cromalde          #+#    #+#             */
/*   Updated: 2021/04/12 18:11:12 by cromalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

	//	Constructors & Destructor
Enemy::Enemy(void) :
	type("No_type"), hp(0)	{}

Enemy::Enemy(int _hp, std::string const & _type) :
	type(_type), hp(_hp)	{}

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
