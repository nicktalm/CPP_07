/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntalmon <ntalmon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 15:38:09 by ntalmon           #+#    #+#             */
/*   Updated: 2024/12/16 15:42:47 by ntalmon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template< typename T >
void	swap( T &a, T &b )
{
	T tmp = a;
	a = b;
	b = tmp;
}

template< typename T >
T min( T a, T b)
{
	if (a < b)
		return a;
	return b;
}

template< typename T >
T max( T a, T b)
{
	if (a > b)
		return a;
	return b;
}