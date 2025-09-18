
#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

template<typename T>
class Array
{
	private:
	T				*_content;
	unsigned int	_size;

	public:
		Array();
		Array(unsigned int n);
		Array(const Array& cpy);
		~Array();
		Array &operator=(const Array& rhs);
		Array &operator[](const Array& rhs);
};

#endif
