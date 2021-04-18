/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cromalde <cromalde@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 12:36:24 by cromalde          #+#    #+#             */
/*   Updated: 2021/04/18 09:51:21 by cromalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <iostream>

int main(void)
{
	srand(time(0));
	std::vector<int>::iterator _it;
	std::vector<int> v(10);
	for (int i = 0; i < 10; i++)
		v[i] = i;
	try
	{
		_it = ::easyfind(v, 12);
		std::cout << *_it << " in position " << _it - v.begin() <<  std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "*NOT FOUND*" << std::endl;
	}
}
