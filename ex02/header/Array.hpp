/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aykrifa <aykrifa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 12:53:17 by aykrifa           #+#    #+#             */
/*   Updated: 2025/09/18 09:57:09 by aykrifa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <exception>
#include <iostream>
template <typename T>

class	Array
{
	class	OutOfArray :	public std::exception
	{
		public:
			virtual const char* what() const throw()	{return ("Out of Array !");}
	};
	public:
		Array(void)
		{
			_size = 0;
			_content = new T[_size];
		}

		Array(Array const &copy)
		{
			_content = new T[0];
			*this = copy;
		}

		~Array(void)
		{
			delete[] this->_content;
		}

		Array			&operator=(Array const &rhs)
		{
			if (this == &rhs)
				return (*this);
			this->_size = rhs._size;
			delete[] this->_content;
			this->_content = new T[this->_size];
			for (unsigned int i = 0; i < this->_size; ++i)
			{
				this->_content[i] = rhs._content[i];
			}
			return (*this);
		}

		Array(unsigned int size)
		{
			this->_size = size;
			_content = new T[_size];
		}

		T			&operator[](unsigned int at)
		{
			if (at >= this->_size)
				throw (Array::OutOfArray());
			return (this->_content[at]);
		}

		inline unsigned int	size(void) const
		{
			return (this->_size);
		}
	private:
		T				*_content;
		unsigned int	_size;
};
