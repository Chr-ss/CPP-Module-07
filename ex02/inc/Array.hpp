/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Array.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: christian.rasche <christian.rasche@stud      +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/11/09 14:58:12 by christian.r   #+#    #+#                 */
/*   Updated: 2025/05/16 14:19:53 by crasche       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

# define RESET          "\033[0m"
# define BLACK          "\033[30m"
# define WHITE          "\033[37m"
# define BRIGHT_WHITE   "\033[97m"
# define RED            "\033[31m"
# define BRIGHT_RED     "\033[91m"
# define YELLOW         "\033[33m"
# define BRIGHT_YELLOW  "\033[93m"
# define BLUE           "\033[34m"
# define LIGHT_BLUE     "\033[38;5;123m"
# define BRIGHT_BLUE    "\033[94m"
# define MAGENTA        "\033[35m"
# define BRIGHT_MAGENTA "\033[95m"
# define CYAN           "\033[36m"
# define BRIGHT_CYAN    "\033[96m"
# define GREEN          "\033[32m"
# define BRIGHT_GREEN   "\033[92m"
# define GRAY           "\033[90m"
# define LIGHT_GRAY     "\033[37m"
# define DARK_GRAY      "\033[90m"
# define ORANGE         "\033[38;5;208m"
# define PINK           "\033[38;5;213m"
# define PURPLE         "\033[38;5;129m"
# define BOLD           "\033[1m"
# define UNDERLINE      "\033[4m"

template <typename T>
class Array {
private:
	unsigned int	_size;
	T				*_array;
public:
	// Construction with no parameter
	Array() : _size(0), _array(nullptr) {}
	// Construction with an unsigned int n
	Array(unsigned int n) : _size(n), _array(new T[n]) {}
	// Construction by copy
	Array(const Array &other) : _size(other._size), _array(new T[other._size])
	{
		for (unsigned int i = 0; i < _size; ++i)
			_array[i] = other._array[i];
	}
	// Destructor
	~Array() { delete[] _array; }
	// Construction by assignment operator
	Array &operator=(const Array &other)
	{
		if (this != &other)
		{
			delete[] _array;
			_size = other._size;
			_array = new T[_size];
			for (unsigned int i = 0; i < _size; ++i)
				_array[i] = other._array[i];
		}
		return *this;
	}

	T &operator[](unsigned int index)
	{
		if (index >= _size)
			throw std::out_of_range("Index out of range");
		return _array[index];
	}

	unsigned int size() const { return _size; }
};

template <typename T>
std::ostream &operator<<(std::ostream &os, const Array<T> &array)
{
	for (unsigned int i = 0; i < array.size(); ++i)
		os << array[i] << " ";
	return (os);
}

#endif // ARRAY_HPP