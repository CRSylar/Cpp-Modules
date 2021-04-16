/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Identifyer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cromalde <cromalde@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 13:21:16 by cromalde          #+#    #+#             */
/*   Updated: 2021/04/16 13:28:03 by cromalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IDENTIFYER_HPP
# define IDENTIFYER_HPP

# include <iostream>
# include "Base.hpp"
# include "A.hpp"
# include "B.hpp"
# include "C.hpp"

Base* generate(void);

void	identify_from_pointer(Base* p);
void	identify_from_reference(Base& p);

#endif
