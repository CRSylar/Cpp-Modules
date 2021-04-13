/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cromalde <cromalde@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 15:03:06 by cromalde          #+#    #+#             */
/*   Updated: 2021/04/13 17:32:55 by cromalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	AMATERIA_HPP
# define AMATERIA_HPP

# include <string>
# include <iostream>
class AMateria;
# include "ICharacter.hpp"

class AMateria
{
	public:
			AMateria(std::string const & _type);
			virtual	~AMateria(void);

			std::string	const & getType(void) const;
			unsigned int getXP(void) const;

			virtual	AMateria*	clone() const = 0;
			virtual	void	use(ICharacter& _target);
	protected:
			std::string		type;
			unsigned int	xp;
	private:
			AMateria(void);
};

#endif
