/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aykrifa <aykrifa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 13:08:35 by aykrifa           #+#    #+#             */
/*   Updated: 2025/09/18 09:39:28 by aykrifa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"

int	main(void)
{
	Array	<float>a(5);

	for (unsigned int i = 0; i < a.size(); ++i)
		a[i] = 1.23545;
	for (unsigned int i = 0; i < a.size(); ++i)
		std::cout << a[i] << std::endl;
	
	try
	{
		std::cout << "we try to access out of array element" << std::endl;
		a[5];
	}
	catch (std::exception e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl << "copy constructor :" << std::endl;
	Array	<float>b(a);

	for (unsigned int i = 0; i < b.size(); ++i)
		std::cout << b[i] << std::endl;

	std::cout << std::endl << "assignement :" << std::endl;
	Array	<float>c;

	c = a;
	for (unsigned int i = 0; i < c.size(); ++i)
		std::cout << c[i] << std::endl;

	return (0);
}
