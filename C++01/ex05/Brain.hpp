/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cromalde <cromalde@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 14:24:33 by cromalde          #+#    #+#             */
/*   Updated: 2021/04/08 15:00:41 by cromalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef	BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <sstream>
# include <string>

class Brain
{
private:
	int	_qi = rand();
	int	_size = _qi * rand();

public:
	std::string		identify(void) const;
	Brain(void);
	~Brain(void);
};

#endif
