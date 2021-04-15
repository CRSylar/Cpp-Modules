/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   OfficeBlock.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cromalde <cromalde@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 12:56:59 by cromalde          #+#    #+#             */
/*   Updated: 2021/04/15 13:27:06 by cromalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OFFICEBLOCK_HPP
# define OFFICEBLOCK_HPP

# include "Intern.hpp"
# include "Bureaucrat.hpp"

class OfficeBlock
{
	public:
		OfficeBlock(void);
		OfficeBlock(Intern* _int, Bureaucrat* _signer, Bureaucrat* _executer);
		OfficeBlock(Intern& _int, Bureaucrat& _signer, Bureaucrat& _executer);
		~OfficeBlock(void);

		class EmptyOffice : public std::exception
		{
			virtual const char* what() const throw();
		};

		void	doBureaucracy(std::string _form, std::string _target);

		void	setNewIntern(Intern* _int);
		void	setNewSigner(Bureaucrat* _signer);
		void	setNewExecuter(Bureaucrat* _executer);
	private:
		OfficeBlock(const OfficeBlock& src);

		OfficeBlock&	operator=(const OfficeBlock& src);
		Intern*			noob;
		Bureaucrat*		signer;
		Bureaucrat*		executer;
};

#endif
