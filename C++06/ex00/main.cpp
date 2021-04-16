/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cromalde <cromalde@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 10:47:10 by cromalde          #+#    #+#             */
/*   Updated: 2021/04/16 11:31:01 by cromalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Caster.hpp"

int		main(int ac, char **av)
{
	std::string str;
	if (ac == 2)
	{
		str = av[1];
		Caster a(str);
	}
	else
		return 1;
	return 0;
}
