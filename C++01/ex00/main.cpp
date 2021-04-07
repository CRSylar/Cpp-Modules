/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cromalde <cromalde@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 16:50:39 by cromalde          #+#    #+#             */
/*   Updated: 2021/04/07 17:20:20 by cromalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void	ponyOnTheStack()
{
	std::cout << "At the start of the scope" << std::endl;
	Pony	pony("cavallino", "dakota", "1");
	pony.brush("cavallino");
	std::cout << "At the end of the scope" << std::endl;
}

void	ponyOnTheHeap()
{
	std::cout << "At the start of the scope" << std::endl;
	Pony	*pony = new Pony ("heap", "trotter", "2");
	pony->brush("heap");
	delete pony;
	std::cout << "At the end of the scope" << std::endl;
}

int	main(void)
{
	ponyOnTheStack();
	std::cout << std::endl;
	ponyOnTheHeap();
	return (0);
}
