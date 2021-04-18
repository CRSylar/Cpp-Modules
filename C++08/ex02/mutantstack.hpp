/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cromalde <cromalde@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/18 14:49:56 by cromalde          #+#    #+#             */
/*   Updated: 2021/04/18 15:01:03 by cromalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <stack>

template <typename T>
class mutantstack : public std::stack
{
	public:
		mutantstack(void);
		~mutantstack(void);
	private:
		/* data */
};

template <typename T>
mutantstack<T>::mutantstack(void)
{}

template <typename T>
mutantstack<T>::~mutantstack(void)
{}



#endif
