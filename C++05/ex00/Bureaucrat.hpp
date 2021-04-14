/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cromalde <cromalde@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 11:49:40 by cromalde          #+#    #+#             */
/*   Updated: 2021/04/14 11:52:14 by cromalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>

class Bureaucrat
{
	public:
		Bureaucrat(void);
		~Bureaucrat();
	private:
		std::string const	name;
		int					grade;
};

Bureaucrat::Bureaucrat(void)
{
}

Bureaucrat::~Bureaucrat()
{
}


#endif
