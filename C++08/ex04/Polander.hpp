/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Polander.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cromalde <cromalde@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 15:43:49 by cromalde          #+#    #+#             */
/*   Updated: 2021/04/20 16:43:45 by cromalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POLAND_HPP
# define POLAND_HPP

# include <string>
# include <iostream>
# include <exception>

class Polander
{
	public:
		Polander(std::string& data);
		~Polander();

		class InvalidExpression : public std::exception
		{
			virtual const char* what() const throw();
		};

	private:
		Polander(void);
		Polander(const Polander& src);

		Polander&	operator=(const Polander& src);

		bool	is_valid();
		void	tokenize();
		std::string		input;
};

Polander::Polander(void)	{}

Polander::Polander(std::string& data)
{
	this->input = data;
	if (!this->is_valid())
		throw Polander::InvalidExpression();
	this->tokenize();
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
	if (input.find_first_not_of("0123456789()+-*/") != std::string::npos)
		return false;
	if (std::count(input.begin(), input.end(), '(' - std::count(input.begin(), input.end(), ')')) != 0)
		return false;
	return true;
}

void	Polander::tokenize(void)
{

}

const char* Polander::InvalidExpression::what() const throw()
{
	return "Error: Invalid Expression";
}


#endif
