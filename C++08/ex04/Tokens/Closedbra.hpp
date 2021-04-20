/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Closedbra.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cromalde <cromalde@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 16:22:42 by cromalde          #+#    #+#             */
/*   Updated: 2021/04/20 16:32:13 by cromalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLOSEDBRA_HPP
# define CLOSEDBRA_HPP

# include "../Token.hpp"

class Closedbra : public Token
{
	public:
		Closedbra(void);
		Closedbra(const Closedbra& src);
		~Closedbra(void);

		Closedbra&	operator=(const Closedbra& src);

		int		getType(void) const;
		void	print(void) const;
	private:
};

#endif
