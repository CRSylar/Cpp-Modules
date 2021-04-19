/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dec.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cromalde <cromalde@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 11:27:16 by cromalde          #+#    #+#             */
/*   Updated: 2021/04/19 13:25:12 by cromalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEC_HPP
# define DEC_HPP

# include "../Operation.hpp"
# include "../Brainfuck.hpp"
class Operation;

class Dec : public Operation
{
	public:
		Dec(Brainfuck& bfk);
		Dec(const Dec& src);
		~Dec();

		Dec&	operator=(const Dec& src);

		void	execute(void);
		int		myId(void) const ;
	private:
		Dec(void);
};

#endif
