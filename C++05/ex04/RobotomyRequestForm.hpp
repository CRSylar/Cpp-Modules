/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cromalde <cromalde@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 09:17:47 by cromalde          #+#    #+#             */
/*   Updated: 2021/04/15 11:05:10 by cromalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "Form.hpp"
class Form;

class RobotomyRequestForm : public Form
{
	public:
		RobotomyRequestForm(std::string _name);
		RobotomyRequestForm(const RobotomyRequestForm& src);
		~RobotomyRequestForm(void);

		RobotomyRequestForm&	operator=(const RobotomyRequestForm& src);

		void	execute(const Bureaucrat& _b) const;
	private:
		RobotomyRequestForm(void);

		std::string target;
		static std::string const name;
		static std::string const three;
};

#endif
