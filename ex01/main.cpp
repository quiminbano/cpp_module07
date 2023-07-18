/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: corellan <corellan@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 09:55:40 by corellan          #+#    #+#             */
/*   Updated: 2023/07/18 09:55:42 by corellan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int	main(void)
{
	int			test[5] = {1, 2, 3, 4, 5};
	char		test2[8] = {'a', 'A', 'c', 'f', 'z', 'Z', 'g', '\0'};
	std::string	test3[3] = {"hello", "awesome", "world"};
	float		test4[2] = {3.14, 6.28};
	bool		test5[2] = {false, false};
	
	iter<int>(test, 5, &function);
	std::cout << std::endl;
	iter<char>(test2, 7, &function);
	std::cout << std::endl;
	iter<float>(test4, 2, &function);
	std::cout << std::endl;
	iter<std::string>(test3, 3, &function);
	std::cout << std::endl;
	iter<bool>(test5, 2, &function);
	return (0);
}