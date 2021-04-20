/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Operator.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cromalde <cromalde@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 16:22:42 by cromalde          #+#    #+#             */
/*   Updated: 2021/04/20 16:32:13 by cromalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OPERATOR_HPP
# define OPERATOR_HPP

# include "../Token.hpp"

class Operator : public Token
{
	public:
		Operator(char _c);
		Operator(const Operator& src);
		~Operator(void);

		Operator&	operator=(const Operator& src);

		int			getType(void) const;
		void			print(void) const;
		std::string		print_operation(void) const;
	private:
		Operator(void);

		char		value;
};

#endif
