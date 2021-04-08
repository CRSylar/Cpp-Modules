/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cromalde <cromalde@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 15:32:10 by cromalde          #+#    #+#             */
/*   Updated: 2021/04/08 15:37:03 by cromalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

class HumanA
{
private:
	std::string	_name;
	Weapon		&_wp;
public:
	void	attack(void);
	void	setWeapon(Weapon wp);
	HumanA(std::string name, Weapon &wp);
	~HumanA(void);
};

#endif
