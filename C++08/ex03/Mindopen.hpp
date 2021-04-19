/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Mindopen.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cromalde <cromalde@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/18 16:44:28 by cromalde          #+#    #+#             */
/*   Updated: 2021/04/19 13:25:22 by cromalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINDOPEN_HPP
# define MINDOPEN_HPP

# include <string>
# include <iostream>
# include <queue>
# include <exception>
# include "Operations/Dec.hpp"
# include "Operations/Inc.hpp"
# include "Operations/Lend.hpp"
# include "Operations/Lstart.hpp"
# include "Operations/PtrDec.hpp"
# include "Operations/PtrInc.hpp"
# include "Operations/Rinput.hpp"
# include "Operations/Wout.hpp"
# include "Brainfuck.hpp"
class Mindopen
{
	public:
		Mindopen(std::string& input);
		~Mindopen(void);

		class BadBrackets : public std::exception
		{
			virtual const char* what() const throw();
		};

		bool	validate_program(void);
		void	execute(void);
	private:
		Mindopen(void);
		Mindopen(const Mindopen& src);
		Mindopen&	operator=(const Mindopen& src);

		std::string 	toparse;
		Brainfuck		operation;
};

Mindopen::Mindopen(void)	{}

Mindopen::Mindopen(std::string& input) :
	toparse(input)
{
}

Mindopen::Mindopen(const Mindopen& src) :
	toparse(src.toparse)
{
	operation = src.operation;
}

Mindopen::~Mindopen(void)	{}

Mindopen&	Mindopen::operator=(const Mindopen& src)
{
	toparse = src.toparse;
	operation = src.operation;
}

bool		Mindopen::validate_program(void)
{
	int		Opbrak = 0;
	int		Clbrak = 0;

	for (std::string::iterator it = toparse.begin(); it != toparse.end(); it++)
	{
		switch (*it)
		{
		case '+':
			operation.New_operation(new Inc(operation));
			break;
		case '-':
			operation.New_operation(new Dec(operation));
			break;
		case '<':
			operation.New_operation(new PtrDec(operation));
			break;
		case '>':
			operation.New_operation(new PtrInc(operation));
			break;
		case '[':
			operation.New_operation(new Lstart(operation));
			Opbrak++;
			break;
		case ']':
			operation.New_operation(new Lend(operation));
			Clbrak++;
			break;
		case '.':
			operation.New_operation(new Wout(operation));
			break;
		case ',':
			operation.New_operation(new Rinput(operation));
			break;
		}
	}
	if (Opbrak != Clbrak)
	{
		throw Mindopen::BadBrackets();
		return false;
	}
	return true;
}

void		Mindopen::execute(void)
{
	if (!validate_program())
		return ;
}

const char* Mindopen::BadBrackets::what() const throw()
{
	return "Error: UnMatching Brackets";
}

#endif
