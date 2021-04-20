/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Polander.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cromalde <cromalde@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 15:43:49 by cromalde          #+#    #+#             */
/*   Updated: 2021/04/20 18:10:21 by cromalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POLAND_HPP
# define POLAND_HPP

# include <string>
# include <iostream>
# include <sstream>
# include <exception>
# include <deque>
# include <stack>
# include "Token.hpp"
# include "Tokens/Number.hpp"
# include "Tokens/Openbra.hpp"
# include "Tokens/Closedbra.hpp"
# include "Tokens/Operator.hpp"

void	print_stack(std::deque<int>& stack);
class Polander
{
	public:
		Polander(char* _data);
		~Polander();

		class InvalidExpression : public std::exception
		{
			virtual const char* what() const throw();
		};

		class InvalidNumber : public std::exception
		{
			virtual const char* what() const throw();
		};
	private:
		Polander(void);
		Polander(const Polander& src);

		Polander&	operator=(const Polander& src);

		bool	is_valid();
		void	tokenize();
		void	show_token();
		void	Polanderize();
		void	show_poland();
		void	do_math();
		std::string		input;
		std::deque<Token*> tk_list;
		std::deque<Token*> pol_list;
};


Polander::Polander(void)	{}

Polander::Polander(char* _data)
{
	this->input = _data;
	if (!this->is_valid())
		throw Polander::InvalidExpression();
	this->tokenize();
	this->show_token();
	this->Polanderize();
	this->show_poland();
	this->do_math();
}

Polander::Polander(const Polander& src)
{
	(void)src;
}

Polander::~Polander()	{}

Polander&	Polander::operator=(const Polander& src)
{
	(void)src;
	return *this;
}

bool	Polander::is_valid(void)
{
	if (input.find_first_not_of("0123456789()+-*/ ") != std::string::npos)
		return false;
	if (std::count(input.begin(), input.end(), '(' - std::count(input.begin(), input.end(), ')')) != 0)
		return false;
	return true;
}

void	Polander::tokenize(void)
{
	std::stringstream ss;
	size_t len = this->input.length();
	for (size_t i = 0; i < len; i++)
	{
		if (input[i] == ' ')
			continue;
		else if (std::isdigit(input[i]))
		{
			while (std::isdigit(input[i]))
				ss << input[i++];
			int num;
			ss >> num;
			if (ss.fail())
				throw Polander::InvalidNumber();
			tk_list.push_back(new Number(num));
			ss.str(std::string());
			ss.clear();
		}
		else if (input[i] == '(')
			tk_list.push_back(new Openbra());
		else if (input[i] == ')')
			tk_list.push_back(new Closedbra());
		else if (input[i] == '+' || input[i]  == '-' || input[i] ==  '*' || input[i] == '/')
			tk_list.push_back(new Operator(input[i]));
	}
}

void		Polander::show_token(void)
{
	std::deque<Token*>::iterator start = tk_list.begin();
	std::deque<Token*>::iterator end = tk_list.end();

	std::cout << "Tokens: ";
	for (; start != end; start++)
	{
		(*start)->print();
		std::cout << " ";
	}
	std::cout << std::endl;
}

void	Polander::show_poland(void)
{
	std::deque<Token*>::iterator start = pol_list.begin();
	std::deque<Token*>::iterator end = pol_list.end();

	std::cout << "Postfix: ";
	for (; start != end; start++)
	{
		(*start)->print();
		std::cout << " ";
	}
	std::cout << std::endl;
}

void	Polander::Polanderize(void)
{
	std::stack<Token*>	operation_stack;
	std::deque<Token*>::iterator start  = tk_list.begin();
	std::deque<Token*>::iterator end = tk_list.end();

	for(; start != end; start++)
	{
		if ((*start)->getType() == 1)
		pol_list.push_back(*start);
		else if (((*start)->getType() == 2) || ((*start)->getType() == 3))
			operation_stack.push(*start);
		else if ((*start)->getType() == 4)
		{
			while (!operation_stack.empty())
			{
				if (operation_stack.top()->getType() == 3)
				{
					operation_stack.pop();
					break;
				}
				pol_list.push_back(operation_stack.top());
				operation_stack.pop();
			}
		}
	}
	while (!operation_stack.empty())
	{
		pol_list.push_back(operation_stack.top());
		operation_stack.pop();
	}
}

void	Polander::do_math(void)
{
	std::deque<int>	stack;
	std::deque<Token*>::iterator start = pol_list.begin();
	std::deque<Token*>::iterator end = pol_list.end();

	for (; start != end; start++)
	{
		if ((*start)->getType() == 1)
		{
			stack.push_back(static_cast<Number*>(*start)->getValue());
			std::cout << "I ";
			(*start)->print();
			std::cout << " | OP PUSH\t";
			::print_stack(stack);
		}
	}
}

const char* Polander::InvalidExpression::what() const throw()
{
	return "Error: Invalid Expression";
}

const char* Polander::InvalidNumber::what() const throw()
{
	return "Error: Invalid Number";
}

void		print_stack(std::deque<int>& stack)
{
	std::deque<int>::iterator	start = stack.begin();
	std::deque<int>::iterator	end = stack.end();

	std::cout << "| ST	";
	for (; start != end; start++)
	{
		std::cout << *start << " ";
	}
	std::cout << "]" << std::endl;
}

#endif
