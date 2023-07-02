/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_2.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: corellan <corellan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 17:24:25 by corellan          #+#    #+#             */
/*   Updated: 2023/07/02 17:41:39 by corellan         ###   ########.fr       */
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