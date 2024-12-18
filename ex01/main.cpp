/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntalmon <ntalmon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 15:37:46 by ntalmon           #+#    #+#             */
/*   Updated: 2024/12/17 12:31:54 by ntalmon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <cctype>

template< typename T >
void	print(T &e)
{
	std::cout << e << std::endl;
}

template< typename T >
void	increment(T &e)
{
	e++;
}

template< typename T >
void	decrement(T &e)
{
	e--;
}

template< typename T >
void	power(T &e)
{
	e *= e;
}

template< typename T >
void	to_upper(T &e)
{
	if (std::isalpha(e))
		e = std::toupper(e);
}

template< typename T >
void	to_lower(T &e)
{
	if (std::isalpha(e))
		e = std::tolower(e);
}

template< typename T >
void	to_upper_string(T &e)
{
	for (char &c : e)
	{
		if (std::isalpha(c))
			c = std::toupper(c);
	}
}

template< typename T >
void	to_lower_string(T &e)
{
	for (char &c : e)
	{
		if (std::isalpha(c))
			c = std::tolower(c);
	}
}

int main(void)
{
	std::cout << "Test with int:" << std::endl;
	std::cout << std::endl;
	int test_int[5] = {1, 2, 3, 4, 5};
	std::cout << "Original array:" << std::endl;
	iter(test_int, 5, print);
	std::cout << std::endl;
	std::cout << "Increment array:" << std::endl;
	iter(test_int, 5, increment);
	iter(test_int, 5, print);
	std::cout << std::endl;
	std::cout << "Decrement array:" << std::endl;
	iter(test_int, 5, decrement);
	iter(test_int, 5, print);
	std::cout << std::endl;
	std::cout << "Power array:" << std::endl;
	iter(test_int, 5, power);
	iter(test_int, 5, print);
	std::cout << std::endl;
	std::cout << "------------------------------------" << std::endl;

	std::cout << "Test with double:" << std::endl;
	std::cout << std::endl;
	double test_double[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
	std::cout << "Original array:" << std::endl;
	iter(test_double, 5, print);
	std::cout << std::endl;
	std::cout << "Increment array:" << std::endl;
	iter(test_double, 5, increment);
	iter(test_double, 5, print);
	std::cout << std::endl;
	std::cout << "Decrement array:" << std::endl;
	iter(test_double, 5, decrement);
	iter(test_double, 5, print);
	std::cout << std::endl;
	std::cout << "Power array:" << std::endl;
	iter(test_double, 5, power);
	iter(test_double, 5, print);
	std::cout << std::endl;
	std::cout << "------------------------------------" << std::endl;

	std::cout << "Test with char:" << std::endl;
	std::cout << std::endl;
	char test_char[5] = {'a', 'b', 'c', 'd', 'e'};
	std::cout << "Original array:" << std::endl;
	iter(test_char, 5, print);
	std::cout << std::endl;
	std::cout << "Increment array:" << std::endl;
	iter(test_char, 5, increment);
	iter(test_char, 5, print);
	std::cout << std::endl;
	std::cout << "Decrement array:" << std::endl;
	iter(test_char, 5, decrement);
	iter(test_char, 5, print);
	std::cout << std::endl;
	std::cout << "To upper array:" << std::endl;
	iter(test_char, 5, to_upper);
	iter(test_char, 5, print);
	std::cout << std::endl;
	std::cout << "To lower array:" << std::endl;
	iter(test_char, 5, to_lower);
	iter(test_char, 5, print);
	std::cout << std::endl;
	std::cout << "------------------------------------" << std::endl;
	
	std::cout << "Test with string:" << std::endl;
	std::cout << std::endl;
	std::string test_string[5] = {"Hello", "World", "42", "School", "21"};
	std::cout << "Original array:" << std::endl;
	iter(test_string, 5, print);
	std::cout << std::endl;
	std::cout << "To upper array:" << std::endl;
	iter(test_string, 5, to_upper_string);
	iter(test_string, 5, print);
	std::cout << std::endl;
	std::cout << "To lower array:" << std::endl;
	iter(test_string, 5, to_lower_string);
	iter(test_string, 5, print);
	std::cout << std::endl;
	std::cout << "------------------------------------" << std::endl;
	
	return 0;
}