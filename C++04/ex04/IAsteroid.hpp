/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IAsteroid.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cromalde <cromalde@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 09:09:09 by cromalde          #+#    #+#             */
/*   Updated: 2021/04/14 09:29:43 by cromalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IASTEROID_HPP
# define IASTEROID_HPP

# include <iostream>
# include <string>
# include "DeepCoreMiner.hpp"
# include "StripMiner.hpp"
class IAsteroid;

class IAsteroid
{
	public:
		virtual	~IAsteroid() {}
		virtual	std::string beMined(DeepCoreMiner *) const = 0;
		virtual	std::string beMined(StripMiner *) const = 0;
		virtual	std::string	getName(void) const = 0;
};

#endif
