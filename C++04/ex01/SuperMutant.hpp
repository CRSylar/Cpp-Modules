/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cromalde <cromalde@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 16:33:42 by cromalde          #+#    #+#             */
/*   Updated: 2021/04/12 16:54:31 by cromalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP

# include "Enemy.hpp"

class SuperMutant : public Enemy
{
	public:
			SuperMutant(void);
			SuperMutant(const SuperMutant& src);
			~SuperMutant();

			SuperMutant&	operator=(const SuperMutant& src);

		void takeDamage(int _n);
	private:
};

#endif
