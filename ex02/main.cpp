/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntalmon <ntalmon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 15:37:46 by ntalmon           #+#    #+#             */
/*   Updated: 2025/02/04 10:18:14 by ntalmon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main(void)
{
	Array<int> a(5);
	Array<int> b(5);
	Array<int> c(5);

	for (unsigned int i = 0; i < 5; i++)
	{
		a[i] = i;
		b[i] = i + 5;
		c[i] = i + 10;
	}
	
	std::cout << "Array a: ";
	for (unsigned int i = 0; i < 5; i++)
		std::cout << a[i] << " ";
	std::cout << std::endl;
	
	std::cout << "Array b: ";
	for (unsigned int i = 0; i < 5; i++)
		std::cout << b[i] << " ";
	std::cout << std::endl;

	std::cout << "Array c: ";
	for (unsigned int i = 0; i < 5; i++)
		std::cout << c[i] << " ";
	std::cout << std::endl;

	// Test des Copy-Konstruktors
	Array<int> d(a);
	std::cout << "Array d (copy of a): ";
	for (unsigned int i = 0; i < 5; i++)
		std::cout << d[i] << " ";
	std::cout << std::endl;

	// Test des Zuweisungsoperators
	Array<int> e = b;
	std::cout << "Array e (assigned from b): ";
	for (unsigned int i = 0; i < 5; i++)
		std::cout << e[i] << " ";
	std::cout << std::endl;

	// Test der Ausnahmebehandlung
	try
	{
		std::cout << a[10] << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	return 0;
}