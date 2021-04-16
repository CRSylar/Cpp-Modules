/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialization.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cromalde <cromalde@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 12:14:31 by cromalde          #+#    #+#             */
/*   Updated: 2021/04/16 12:20:56 by cromalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZATION_HPP
# define SERIALIZATION_HPP

# include <iostream>
# include <string>

struct Data
{
	std::string str1;
	int			num;
	std::string	str2;
};

void * serialize(void);
Data * deserialize(void * raw);

#endif
