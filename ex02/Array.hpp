/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: corellan <corellan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 13:41:31 by corellan          #+#    #+#             */
/*   Updated: 2023/07/02 15:25:46 by corellan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <exception>

template<typename T>
class Array
{
public:

	class ErrorHappening : public std::exception
	{
		virtual const char	*what(void) const throw();
	};
	Array(void);
	Array(unsigned int n);
	Array(Array const &rhs);
	~Array(void);

	Array	&operator=(Array const &rhs);
	T		&operator[](unsigned int n);

	unsigned int	size(void) const;

private:

	unsigned int	_size;
	T				*_array;
};

# include "Array.tpp"

#endif