/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntalmon <ntalmon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 12:55:38 by ntalmon           #+#    #+#             */
/*   Updated: 2025/02/03 14:23:14 by ntalmon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template <typename T>
class Array
{
	private:
		T *_array;
		unsigned int _size;
	public:
		// Default constructor
		Array(void) : _size(0)
		{
			std::cout << "Default constructor called" << std::endl;
			_array = new T[0];
		}
		// Constructor with size
		Array(unsigned int n) : _size(n)
		{
			std::cout << "Constructor with size called" << std::endl;
			_array = new T[n];
		}
		// Copy constructor
		Array(const Array &src) : _size(src._size)
		{
			std::cout << "Copy constructor called" << std::endl;
			_array = new T[_size];
			for (unsigned int i = 0; i < _size; i++)
				_array[i] = src._array[i];
		}
		// Assignment operator
		Array &operator=(const Array &src)
		{
			std::cout << "Assignment operator called" << std::endl;
			if (this == &src)
				return *this;
			delete[] _array;
			_size = src._size;
			_array = new T[_size];
			for (unsigned int i = 0; i < _size; i++)
				_array[i] = src._array[i];
			return *this;
		}
		// Destructor
		~Array(void)
		{
			std::cout << "Destructor called" << std::endl;
			delete[] _array;
		}
		// Getters
		unsigned int size(void) const
		{
			return _size;
		}
		// Operator []
		T &operator[](unsigned int i)
		{
			if (i >= _size)
				throw OutOfLimits();
			return _array[i];
		}
		// Exception class
		class OutOfLimits : public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return "Error: out of limits";
				}
		};
};
