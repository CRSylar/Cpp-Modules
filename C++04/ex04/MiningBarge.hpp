/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MiningBarge.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cromalde <cromalde@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 09:15:47 by cromalde          #+#    #+#             */
/*   Updated: 2021/04/14 10:36:06 by cromalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MININGBARGE_HPP
# define MININGBARGE_HPP

#include "IAsteroid.hpp"
#include "IMiningLaser.hpp"

class MiningBarge
{
	public:
		MiningBarge(void);
		MiningBarge(const MiningBarge& src);
		~MiningBarge(void);

		MiningBarge&	operator=(const MiningBarge& src);
		void equip(IMiningLaser *);
		void mine(IAsteroid*) const;

	private:
		int				equipped;
		IMiningLaser	*lasers[4];
};

#endif
