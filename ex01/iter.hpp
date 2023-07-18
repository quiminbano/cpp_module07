/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: corellan <corellan@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 09:55:31 by corellan          #+#    #+#             */
/*   Updated: 2023/07/18 13:58:01 by corellan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <cstdlib>
# include <iostream>

template<typename T>
void	function(T const &member)
{
	const std::type_info	&type = typeid(member);
	std::string				typ;
	bool					boolean;

	boolean = false;
	typ = type.name();
	if (!typ.compare("NSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE"))
		std::cout << "Data: " << member << ", Type of data: " << "std::string" << "." << std::endl;
	else
		std::cout << "Data: " << member << ", Type of data: " << typ << "." << std::endl;
}

template<typename T>
void	iter(T	*array, size_t length, void	(*f)(T const &))
{
	size_t	i;

	i = 0;
	while (i < length)
	{
		(*f)(array[i]);
		i++;
	}
}

#endif