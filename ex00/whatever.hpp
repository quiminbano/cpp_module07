/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: corellan <corellan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 18:19:46 by corellan          #+#    #+#             */
/*   Updated: 2023/07/01 19:13:53 by corellan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <string>
/* template <typename wildcard(T)> must be declared everytime that a new template
function is declared.*/

template<typename T>
void	swap(T &x, T &y)
{
	T	temp;

	temp = x;
	x = y;
	y = temp;
}

template<typename T>
const T		&max(T const &x, T const &y)
{
	if (x > y)
		return (x);
	return (y);
}

template<typename T>
const T		&min(T const &x, T const &y)
{
	if (x < y)
		return (x);
	return (y);
}

#endif