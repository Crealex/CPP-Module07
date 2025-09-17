
#include "colors.h"
#include "Array.hpp"

Array::Array():
{
	std::cout << GREEN << "Default Array constructor called" << RESET << std::endl;
}

Array::Array(const Array &cpy)
{
	std::cout << BLUE << "Copy Array constructor called" << RESET << std::endl;
}

Array::~Array()
{
	std::cout << RED << "Array destructor called" << RESET << std::endl;
}

Array &Array::operator=(const Array &rhs)
{
	std::cout << LIGHT_BLUE << "Array assignment operator called" << RESET << std::endl;
}

