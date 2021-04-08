/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Logger.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cromalde <cromalde@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 19:23:35 by cromalde          #+#    #+#             */
/*   Updated: 2021/04/08 19:39:42 by cromalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	LOGGER_HPP
# define LOGGER_HPP

# include <iostream>
# include <fstream>
# include <string>

class Logger
{
private:
	std::string		_file;
	void			logToConsole(std::string const & str);
	void			logToFile(std::string const & str);
	std::string		makeLogEntry(std::string const & str);
public:
	void	log(std::string const & dest, std::string const & message);
	Logger(std::string	name);
	~Logger(void);
};

#endif
