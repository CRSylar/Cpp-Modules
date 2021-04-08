/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cromalde <cromalde@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 18:57:46 by cromalde          #+#    #+#             */
/*   Updated: 2021/04/08 19:15:05 by cromalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

int		main(void)
{
	Human	cri;

	cri.action("shout", "devil");
	cri.action("ranged", "target");
	cri.action("melee", "Warrior");
	return (0);
}
