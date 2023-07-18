/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_2.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: corellan <corellan@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 09:56:20 by corellan          #+#    #+#             */
/*   Updated: 2023/07/18 09:56:22 by corellan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

#define MAX_ITER 10

int	main(void)
{
	Array<std::string>	strings(MAX_ITER);
	int					i;

	for (i = 0; i <= MAX_ITER; i++)
	{
		try
		{
			strings[i] = "Hello world";
			std::cout << "strings[" << i << "] now has a value " << strings[i] << ". So, the assignation was successful" << std::endl;
		}
		catch (std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	return (0);
}