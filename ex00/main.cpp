/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: corellan <corellan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 18:37:18 by corellan          #+#    #+#             */
/*   Updated: 2023/07/01 19:19:50 by corellan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"
#include <iostream>

int	main(void)
{
	int			a;
	int			b;
	char		c;
	char		d;
	float		e;
	float		f;

	a = 1;
	b = 42;
	c = 'a';
	d = 'z';
	e = 3.14;
	f = 6.28;

	std::cout << "The values of the integers a and b are " << a << " and " << b << " respectively." << std::endl;
	::swap<int>(a, b);
	std::cout << "The values of the integers a and b after swaping them are " << a << " and " << b << " respectively." << std::endl << std::endl;

	std::cout << "The characters c and d are " << c << " and " << d << " respectively." << std::endl;
	::swap<char>(c, d);
	std::cout << "The characters c and d after swaping them are " << c << " and " << d << " respectively." << std::endl << std::endl;

	std::cout << "The values of the floating-point nunbers e and f are " << e << " and " << f << " respectively." << std::endl;
	::swap<float>(e, f);
	std::cout << "The values of the floating-point numbers e and f after swaping them are " << e << " and " << f << " respectively." << std::endl << std::endl;

	std::cout << "The max value between the integers a and b is " << ::max<int>(a, b) << std::endl;
	std::cout << "The min value between the integers a and b is " << ::min<int>(a, b) << std::endl << std::endl;

	std::cout << "The max value between the characters c and d is " << ::max<char>(c, d) << std::endl;
	std::cout << "The min value between the characters c and d is " << ::min<char>(c, d) << std::endl << std::endl;

	std::cout << "The max value between the floating-point numbers e and f is " << ::max<float>(e, f) << std::endl;
	std::cout << "The min value between the floating-point numbers e and f is " << ::min<float>(e, f) << std::endl << std::endl;

	return (0);
}