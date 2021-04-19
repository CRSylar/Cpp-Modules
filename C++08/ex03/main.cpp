/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cromalde <cromalde@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/18 17:22:13 by cromalde          #+#    #+#             */
/*   Updated: 2021/04/19 10:05:02 by cromalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Mindopen.hpp"
#include <sstream>
#include <fstream>

void	fromfile(char *av)
{
	std::ifstream	fd;
	std::string		str;

	fd.open(av, std::fstream::in);
	if (fd.is_open())
	{
		getline(fd, str, '\0');
		Mindopen	brnfk(str);
		brnfk.execute();
	}
	else
	{
		std::cout << "Error: can't open the file" << std::endl;
		return ;
	}
}


void	fromstdin(void)
{
	std::stringstream	ss;
	std::string			str;

	ss << std::cin.rdbuf();
	str = ss.str();
	Mindopen	brnfk(str);
	brnfk.execute();
}


int		main(int ac, char **av)
{
	if (ac > 2)
	{
		std::cout << "Usage:	./mindopen [Brainfuck file or null for stdin]" << std::endl;
		return (1);
	}
	else if (ac == 2)
	{
		fromfile(av[1]);
		return 0;
	}
	fromstdin();
	return 0;
}
