/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MiningBarge.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cromalde <cromalde@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 09:15:47 by cromalde          #+#    #+#             */
/*   Updated: 2021/04/14 09:18:09 by cromalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MININGBARGE_HPP
# define MININGBARGE_HPP

#include "IAsteroid.hpp"
#include "IMiningLaser.hpp"

class MiningBarge
{
	public:
		MiningBarge(/* args */);
		~MiningBarge();

		void equip(IMiningLaser *);
		void mine(IAsteroid*) const;
	private:
		/* data */
};

MiningBarge::MiningBarge(/* args */)
{
}

MiningBarge::~MiningBarge()
{
}


#endif
