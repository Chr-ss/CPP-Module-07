/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: crasche <crasche@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/11/07 16:36:52 by crasche       #+#    #+#                 */
/*   Updated: 2025/05/15 22:39:34 by christian.r   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/iter.hpp"

#include <string>

int main( void ) 
{
	{
		std::cout << BRIGHT_GREEN << BOLD << "\n\tTesting int: \n" << RESET;
		int array[] = { 1, 2, 3, 4, 5 };
		size_t length = sizeof(array) / sizeof(array[0]);
		std::cout << "iter with print(): " << std::endl;
		iter(array, length, print<int>);
		std::cout << std::endl;

		std::cout << "iter with increment(): " << std::endl;
		iter(array, length, increment<int>);
		std::cout << "iter with print(): " << std::endl;
		iter(array, length, print<int>);


		std::cout << "iter with decrement(): " << std::endl;
		iter(array, length, decrement<int>);
		std::cout << "iter with decrement(): " << std::endl;
		iter(array, length, decrement<int>);
		std::cout << "iter with print(): " << std::endl;
		iter(array, length, print<int>);
	}
	{
		std::cout << BRIGHT_GREEN << BOLD << "\n\tTesting char: \n" << RESET;
		char array[] = { 'a', 'b', 'c', 'd', 'e' };
		size_t length = sizeof(array) / sizeof(array[0]);
		std::cout << "iter with print(): " << std::endl;
		iter(array, length, print<char>);
		std::cout << std::endl;

		std::cout << "iter with increment(): " << std::endl;
		iter(array, length, increment<char>);
		std::cout << "iter with print(): " << std::endl;
		iter(array, length, print<char>);


		std::cout << "iter with decrement(): " << std::endl;
		iter(array, length, decrement<char>);
		std::cout << "iter with decrement(): " << std::endl;
		iter(array, length, decrement<char>);
		std::cout << "iter with print(): " << std::endl;
		iter(array, length, print<char>);
	}
	{
		std::cout << BRIGHT_GREEN << BOLD << "\n\tTesting string: \n" << RESET;
		std::string array[] = { "Hello", "World", "!", "This", "is", "a", "test" };
		size_t length = sizeof(array) / sizeof(array[0]);
		std::cout << "iter with print(): " << std::endl;
		iter(array, length, print<std::string>);
		std::cout << std::endl;
	}
	{
		std::cout << BRIGHT_GREEN << BOLD << "\n\tTesting double: \n" << RESET;
		double array[] = { 1.1, 2.2, 3.3, 4.4, 5.5 };
		size_t length = sizeof(array) / sizeof(array[0]);
		std::cout << "iter with print(): " << std::endl;
		iter(array, length, print<double>);
		std::cout << std::endl;

		std::cout << "iter with increment(): " << std::endl;
		iter(array, length, increment<double>);
		std::cout << "iter with print(): " << std::endl;
		iter(array, length, print<double>);

		std::cout << "iter with decrement(): " << std::endl;
		iter(array, length, decrement<double>);
		std::cout << "iter with decrement(): " << std::endl;
		iter(array, length, decrement<double>);
		std::cout << "iter with print(): " << std::endl;
		iter(array, length, print<double>);
	}
	{
		std::cout << BRIGHT_GREEN << BOLD << "\n\tTesting float: \n" << RESET;
		float array[] = { 1.1f, 2.2f, 3.3f, 4.4f, 5.5f };
		size_t length = sizeof(array) / sizeof(array[0]);
		std::cout << "iter with print(): " << std::endl;
		iter(array, length, print<float>);
		std::cout << std::endl;

		std::cout << "iter with increment(): " << std::endl;
		iter(array, length, increment<float>);
		std::cout << "iter with print(): " << std::endl;
		iter(array, length, print<float>);

		std::cout << "iter with decrement(): " << std::endl;
		iter(array, length, decrement<float>);
		std::cout << "iter with decrement(): " << std::endl;
		iter(array, length, decrement<float>);
		std::cout << "iter with print(): " << std::endl;
		iter(array, length, print<float>);
	}
}
