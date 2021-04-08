/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cromalde <cromalde@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 18:53:47 by cromalde          #+#    #+#             */
/*   Updated: 2021/04/08 18:57:39 by cromalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
# define HUMAN_HPP

# include <iostream>
# include <string>

class Human
{
private:
	void	meleeAttack(std::string const & target);
	void	rangedAttack(std::string const & target);
	void	intimidatingShout(std::string const & target);
public:
	void	action(std::string const & action_name, std::string const & target);
};

#endif
