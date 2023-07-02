/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: corellan <corellan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 19:21:11 by corellan          #+#    #+#             */
/*   Updated: 2023/07/02 10:40:12 by corellan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <cstdlib>
# include <iostream>

template<typename T>
void	function(T member)
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
void	iter(T	*array, size_t length, void	(*f)(T))
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