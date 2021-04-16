/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Caster.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cromalde <cromalde@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 09:50:30 by cromalde          #+#    #+#             */
/*   Updated: 2021/04/16 10:08:57 by cromalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifdef CASTER_HPP
# define CASTER_HPP

# include <iostream>
# include <sstream>
# include <iomanip>
# include <string>

class Caster
{
	public:
		Caster(std::string _str);
		Caster(const Caster& src);
		~Caster(void);

		Caster& operator=(const Caster& src);


	private:
		Caster(void);

		char	c;
		int		i;
		float	f;
		double	d;
};

Caster::Caster(void)	{}

Caster::Caster(std::string _str)
{

}

Caster::Caster(const Caster& src)
{

}

Caster::~Caster(void)	{}

#endif
