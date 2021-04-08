/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cromalde <cromalde@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 14:47:47 by cromalde          #+#    #+#             */
/*   Updated: 2021/04/08 15:12:12 by cromalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

const Brain&	Human::getBrain(void)
{
	return (_brain);
}

std::string		Human::identify(void)
{
	return (_brain.identify());
}

Human::Human(void)
{
	srand(time(0));
	std::string	names[8] = {"Danilo", "Crisiano", "Umberto", "Mattia", "Andrea",
							"Giovo", "Flavio", "Ciro"};
	_name = names[rand() % 8];
}

Human::~Human()
{
}
