/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Lstart.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cromalde <cromalde@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 11:27:16 by cromalde          #+#    #+#             */
/*   Updated: 2021/04/19 11:40:22 by cromalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LSTART_HPP
# define LSTART_HPP

# include "../Operation.hpp"
# include "../Brainfuck.hpp"

class Lstart : public Operation
{
	public:
		Lstart(Brainfuck& bfk);
		Lstart(const Lstart& src);
		~Lstart();

		Lstart&	operator=(const Lstart& src);

		void	execute(void);
		int		myId(void) const ;
	private:
		Lstart(void);
};

#endif
