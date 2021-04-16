/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Caster.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cromalde <cromalde@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 09:50:30 by cromalde          #+#    #+#             */
/*   Updated: 2021/04/16 11:38:52 by cromalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CASTER_HPP
# define CASTER_HPP

# include <iostream>
# include <sstream>
# include <iomanip>
# include <string>

class Caster
{
	public:
		Caster(std::string _str);
		~Caster(void);

	private:
		Caster(void);
		Caster(const Caster& src);
		Caster& operator=(const Caster& src);

		void	fromchar(std::string str);
		void	frominvalid(void);
		void	fromdouble(void);
		void	fromspecial(std::string str);
		bool	ival;
		double	dval;
		bool	fval;
};

#endif
