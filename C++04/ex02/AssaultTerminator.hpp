/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cromalde <cromalde@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 12:31:12 by cromalde          #+#    #+#             */
/*   Updated: 2021/04/13 14:55:18 by cromalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	ASSAULTTERMINATOR_HPP
# define ASSAULTTERMINATOR_HPP

# include "ISpaceMarine.hpp"
# include <string>
# include <iostream>

class AssaultTerminator : public ISpaceMarine
{
	public:
			AssaultTerminator(void);
			AssaultTerminator(std::string _name);
			AssaultTerminator(const AssaultTerminator& src);
			~AssaultTerminator(void);

			AssaultTerminator&	operator=(const AssaultTerminator& src);

			AssaultTerminator*	clone(void) const;
			void	battleCry(void) const;
			void	rangedAttack(void) const;
			void	meleeAttack(void) const;
	private:
			std::string name;
};

#endif
