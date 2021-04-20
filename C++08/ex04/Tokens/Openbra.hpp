/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Openbra.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cromalde <cromalde@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 16:22:42 by cromalde          #+#    #+#             */
/*   Updated: 2021/04/20 16:32:13 by cromalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OPENBRA_HPP
# define OPENBRA_HPP

# include "../Token.hpp"

class Openbra : public Token
{
	public:
		Openbra(void);
		Openbra(const Openbra& src);
		~Openbra(void);

		Openbra&	operator=(const Openbra& src);

		int		getValue(void) const;
		int		getType(void) const;
		void	print(void) const;
	private:
};

#endif
