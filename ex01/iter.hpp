/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atomasi <atomasi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 14:18:49 by atomasi           #+#    #+#             */
/*   Updated: 2025/09/15 16:48:39 by atomasi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP

# define ITER_HPP
#include "cstddef"

template<typename T, typename R>
void iter(T *tab, size_t length, R &f(T &elem))
{
	for (size_t i = 0; i < lenght; i++)
	{
		f(&tab[i]);
	}
}
#endif