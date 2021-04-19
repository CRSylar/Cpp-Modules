/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brainfuck.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cromalde <cromalde@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 11:10:06 by cromalde          #+#    #+#             */
/*   Updated: 2021/04/19 13:27:24 by cromalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAINFUCK_HPP
# define BRAINFUCK_HPP

# include <queue>
# include "Operation.hpp"
class Operation;

class Brainfuck
{
	public:
		Brainfuck(void);
		Brainfuck(const Brainfuck& src);
		~Brainfuck(void);

		Brainfuck& operator=(const Brainfuck& src);

		void	New_operation(Operation* operation);

		void	Incval(void);
		void	Decval(void);
		void	Incptr(void);
		void	Decptr(void);
		void	set_val(char c);
		char	get_val(void) const ;
		void	l_start(void);
		void	l_end(void);

	private:
		int		cur_ptr;
		int		ptr;
		std::vector<char> stack;
		std::deque<Operation*> op;

};

Brainfuck::Brainfuck(void)
{
	cur_ptr = 0;
	ptr = 0;
	op.clear();
	stack.clear();
}

Brainfuck::Brainfuck(const Brainfuck& src)
{
	cur_ptr = src.cur_ptr;
	ptr = src.ptr;
	op.clear();
	op = src.op;
	stack.clear();
	stack = src.stack;
}

Brainfuck::~Brainfuck()	{}

Brainfuck&	Brainfuck::operator=(const Brainfuck& src)
{
	cur_ptr = src.cur_ptr;
	ptr = src.ptr;
	op.clear();
	op = src.op;
	stack.clear();
	stack = src.stack;
}

void	Brainfuck::Incval(void)
{
	stack[ptr]++;
}

void	Brainfuck::Decval(void)
{
	stack[ptr]--;
}

#endif
