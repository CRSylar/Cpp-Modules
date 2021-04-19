/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PtrDec.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cromalde <cromalde@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 11:27:16 by cromalde          #+#    #+#             */
/*   Updated: 2021/04/19 11:58:09 by cromalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PTRDEC_HPP
# define PTRDEC_HPP

# include "../Operation.hpp"
# include "../Brainfuck.hpp"

class PtrDec : public Operation
{
	public:
		PtrDec(Brainfuck& bfk);
		PtrDec(const PtrDec& src);
		~PtrDec();

		PtrDec&	operator=(const PtrDec& src);

		void	execute(void);
		int		myId(void) const ;
	private:
		PtrDec(void);
};

#endif
