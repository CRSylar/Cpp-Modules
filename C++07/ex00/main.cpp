/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cromalde <cromalde@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 15:42:21 by cromalde          #+#    #+#             */
/*   Updated: 2021/04/16 16:03:18 by cromalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"
#include <string>

int		main(void)
{
	int a = 5;
	int b = 10;

	std::string str1 = "string1";
	std::string str2 = "string2";

	std::cout << a << "/" << b << std::endl << str1 << str2 << std::endl;

	for (int i = 0; i < 2; i++)
	{
		::swap(a, b);
		std::cout << a << "/" << b << std::endl << str1 << str2 << std::endl;
		::swap(str1, str2);
		std::cout << a << "/" << b << std::endl << str1 << str2 << std::endl;

		std::cout <<	::min(a, b) << \
						::min(str1, str2) << std::endl;

		std::cout <<	::max(a, b) << \
						::max(str1, str2) << std::endl;
	}
}
