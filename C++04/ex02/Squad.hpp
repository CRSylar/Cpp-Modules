/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cromalde <cromalde@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 13:00:39 by cromalde          #+#    #+#             */
/*   Updated: 2021/04/13 14:56:18 by cromalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
# define SQUAD_HPP

# include <string>
# include "ISquad.hpp"
class Squad : public ISquad
{
	public:
			Squad(void);
			Squad(std::string _name);
			Squad(const Squad& src);
			~Squad (void);

			Squad& operator=(const Squad& src);

			int				getCount(void)	const;
			ISpaceMarine*	getUnit(int _n) const;
			int				push(ISpaceMarine* _marine);
	private:
			int		count;
			ISpaceMarine	**units;
			std::string		name;
};

#endif
