/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   OfficeBlock.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cromalde <cromalde@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 13:27:08 by cromalde          #+#    #+#             */
/*   Updated: 2021/04/15 14:41:25 by cromalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "OfficeBlock.hpp"

/* ************************************************************************** */

OfficeBlock::OfficeBlock(void) :
	noob(0), signer(0), executer(0)	{}

OfficeBlock::OfficeBlock(Intern* _int, Bureaucrat* _signer, Bureaucrat* _executer) :
	noob(_int), signer(_signer), executer(_executer)	{}

OfficeBlock::OfficeBlock(Intern& _int, Bureaucrat& _signer, Bureaucrat& _executer)
{
	noob = &_int;
	signer = &_signer;
	executer = &_executer;
}

OfficeBlock::OfficeBlock(const OfficeBlock& src)
{
	(void)src;
}

OfficeBlock::~OfficeBlock(void)
{}
/* ************************************************************************** */

OfficeBlock&	OfficeBlock::operator=(const OfficeBlock& src)
{
	(void)src;
	return *this;
}
/* ************************************************************************** */

void	OfficeBlock::setNewIntern(Intern* _int)
{
	if (noob)
		delete noob;
	noob = _int;
}

void	OfficeBlock::setNewSigner(Bureaucrat* _signer)
{
	if (signer)
		delete signer;
	signer = _signer;
}

void	OfficeBlock::setNewExecuter(Bureaucrat* _executer)
{
	if (executer)
		delete executer;
	executer = _executer;
}

/* ************************************************************************** */
void	OfficeBlock::doBureaucracy(std::string _form, std::string _target)
{
	if (noob == 0 || signer == 0 || executer == 0)
		throw OfficeBlock::EmptyOffice();
	Form* newForm;
	newForm = noob->makeForm(_form, _target);
	signer->signForm(*newForm);
	executer->executeForm(*newForm);
}

const char* OfficeBlock::EmptyOffice::what() const throw()
{
	return "In this Block there's any Bureaucrat, nothing can be done";
}

