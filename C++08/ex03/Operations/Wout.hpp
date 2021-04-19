/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Wout.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cromalde <cromalde@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 11:27:16 by cromalde          #+#    #+#             */
/*   Updated: 2021/04/19 11:58:09 by cromalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WOUT_HPP
# define WOUT_HPP

# include "../Operation.hpp"
# include "../Brainfuck.hpp"
# include <iostream>

class Wout : public Operation
{
	public:
		Wout	(Brainfuck& bfk);
		Wout	(const Wout& src);
		~Wout	();

		Wout	&	operator=(const Wout	& src);

		void	execute(void);
		int		myId(void) const ;
	private:
		Wout	(void);
};

#endif
