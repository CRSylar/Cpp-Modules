/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AsteroKreog.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cromalde <cromalde@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 09:45:58 by cromalde          #+#    #+#             */
/*   Updated: 2021/04/14 09:58:10 by cromalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASTEROKREOG_HPP
# define ASTEROKREOG_HPP

# include "IAsteroid.hpp"

class AsteroKreog : public IAsteroid
{
	public:
		AsteroKreog(void);
		AsteroKreog(std::string _name);
		AsteroKreog(const AsteroKreog& src);
		~AsteroKreog(void);

		AsteroKreog&	operator=(const AsteroKreog& src);

		std::string		beMined(DeepCoreMiner*) const;
		std::string		beMined(StripMiner*) const;
		std::string		getName(void) const;
	private:
		std::string	name;
};

#endif
