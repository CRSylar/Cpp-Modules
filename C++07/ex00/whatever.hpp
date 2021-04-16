/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cromalde <cromalde@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 15:25:38 by cromalde          #+#    #+#             */
/*   Updated: 2021/04/16 16:23:33 by cromalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <iostream>

template <typename T>
void	swap(T& a, T& b)
{
	T tmp;

	tmp = a;
	a = b;
	b = tmp;
}

template <typename T>
T&	min(T& a, T&b)
{
	if (a < b)
		return a;
	else
		return b;
}

template <typename T>
T&	max(T& a, T&b)
{
	if (a > b)
		return a;
	else
		return b;
}

#endif
