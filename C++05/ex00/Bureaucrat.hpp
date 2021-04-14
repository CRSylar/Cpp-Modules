/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cromalde <cromalde@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 11:49:40 by cromalde          #+#    #+#             */
/*   Updated: 2021/04/14 13:37:22 by cromalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>

class Bureaucrat
{
	public:
		Bureaucrat(std::string _name, int _grade);
		Bureaucrat(const Bureaucrat& src);
		~Bureaucrat(void);

		class GradeTooHighException : public std::exception
		{
			virtual const char* what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			virtual const char* what() const throw();
		};

		Bureaucrat&		operator=(const Bureaucrat& src);

		std::string	getName(void) const;
		int			getGrade(void) const;
		void		incrementGrade(void);
		void		decrementGrade(void);
	private:
		Bureaucrat(void);

		std::string const	name;
		int					grade;
};
		std::ostream&	operator<<(std::ostream& _stream, const Bureaucrat& _bureau);

#endif
