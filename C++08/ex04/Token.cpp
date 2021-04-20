/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Token.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cromalde <cromalde@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 16:21:06 by cromalde          #+#    #+#             */
/*   Updated: 2021/04/20 16:21:36 by cromalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Token.hpp"

Token::Token(void)	{}

Token::Token(const Token& src)
{
	(void) src;
}

Token::~Token()	{}

Token&	Token::operator=(const Token& src)
{
	(void)src;
	return *this;
}
