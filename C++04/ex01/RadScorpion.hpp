/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cromalde <cromalde@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 16:33:42 by cromalde          #+#    #+#             */
/*   Updated: 2021/04/12 16:54:31 by cromalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RADSCORPION_HPP
# define RADSCORPION_HPP

# include "Enemy.hpp"

class RadScorpion : public Enemy
{
	public:
			RadScorpion(void);
			RadScorpion(const RadScorpion& src);
			~RadScorpion();

			RadScorpion&	operator=(const RadScorpion& src);

			void takeDamage(int _n);
	private:
};

#endif
