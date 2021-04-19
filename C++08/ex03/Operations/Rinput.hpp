/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Rinput.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cromalde <cromalde@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 11:27:16 by cromalde          #+#    #+#             */
/*   Updated: 2021/04/19 11:58:09 by cromalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RINPUT_HPP
# define RINPUT_HPP

# include "../Operation.hpp"
# include "../Brainfuck.hpp"
# include <iostream>

class Rinput : public Operation
{
	public:
		Rinput	(Brainfuck& bfk);
		Rinput	(const Rinput& src);
		~Rinput	();

		Rinput	&	operator=(const Rinput	& src);

		void	execute(void);
		int		myId(void) const ;
	private:
		Rinput	(void);
};

#endif
