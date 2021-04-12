/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cromalde <cromalde@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 12:44:02 by cromalde          #+#    #+#             */
/*   Updated: 2021/04/12 15:23:11 by cromalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	VICTIM_HPP
# define VICTIM_HPP

# include <iostream>
# include <string>

class Victim
{
	public:
			Victim(void);
			Victim(std::string _name);
			Victim(const Victim& src);
			~Victim(void);

			Victim&		operator=(const Victim& src);

			std::string		get_name(void)	const;
			virtual void	bepolymorphed(void) const;
	private:
			std::string	name;
};

std::ostream&	operator<<(std::ostream& stream, const Victim& src);

#endif
