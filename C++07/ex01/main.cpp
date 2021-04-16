/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cromalde <cromalde@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 16:40:35 by cromalde          #+#    #+#             */
/*   Updated: 2021/04/16 16:44:44 by cromalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int		main(int ac, char **av)
{
	int i = 1;
	if (ac < 2)
		return 1;
	while (av[i])
	{
		std::string str = av[i];
		::iter(av[i], str.length(), &ft_print);
		i++;
	}
	return 0;
}
