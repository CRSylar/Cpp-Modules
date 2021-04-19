/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Inc.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cromalde <cromalde@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 11:27:16 by cromalde          #+#    #+#             */
/*   Updated: 2021/04/19 13:26:49 by cromalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INC_HPP
# define INC_HPP

# include "../Operation.hpp"
class Operation;
# include "../Brainfuck.hpp"

class Inc : public Operation
{
	public:
		Inc(Brainfuck& bfk);
		Inc(const Inc& src);
		~Inc();

		Inc&	operator=(const Inc& src);

		void	execute(void);
		int		myId(void) const ;
	private:
		Inc(void);
};

#endif
