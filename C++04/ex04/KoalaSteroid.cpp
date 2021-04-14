/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   KoalaSteroid.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cromalde <cromalde@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 09:58:14 by cromalde          #+#    #+#             */
/*   Updated: 2021/04/14 09:59:08 by cromalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "KoalaSteroid.hpp"

/* ************************************************************************** */
	//	Constructor & Destructor
KoalaSteroid::KoalaSteroid(void) :
	name("Asteroid")	{}

KoalaSteroid::KoalaSteroid(std::string _name) :
	name(_name)	{}

KoalaSteroid::KoalaSteroid(const KoalaSteroid& src) :
	name(src.name)	{}

KoalaSteroid::~KoalaSteroid(void)
{}
/* ************************************************************************** */
	//	Op.	Overload
KoalaSteroid&	KoalaSteroid::operator=(const KoalaSteroid& src)
{
	this->name = src.name;
	return *this;
}
/* ************************************************************************** */
	//	Getter & Member func.
std::string		KoalaSteroid::getName(void) const
{
	return this->name;
}


std::string		KoalaSteroid::beMined(DeepCoreMiner* _lsr) const
{
	(void)_lsr;
	return ("Dragonite");
}

std::string		KoalaSteroid::beMined(StripMiner* _lsr) const
{
	(void)_lsr;
	return ("Flavium");
}
