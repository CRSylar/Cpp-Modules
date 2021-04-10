/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cromalde <cromalde@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 10:26:01 by cromalde          #+#    #+#             */
/*   Updated: 2021/04/10 13:36:03 by cromalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

bool	check(std::string av)
{
	size_t		size;

	size = av.find_first_not_of("0123456789.()+-*/");
	if (size == std::string::npos)
		return (false);
	return (true);
}

std::string	mult(Fixed left, Fixed right)
{
	std::stringstream	ss;
	Fixed res;

	res = left * right;
	ss << res.toFloat();
	return (ss.str());
}

std::string	divid(Fixed left, Fixed right)
{
	std::stringstream	ss;
	Fixed res;

	res = left / right;
	ss << res.toFloat();
	return (ss.str());
}

std::string	sub(Fixed left, Fixed right)
{
	std::stringstream	ss;
	Fixed res;

	res = left - right;
	ss << res.toFloat();
	return (ss.str());
}

std::string	sum(Fixed left, Fixed right)
{
	std::stringstream	ss;
	Fixed res;

	res = left + right;
	ss << res.toFloat();
	return (ss.str());
}

void	solve_subexpr(std::string& subexpr)
{
	std::string	res;
	size_t		op;

	op = subexpr.find_first_not_of(" 0123456789.");
	if (op == std::string::npos)
		return ;
	if (subexpr.at(op) == '+')
		res = sum(std::stof(subexpr.substr(0, op - 1)), std::stof(subexpr.substr(op + 1, std::string::npos)));
	else if (subexpr.at(op) == '-')
		res = sub(std::stof(subexpr.substr(0, op - 1)), std::stof(subexpr.substr(op + 1, std::string::npos)));
	else if (subexpr.at(op) == '*')
		res = mult(std::stof(subexpr.substr(0, op - 1)), std::stof(subexpr.substr(op + 1, std::string::npos)));
	else if (subexpr.at(op) == '/')
		res = divid(std::stof(subexpr.substr(0, op - 1)), std::stof(subexpr.substr(op + 1, std::string::npos)));
	subexpr.swap(res);
}

std::string	find_left(std::string expr, size_t op)
{
	std::string ret;
	size_t		inf;

	inf = expr.rfind("-+", op);
	if (inf == std::string::npos)
		inf = 0;
	ret = expr.substr(inf, op - 1);
	return (ret);
}

void	priority_solve(std::string	expr)
{
	std::string	res;
	std::string	left;
	std::string	right;
	size_t	op = 0;
	size_t	inf;

	while ((op = expr.find_first_not_of(" 0123456789.+-")) != std::string::npos)
	{
		right = expr.substr(op + 1, expr.find_first_of("-*/+", op) - 1);
		left = find_left(expr, op);
		if (expr.at(op) == '*')
			res = mult(std::stof(left), std::stof(right));
		else if (expr.at(op) == '/')
			res = divid(std::stof(left), std::stof(right));
		inf = expr.rfind("-+", op);
		if (inf == std::string::npos)
			inf = 0;
		expr.replace(inf, , res);
	}
	std::cout << "Expression -> " << expr << std::endl;
}

bool	my_lexer(std::string expr)
{
	std::string				subexpr;
	bool					token = false;
	size_t					open = 0;
	size_t					close = 0;

	while (open != std::string::npos)
	{
		open = expr.find_first_of("(");
		if (open != std::string::npos)
			token = true;
		if (token)
		{
			close = expr.find_first_of(")");
			if (close == std::string::npos)
			{
				std::cout << "Error, some open bracket doesn't match with a closing one" << std::endl;
				return (true);
			}
			subexpr = expr.substr(open + 1, close - open);
			solve_subexpr(subexpr);
			expr.replace(open, close + 1, subexpr);
			token = false;
		}
	}
	priority_solve(expr);
	std::cout << "Expression -> " << expr << std::endl;
	return (false);
}

int		main(int ac, char **av)
{
	if (ac < 2)
	{
		std::cout << "No expr to evaluate, bye" << std::endl;
		return (0);
	}
	else if (ac > 2)
	{
		std::cout << "Too many arguments, cannot evaluate" << std::endl;
		return (1);
	}
	else if (!check(av[1]))
	{
		std::cout << "Invalid Expression, cannot evaluate" << std::endl;
		return (1);
	}
	if (!my_lexer(av[1]))
		return (1);
	return (0);
}
