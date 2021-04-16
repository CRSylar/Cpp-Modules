/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Identifyer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cromalde <cromalde@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 13:25:37 by cromalde          #+#    #+#             */
/*   Updated: 2021/04/16 13:37:29 by cromalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Identifyer.hpp"

Base*	generate(void)
{
	int random = rand() % 100;

	if (random < 33)
		return new A;
	else if (random < 66)
		return new B;
	else
		return new C;
}

void	identify_from_pointer(Base* p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
}

void	identify_from_reference(Base& p)
{
	identify_from_pointer(&p);
}
