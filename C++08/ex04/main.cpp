/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cromalde <cromalde@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 14:27:59 by cromalde          #+#    #+#             */
/*   Updated: 2021/04/20 15:05:58 by cromalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Polander.hpp"

int	main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "Error \nUsage:	./Polander  \"some expression\" " << std::endl;
		return 1;
	}
	Polander	expr(av[1]);
	return 0;
}
