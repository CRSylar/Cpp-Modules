/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cromalde <cromalde@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 13:37:48 by cromalde          #+#    #+#             */
/*   Updated: 2021/04/16 13:47:12 by cromalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Identifyer.hpp"

int main(void)
{
	srand(time(0));

	for (int i = 0; i < 5; i++)
	{
		Base *_b = generate();
		std::cout << "Test: " << i << std::endl;
		identify_from_pointer(_b);
		std::cout << "----------------" << std::endl;
		identify_from_reference(*_b);
		std::cout << std::endl;
		delete _b;
	}
}
