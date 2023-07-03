/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: corellan <corellan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 13:46:29 by corellan          #+#    #+#             */
/*   Updated: 2023/07/03 12:54:01 by corellan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_TPP
# define ARRAY_TPP

template<typename T>
Array<T>::Array(void)
{
	std::cout << "Default constructor for Array class called" << std::endl;
	this->_size = 0;
	this->_array = NULL;
	return ;
}

template<typename T>
Array<T>::Array(unsigned int n)
{
	std::cout << "Constructor called for Array class to create an array of " << n << " members" << std::endl;
	this->_size = n;
	if (n)
		this->_array = new T[n];
	else
		this->_array = NULL;
	return ;
}

template<typename T>
Array<T>::Array(Array<T> const &rhs)
{
	std::cout << "Copy constructor for Array class called" << std::endl;
	this->_array = NULL;
	*this = rhs;
	return ;
}

template<typename T>
Array<T>::~Array(void)
{
	std::cout << "Default destructor for Array class called" << std::endl;
	if (this->_array != NULL)
		delete [] this->_array;
	return ;
}

template<typename T>
unsigned int	Array<T>::size(void) const
{
	return(this->_size);
}

template<typename T>
T	&Array<T>::operator[](unsigned int n)
{
	if (n >= this->_size)
		throw (Array<T>::ErrorHappening());
	return (this->_array[n]);
}

template<typename T>
Array<T>	&Array<T>::operator=(Array<T> const &rhs)
{
	unsigned int	iter;
	unsigned int	size_rhs;
	Array<T>		*temp;

	iter = 0;
	size_rhs = rhs.size();
	temp = const_cast<Array<T> *>(&rhs);
	std::cout << "Copy assigment operator for Array class called" << std::endl;
	if (this != temp)
	{
		if (this->_array != NULL)
			delete [] this->_array;
		if (size_rhs)
		{
			this->_array = new T[size_rhs];
			while (iter < size_rhs)
			{
				this->_array[iter] = (*temp)[iter];
				iter++;
			}
		}
		else
			this->_array = NULL;
		this->_size = size_rhs;
	}
	return (*this);
}

template<typename T>
const char	*Array<T>::ErrorHappening::what(void) const throw()
{
	return ("Wait!! Are you trying to access to a non allocated space? Forget that idea dude!!");
}

#endif