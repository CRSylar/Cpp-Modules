/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cromalde <cromalde@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 09:43:18 by cromalde          #+#    #+#             */
/*   Updated: 2021/04/09 13:17:33 by cromalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

void	ft_stdin(void)
{
	std::cout << std::cin.rdbuf();
	return ;
}

int		main(int ac, char **av)
{
	std::string		str = "";
	std::ifstream	fd;
	int				i;

	if (ac == 1)
	{
		ft_stdin();
		return (0);
	}
	for (i = 1; i < ac; i++)
	{
		fd.open(av[i], std::fstream::in);
		if (fd.is_open())
			getline(fd, str, '\0');
		else
		{
			std::cout << "cato9tails: " << av[i] << ": No such file" << std::endl;
			return (1);
		}
		std::cout << str << std::endl;
		fd.close();
	}
}
