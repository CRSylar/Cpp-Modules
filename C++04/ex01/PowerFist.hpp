/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cromalde <cromalde@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 16:29:37 by cromalde          #+#    #+#             */
/*   Updated: 2021/04/12 16:31:05 by cromalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERFIST_HPP
# define POWERFIST_HPP

# include "AWeapon.hpp"

class PowerFist : public AWeapon
{
	public:
			PowerFist(void);
			PowerFist(const PowerFist& src);
			~PowerFist();

			PowerFist&	operator=(const PowerFist& src);

			void	attack() const;
	private:
};

#endif
