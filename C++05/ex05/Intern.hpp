/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cromalde <cromalde@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 11:30:27 by cromalde          #+#    #+#             */
/*   Updated: 2021/04/15 12:28:50 by cromalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include "Form.hpp"
class Form;
# include "ShrubberyCreationForm.hpp"
class ShrubberyCreationForm;
# include "RobotomyRequestForm.hpp"
class RobotomyRequestForm;
# include "PresidentialPardonForm.hpp"
class PresidentialPardonForm;

class Intern
{
	public:
		Intern(void);
		Intern(const Intern& src);
		~Intern(void);

		Intern&		operator=(const Intern& src);

		class FormNotKnown : public std::exception
		{
			virtual const char* what() const throw();
		};

		Form*	makeForm(std::string _form, std::string _target);
	private:
		Form*	(*funcptr[3])(std::string _target);

		static	Form*	createShrubbery(std::string _target);
		static	Form*	createRobotomy(std::string _target);
		static	Form*	createPardon(std::string _target);
};

#endif
