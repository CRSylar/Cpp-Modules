/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   KoalaSteroid.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cromalde <cromalde@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 09:45:58 by cromalde          #+#    #+#             */
/*   Updated: 2021/04/14 09:58:10 by cromalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KoalaSteroid_HPP
# define KoalaSteroid_HPP

# include "IAsteroid.hpp"

class KoalaSteroid : public IAsteroid
{
	public:
		KoalaSteroid(void);
		KoalaSteroid(std::string _name);
		KoalaSteroid(const KoalaSteroid& src);
		~KoalaSteroid(void);

		KoalaSteroid&	operator=(const KoalaSteroid& src);

		std::string		beMined(DeepCoreMiner*) const;
		std::string		beMined(StripMiner*) const;
		std::string		getName(void) const;
	private:
		std::string	name;
};

#endif
