/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cromalde <cromalde@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 09:03:02 by cromalde          #+#    #+#             */
/*   Updated: 2021/04/08 09:07:47 by cromalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

void	memoryLeak(void)
{
	std::string*	panther	=	new std::string("String panther");

	std::cout << *panther << std::endl;
	delete panther;
}
