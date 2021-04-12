/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cromalde <cromalde@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 13:09:33 by cromalde          #+#    #+#             */
/*   Updated: 2021/04/12 13:14:19 by cromalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	PEON_HPP
# define PEON_HPP

# include "Victim.hpp"

class Peon : public Victim
{
	public:
			Peon(void);
			Peon(std::string _name);
			Peon(const Peon& src);
			~Peon(void);

			Peon&	operator=(const Peon& src);

			void	Peon::polymorph(void) const;
	private:
};

#endif
