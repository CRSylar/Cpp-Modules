/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DeepCoreMiner.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cromalde <cromalde@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 09:18:56 by cromalde          #+#    #+#             */
/*   Updated: 2021/04/14 10:56:08 by cromalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEEPCOREMINER_HPP
# define DEEPCOREMINER_HPP

#include "IMiningLaser.hpp"

class DeepCoreMiner : public IMiningLaser
{
	public:
		DeepCoreMiner(void);
		DeepCoreMiner(const DeepCoreMiner& src);
		~DeepCoreMiner(void);

		DeepCoreMiner&	operator=(const DeepCoreMiner& src);

		void	mine(IAsteroid *_ast);
	private:

};

#endif
