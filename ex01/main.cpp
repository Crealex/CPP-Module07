/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atomasi <atomasi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 09:54:27 by atomasi           #+#    #+#             */
/*   Updated: 2025/09/16 11:43:12 by atomasi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include "colors.h"

int main(void)
{
	int tab[5] = {0, 1, 2, 3, 4};
	std::string strings = "test";

	std::cout << BOLD << ""
	::iter(tab, 5, ::print);
	::iter(tab, 5, ::increment);
	::iter(tab, 5, ::print);

}