/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMiningLaser.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cromalde <cromalde@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 09:06:09 by cromalde          #+#    #+#             */
/*   Updated: 2021/04/14 09:09:48 by cromalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMININGLASER_HPP
# define IMININGLASER_HPP

# include <iostream>
# include <string>
class IMiningLaser;
# include "IAsteroid.hpp"

class IMiningLaser
{
	public:
		virtual	~IMiningLaser() {}
		virtual	void	mine(IAsteroid*) = 0;
};

#endif
