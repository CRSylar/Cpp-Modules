/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cromalde <cromalde@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 17:27:26 by cromalde          #+#    #+#             */
/*   Updated: 2021/04/11 17:40:14 by cromalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

# include "ClapTrap.hpp"

class NinjaTrap : public ClapTrap
{
	public:
			NinjaTrap(void);
			NinjaTrap(std::string name);
			NinjaTrap(const NinjaTrap& src);
			~NinjaTrap(void);

			NinjaTrap& operator=(const NinjaTrap& src);

			void	rangedAttack(std::string const & target);
			void	meleeAttack(std::string const & target);
	private:
			void	set_ep(int ep);
			void	set_mxep(void);
			void	set_dmg(int mad, int rad, int adr);
};

#endif
