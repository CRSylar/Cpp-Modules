/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cromalde <cromalde@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 16:38:23 by cromalde          #+#    #+#             */
/*   Updated: 2021/04/13 17:15:10 by cromalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

/* ************************************************************************** */
	//	Costructors & Destructor
MateriaSource::MateriaSource(void) :
	amount(0)
{
	for (int i = 0; i < 4; i++)
		this->sources[i] = nullptr;
}

MateriaSource::MateriaSource(const MateriaSource& src) :
	amount(0)
{
	for (int i = 0; i < src.amount; i++)
		this->learnMateria(src.sources[i]->clone());
	for (int i = 0; i < 4; i++)
		this->sources[i] = nullptr;
}

MateriaSource::~MateriaSource(void)
{
	for (int i = 0; i < this->amount; i++)
		delete this->sources[i];
}
/* ************************************************************************** */
	//	Operator Overload
MateriaSource&	MateriaSource::operator=(const MateriaSource& src)
{
	this->~MateriaSource();
	this->amount = 0;
	for (int i = 0; i < src.amount; i++)
		this->learnMateria(src.sources[i]->clone());
	for (int i = 0; i < 4; i++)
		this->sources[i] = nullptr;
	return *this;
}
/* ************************************************************************** */
	//	Member Function
void	MateriaSource::learnMateria(AMateria* _m)
{
	if (this->amount == 4 || _m == nullptr)
		return ;
	this->sources[this->amount++] = _m;
}

AMateria*	MateriaSource::createMateria(std::string const & _type)
{
	for (int i = 0; i < this->amount; i++)
		if (this->sources[i]->getType() == _type)
			return this->sources[i]->clone();
	return nullptr;
}
