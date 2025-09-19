
#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <exception>
# include <cstdlib>

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
		T &operator[](std::size_t idx);
		const T &operator[](std::size_t idx);

		unsigned int size() const;
};

#endif
