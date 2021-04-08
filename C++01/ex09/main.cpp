/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cromalde <cromalde@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 20:07:37 by cromalde          #+#    #+#             */
/*   Updated: 2021/04/08 20:17:58 by cromalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Logger.hpp"
#include <unistd.h>

int		main(void)
{
	Logger	l("file.log");

	l.log("console", "Starting...");
	sleep(1);
	l.log("console", "Running...");
	sleep(1);

	l.log("file", "Initializing file...");
	sleep(1);
	l.log("file", "Writing in a file");
	sleep(1);
	l.log("file", "last log on file");
	l.log("console", "Exit");
	return (0);
}
