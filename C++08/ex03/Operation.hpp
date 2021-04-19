/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Operation.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cromalde <cromalde@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 10:02:44 by cromalde          #+#    #+#             */
/*   Updated: 2021/04/19 12:12:59 by cromalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OPERATION_HPP
# define OPERATION_HPP

#include "Brainfuck.hpp"

class Operation
{
	public:
		Operation(void);
		Operation(Brainfuck& bfk);
		virtual ~Operation(void);

	protected:
		Brainfuck	bf;

	private:
		Operation(const Operation& src);

		Operation&	operator=(const Operation& src);

		virtual void	execute(void) = 0;
		virtual int		myId(void) const = 0;
};

Operation::~Operation(void)
{}


#endif
