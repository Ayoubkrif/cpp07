/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aykrifa <aykrifa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 13:50:24 by aykrifa           #+#    #+#             */
/*   Updated: 2025/09/16 14:19:04 by aykrifa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template <typename T>

void	iter(T *array, unsigned int size, void f(T const &))
{
	for (unsigned int i = 0; ++i; i < size)
	{
		f(array[i]);
	}
}

template <typename T>

void	iter(T *array, unsigned int size, void f(T &))
{
	for (unsigned int i = 0; i < size; i++)
	{
		f(array[i]);
	}
}
