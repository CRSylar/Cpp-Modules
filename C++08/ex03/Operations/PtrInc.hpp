/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PtrInc.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cromalde <cromalde@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 11:27:16 by cromalde          #+#    #+#             */
/*   Updated: 2021/04/19 11:58:09 by cromalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PTRINC_HPP
# define PTRINC_HPP

# include "../Operation.hpp"
# include "../Brainfuck.hpp"

class PtrInc : public Operation
{
	public:
		PtrInc(Brainfuck& bfk);
		PtrInc(const PtrInc& src);
		~PtrInc();

		PtrInc&	operator=(const PtrInc& src);

		void	execute(void);
		int		myId(void) const ;
	private:
		PtrInc(void);
};

#endif
