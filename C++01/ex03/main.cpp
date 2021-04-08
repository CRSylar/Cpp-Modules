/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cromalde <cromalde@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 10:00:29 by cromalde          #+#    #+#             */
/*   Updated: 2021/04/08 12:59:19 by cromalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

int		main(void)
{
	ZombieHorde *horde;

	horde = new ZombieHorde(8);
	horde->announce();

	delete horde;

	horde = new ZombieHorde(1);
	horde->announce();
	delete horde;

	return (0);
}
