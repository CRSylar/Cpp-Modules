/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cromalde <cromalde@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 12:44:23 by cromalde          #+#    #+#             */
/*   Updated: 2021/04/06 13:10:12 by cromalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void	search(pbook *book, int i)
{

}

void	add_user(pbook **book, int i)
{

}

int	main(void)
{
	pbook			*book;
	std::string		imput;
	int					i = 0;

	book = new(pbook[8]);
	while (1)
	{
		std::cin >> imput;
		if (imput == "SEARCH")
			search(book, i);
		else if (imput == "EXIT")
			break ;
		else if (imput == "ADD")
		{
			if (i < 8)
				add_user(&book, i++);
			else
				std::cout << "PhoneBook is full, can't add a new contact\n";
		}
	}
	delete[](book);
	return (0);
}
