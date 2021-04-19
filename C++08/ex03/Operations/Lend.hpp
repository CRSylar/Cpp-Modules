/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Lend.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cromalde <cromalde@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 11:27:16 by cromalde          #+#    #+#             */
/*   Updated: 2021/04/19 11:40:22 by cromalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LEND_HPP
# define LEND_HPP

# include "../Operation.hpp"
class Operation;
# include "../Brainfuck.hpp"

class Lend : public Operation
{
	public:
		Lend(Brainfuck& bfk);
		Lend(const Lend& src);
		~Lend();

		Lend&	operator=(const Lend& src);

		void	execute(void);
		int		myId(void) const ;
	private:
		Lend(void);
};

#endif
