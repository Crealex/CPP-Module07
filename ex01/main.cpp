/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atomasi <atomasi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 09:54:27 by atomasi           #+#    #+#             */
/*   Updated: 2025/09/17 10:36:00 by atomasi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include "colors.h"

int main(void)
{
	int tab[5] = {0, 1, 2, 3, 4};
	char chars[11] = "testouille";
	double doubles[6] = {2.5, 1.2, 4.2, 5.5, 7.0, 6.9};
	const int ctab[3] = {4, 2, 0};
	std::string strings[3] = {"hello", "World", "42"};

	std::cout << BOLD << "*** TRY WITH A TAB OF INT ***" << RESET << std::endl;
	std::cout << "print: " << std::endl;
	::iter(tab, 5, ::print);
	std::cout << "increment & reprint: " << std::endl;
	::iter(tab, 5, ::increment);
	::iter(tab, 5, ::print);
	std::cout << BOLD << "*** TRY WITH A TAB OF CHAR ***" << RESET << std::endl;
	std::cout << "print: " << std::endl;
	::iter(chars, 11, ::print);
	std::cout << "increment & reprint: " << std::endl;
	::iter(chars, 11, ::increment);
	::iter(chars, 11, ::print);
	std::cout << BOLD << "*** TRY WITH A TAB OF DOUBLE ***" << RESET << std::endl;
	std::cout << "print: " << std::endl;
	::iter(doubles, 6, ::print);
	std::cout << "increment & reprint: " << std::endl;
	::iter(doubles, 6, ::increment);
	::iter(doubles, 6, ::print);
	std::cout << BOLD << "*** TRY WITH A CONST TAB OF INT ***" << RESET << std::endl;
	std::cout << "print: " << std::endl;
	::iter(ctab, 3, ::print);
	std::cout << "obviously we can't do increment" << std::endl;
	std::cout << BOLD << "*** TRY WITH A TAB OF STRINGS ***" << RESET << std::endl;
	::iter(strings, 3, ::print);
	std::cout << "we can't increment a string" << std::endl;
}