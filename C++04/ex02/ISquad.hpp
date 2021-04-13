/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ISquad.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cromalde <cromalde@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 12:19:18 by cromalde          #+#    #+#             */
/*   Updated: 2021/04/13 12:23:26 by cromalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	ISQUAD_HPP
# define	ISQUAD_HPP

# include "ISpaceMarine.hpp"

class ISquad
{
	public:
			virtual	~ISquad() {}
			virtual	int	getCount() const = 0;
			virtual	ISpaceMarine *	getUnit(int) const = 0;
			virtual	int	push(ISpaceMarine *) = 0;
};

#endif
