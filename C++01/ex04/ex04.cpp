/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cromalde <cromalde@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 13:08:10 by cromalde          #+#    #+#             */
/*   Updated: 2021/04/08 13:13:30 by cromalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int		main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string	*ptr = &str;
	std::string &ref = str;

	std::cout << "display the string ->" << str << std::endl;
	std::cout << "string using the pointer -> " << *ptr << std::endl;
	std::cout << "string using the reference -> " << ref << std::endl;
	return (0);
}
