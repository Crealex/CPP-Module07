/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atomasi <atomasi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 14:18:49 by atomasi           #+#    #+#             */
/*   Updated: 2025/09/16 10:56:30 by atomasi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP

# define ITER_HPP
# include "cstddef"
# include <iostream>

// *** handle const ***

template<typename T>
void iter(const T *tab, size_t length, void (*f)(const T&))
{
	for (size_t i = 0; i < length; i++)
	{
		f(tab[i]);
	}
}

template<typename T>
void iter(T *tab, size_t length, void (*f)(T&))
{
	for (size_t i = 0; i < length; i++)
	{
		f(tab[i]);
	}
}

// *** TESTS TEMPLATES ***

template<typename T>
void increment(T &elem)
{
	elem += 1;
}

template<typename T>
void print(T const &elem)
{
	std::cout << elem << std::endl;
}
#endif