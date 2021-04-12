/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cromalde <cromalde@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 10:49:46 by cromalde          #+#    #+#             */
/*   Updated: 2021/04/12 11:16:26 by cromalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP

# include "ClapTrap.hpp"
# include "NinjaTrap.hpp"
# include "FragTrap.hpp"

class SuperTrap : public FragTrap, public NinjaTrap
{
	public:
			SuperTrap(void);
			SuperTrap(std::string name);
			SuperTrap(const SuperTrap& src);
			~SuperTrap(void);

			SuperTrap& operator=(const SuperTrap& src);

			void	rangedAttack(std::string const & target);
			void	meleeAttack(std::string const & target);
	private:
};

#endif
