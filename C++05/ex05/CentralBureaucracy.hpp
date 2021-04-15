/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CentralBureaucracy.hpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cromalde <cromalde@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 14:46:36 by cromalde          #+#    #+#             */
/*   Updated: 2021/04/15 15:30:09 by cromalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CENTRALBUREAUCRACY_HPP
# define CENTRALBUREAUCRACY_HPP

# include "OfficeBlock.hpp"

class CentralBureaucracy
{
	public:
		CentralBureaucracy(void);
		~CentralBureaucracy(void);

		class CentralBureaucracyException : public std::exception
		{
			virtual const char* what() const throw();
		};

		void	feed(Bureaucrat& _brct);
		void	doBureacracy(void);
	private:
		CentralBureaucracy(const CentralBureaucracy& src);

		CentralBureaucracy& operator=(const CentralBureaucracy& src);
		OfficeBlock	ob[20];
		Intern*		intern[20];
		int			employers;

};

CentralBureaucracy&	operator<<(CentralBureaucracy& _cb, const Bureaucrat& _empl);


CentralBureaucracy::CentralBureaucracy(void) :
	employers(0)
{
	for (int i = 0; i < 20; i++)
	{
		srand(time(0));
		ob[i].setNewIntern(intern[i]);
	}
}

CentralBureaucracy::CentralBureaucracy(const CentralBureaucracy& src)
{
	(void)src;
}

CentralBureaucracy::~CentralBureaucracy(void)
{}

CentralBureaucracy&		CentralBureaucracy::operator=(const CentralBureaucracy& src)
{
	(void)src;
	return *this;
}

CentralBureaucracy&	operator<<(CentralBureaucracy& _cb, Bureaucrat& _empl)
{
	_cb.feed(_empl);
	return _cb;
}

void	CentralBureaucracy::feed(Bureaucrat& _brct)
{
	int	fulloffice;

	if (employers >= 40)
		throw CentralBureaucracy::CentralBureaucracyException();
	fulloffice = employers / 2;
	if (employers % 2 == 0)
		ob[fulloffice].setNewSigner(&_brct);
	else
		ob[fulloffice].setNewExecuter(&_brct);
	employers++;
}

void	CentralBureaucracy::doBureacracy(void)
{
	int fulloffice = employers / 2;

	for (int i = )
}

const char* CentralBureaucracy::CentralBureaucracyException::what() const throw()
{
	return "This Central Office is already full, try another one or ask to your uncle, he kwnow the right people...";
}


#endif
