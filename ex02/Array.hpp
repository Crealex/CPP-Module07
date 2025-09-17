
#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

class Array
{
	private:

	public:
		Array();
		Array(const Array& cpy);
		~Array();
		Array &operator=(const Array& rhs);
};

#endif
