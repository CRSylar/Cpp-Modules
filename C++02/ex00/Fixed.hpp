/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cromalde <cromalde@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 11:57:17 by cromalde          #+#    #+#             */
/*   Updated: 2021/04/09 13:36:33 by cromalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
	public:
		Fixed(void);
		Fixed(int num);
		Fixed(const Fixed& src);
		~Fixed(void);

		Fixed& operator=(const Fixed& src);
		int		getRawBits(void) const ;
		void	setRawBits(int const raw);

	private:
		int					num;
		static const int	frac = 8;
};

#endif
