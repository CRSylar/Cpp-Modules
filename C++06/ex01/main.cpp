/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cromalde <cromalde@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 12:24:50 by cromalde          #+#    #+#             */
/*   Updated: 2021/04/16 13:00:24 by cromalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialization.hpp"

int main(void)
{
	srand(time(0));

	for (int i = 0; i < 5; i++)
	{
		void *raw = serialize();

		std::cout << "test " << i << ": " << '\n';
		Data *dt = deserialize(raw);

		std::cout << "\tstring1: " << dt->str1 << '\n';
		std::cout << "\tnum:    " << dt->num << '\n';
		std::cout << "\tstring2: " << dt->str2 << std::endl;

		delete static_cast<char*>(raw);
		delete dt;
	}

	return (0);
}
