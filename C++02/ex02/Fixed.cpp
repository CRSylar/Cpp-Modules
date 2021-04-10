/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cromalde <cromalde@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 11:58:21 by cromalde          #+#    #+#             */
/*   Updated: 2021/04/10 10:03:01 by cromalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

	// Constructors & Destructors
Fixed::Fixed(void) : num(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int const n)
{
	std::cout << "Int constructor called" << std::endl;
	num = n << frac;
}

Fixed::Fixed(const float n)
{
	std::cout << "Float constructor called" << std::endl;
	num = roundf(n * (1 << frac));
}

Fixed::Fixed(const Fixed& src)
{
	std::cout << "Copy constructor called" << std::endl;
	this->operator=(src);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}
/* ==========================================================*/

	// Member func
int		Fixed::getRawBits(void) const
{
	return (num);
}

void	Fixed::setRawBits(int const raw)
{
	num = raw;
}

int		Fixed::toInt(void) const
{
	return(num >> frac);
}

float	Fixed::toFloat(void) const
{
	return ((float)num / (1 << frac));
}
/*==========================================================*/

	// Op Ovrload
Fixed&	Fixed::operator=(const Fixed& src)
{
	std::cout << "Assignation operator called" << std::endl;
	num = src.getRawBits();
	return *this ;
}
/*==========================================================*/
	// Comparison Operators
bool	Fixed::operator>(const Fixed& right)
{
	return (num > right.getRawBits());
}

bool	Fixed::operator<(const Fixed& right)
{
	return (num < right.getRawBits());
}

bool	Fixed::operator>=(const Fixed& right)
{
	return (num >= right.getRawBits());
}

bool	Fixed::operator<=(const Fixed& right)
{
	return (num <= right.getRawBits());
}

bool	Fixed::operator==(const Fixed& right)
{
	return (num == right.getRawBits());
}

bool	Fixed::operator!=(const Fixed& right)
{
	return (num != right.getRawBits());
}
/*==========================================================*/
	//Arithmetic operators
Fixed	Fixed::operator+(const Fixed& right)
{
	Fixed res;

	res.setRawBits(num + right.getRawBits());
	return res;
}

Fixed	Fixed::operator-(const Fixed& right)
{
	Fixed res;

	res.setRawBits(num - right.getRawBits());
	return res;
}

Fixed	Fixed::operator*(const Fixed& right)
{
	Fixed res;

	res.setRawBits((num * right.getRawBits() / (1 << frac)));
	return res;
}

Fixed	Fixed::operator/(const Fixed& right)
{
	Fixed res;

	res.setRawBits((num / right.getRawBits() * ( 1 << frac)));
	return res;
}
/*==========================================================*/
	//	Increment operators
Fixed&	Fixed::operator++(void)
{
	this->num++;
	return *this;
}

Fixed&	Fixed::operator--(void)
{
	this->num--;
	return *this;
}

Fixed	Fixed::operator++(int n)
{
	(void)n;
	Fixed	copy(*this);
	this->num++;
	return copy;
}

Fixed	Fixed::operator--(int n)
{
	(void)n;
	Fixed	copy(*this);
	this->num--;
	return copy;
}
/*==========================================================*/
	//Non Member Function
Fixed&		min(Fixed& x, Fixed& y)
{
	if (x < y)
		return x;
	else
		return y;
}

Fixed&		max(Fixed& x, Fixed& y)
{
	if (x > y)
		return x;
	else
		return y;

}

const Fixed&	Fixed::min(const Fixed& x, const Fixed& y)
{
	if (x.getRawBits() < y.getRawBits())
		return x;
	else
		return y;
}

const Fixed&	Fixed::max(const Fixed& x, const Fixed& y)
{
	if (x.getRawBits() > y.getRawBits())
		return x;
	else
		return y;
}

std::ostream&	operator<<(std::ostream& stream, const Fixed& src)
{
	std::cout << src.toFloat();
	return stream;
}
