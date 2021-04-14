/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   StripMiner.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cromalde <cromalde@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 09:18:56 by cromalde          #+#    #+#             */
/*   Updated: 2021/04/14 09:31:51 by cromalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRIPMINER_HPP
# define STRIPMINER_HPP

#include "IMiningLaser.hpp"

class StripMiner : public IMiningLaser
{
	public:
		StripMiner(void);
		StripMiner(const StripMiner& src);
		~StripMiner(void);

		StripMiner&	operator=(const StripMiner& src);

		void	mine(IAsteroid *_ast);
	private:

};

#endif
