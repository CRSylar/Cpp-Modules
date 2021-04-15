/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CentralBureaucracy.hpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cromalde <cromalde@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 14:46:36 by cromalde          #+#    #+#             */
/*   Updated: 2021/04/15 17:04:37 by cromalde         ###   ########.fr       */
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
		void	queueUp(const std::string& _target);
		void	doBureacracy(void);
	private:
		CentralBureaucracy(const CentralBureaucracy& src);

		CentralBureaucracy& operator=(const CentralBureaucracy& src);
		OfficeBlock	ob[20];
		Intern		intern[20];
		std::string	*queue;
		int			employers;
		int			_Q;

};

CentralBureaucracy&	operator<<(CentralBureaucracy& _cb, Bureaucrat& _empl);

#endif
