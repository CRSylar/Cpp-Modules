/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fire.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cromalde <cromalde@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 15:43:41 by cromalde          #+#    #+#             */
/*   Updated: 2021/04/14 08:56:55 by cromalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIRE_HPP
# define FIRE_HPP

# include "AMateria.hpp"

class Fire : public AMateria
{
	public:
		Fire(void);
		Fire(const Fire& src);
		~Fire(void);

		Fire&	operator=(const Fire& src);

		AMateria* clone(void) const;
		void	use(ICharacter& _target);
};

#endif
