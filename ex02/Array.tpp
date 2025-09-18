
#include "colors.hpp"
#include "Array.hpp"

// *** CONSTRUCTOR / DESTRUCTOR

template<typename T>
Array<T>::Array(): _size(0), _content(0)
{
	std::cout << GREEN << "Default Array constructor called" << RESET << std::endl;
}

template<typename T>
Array<T>::Array(unsigned int n): _size(n)
{
	if (size > 0)
		this->_content = new T[n]();
	else
		this->_content = 0;
	std::cout << YELLOW << "Array of size " << n << " constructor called" << RESET << std::endl;
}

template<typename T>
Array<T>::Array(const Array &cpy): _size(cpy._size)
{
	if (size <= 0)
	{
		this->_content = 0;
		return ;
	}
	this->_content = new T[cpy._size]();
	for (int i = 0; i < cpy._size; i++)
	{
		this->_content[i] = cpy._content[i];
	}
	std::cout << BLUE << "Copy Array constructor called" << RESET << std::endl;
}

template<typename T>
Array<T>::~Array()
{
	if (this->_content)
		delete[] this->_content;
	std::cout << RED << "Array destructor called" << RESET << std::endl;
}

// *** OPERATOR OVERLOAD

template<typename T>
Array<T> &Array<T>::operator=(const Array &rhs) // a faire
{
	std::cout << LIGHT_BLUE << "Array assignment operator called" << RESET << std::endl;
}

template<typename T>
Array<T> &Array<T>::operator[](const Array &rhs)
{
	std::cout << LIGHT_GREEN << "Array [] operator called" << RESET << std::endl;
}

