/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Number.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cromalde <cromalde@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 16:22:42 by cromalde          #+#    #+#             */
/*   Updated: 2021/04/20 16:43:02 by cromalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NUMBER_HPP
# define NUMBER_HPP

# include "../Token.hpp"

class Number : public Token
{
	public:
		Number(int _n);
		Number(const Number& src);
		~Number(void);

		Number&	operator=(const Number& src);

		int		getValue(void) const;
		int		getType(void) const;
		void	print(void) const;
	private:
		Number(void);

		int		value;
};

#endif
