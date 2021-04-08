/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cromalde <cromalde@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 15:47:53 by cromalde          #+#    #+#             */
/*   Updated: 2021/04/08 15:50:26 by cromalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class HumanB
{
private:
	std::string	_name;
	Weapon		*_wp;
public:
	void	attack(void);
	void	setWeapon(Weapon &wp);
	HumanB(std::string name);
	~HumanB(void);
};

#endif
