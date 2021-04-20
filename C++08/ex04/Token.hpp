/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Token.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cromalde <cromalde@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 16:15:06 by cromalde          #+#    #+#             */
/*   Updated: 2021/04/20 16:21:26 by cromalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TOKEN_HPP
# define TOKEN_HPP

# include <iostream>

class Token
{
	public:
		Token(void);
		Token(const Token& src);
		virtual ~Token();

		Token&	operator=(const Token& src);

		virtual	int	getType(void) const = 0;
		virtual void print(void) const = 0;
	private:
};

#endif
