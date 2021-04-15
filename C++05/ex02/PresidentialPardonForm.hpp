/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cromalde <cromalde@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 09:17:47 by cromalde          #+#    #+#             */
/*   Updated: 2021/04/15 09:43:15 by cromalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "Form.hpp"
class Form;

class PresidentialPardonForm : public Form
{
	public:
		PresidentialPardonForm(std::string _name);
		PresidentialPardonForm(const PresidentialPardonForm& src);
		~PresidentialPardonForm(void);

		PresidentialPardonForm&	operator=(const PresidentialPardonForm& src);

		void	execute(const Bureaucrat& _b) const;
	private:
		PresidentialPardonForm(void);

		std::string target;
		static	std::string const name;
		static std::string const three;
};

#endif
