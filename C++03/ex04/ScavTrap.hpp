/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cromalde <cromalde@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 12:24:37 by cromalde          #+#    #+#             */
/*   Updated: 2021/04/12 11:27:08 by cromalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : public virtual ClapTrap
{
	public:
			ScavTrap(void);
			ScavTrap(std::string name);
			ScavTrap(const ScavTrap& src);
			~ScavTrap(void);

			ScavTrap& operator=(const ScavTrap& src);

			void	rangedAttack(std::string const & target);
			void	meleeAttack(std::string const & target);
			void	challengeNewcomer(std::string const & target);
	protected:
			void	set_ep(void);
			void	set_mxep(void);
			void	set_dmg(void);
	private:
};

#endif
