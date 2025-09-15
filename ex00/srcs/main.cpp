/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aykrifa <aykrifa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/31 15:07:36 by aykrifa           #+#    #+#             */
/*   Updated: 2025/09/15 20:34:09 by aykrifa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//🟰🔧💥
#include <iostream>
#include "swap.tpp"
#include "min.tpp"
#include "max.tpp"

int	main(void)
{
	{
		float	a = 1.5, b = -1.5;
		std::cout << "min(a,b) = " << min(a,b) << std::endl;
		std::cout << "max(a,b) = " << max(a,b) << std::endl;
		swap(&a, &b);
		std::cout << "swap(a, b), "
			<< "we got:" << std::endl
			<< "a = " << a << std::endl
			<< "b = "<< b << std::endl
			<< " then we swap:" << std::endl
			<< "a = " << a << std::endl
			<< "b = "<< b << std::endl
			<< std::endl;
	}
	std::cout << std::endl;
	{
		int	a = 1, b = -1;
		std::cout << "min(a,b) = " << min(a,b) << std::endl;
		std::cout << "max(a,b) = " << max(a,b) << std::endl;
		swap(&a, &b);
		std::cout << "swap(a, b), "
			<< "we got:" << std::endl
			<< "a = " << a << std::endl
			<< "b = "<< b << std::endl
			<< " then we swap:" << std::endl
			<< "a = " << a << std::endl
			<< "b = "<< b << std::endl
			<< std::endl;
	}
	std::cout << std::endl;
	{
		char	a = 'a', b = 'b';
		std::cout << "min(a,b) = " << min(a,b) << std::endl;
		std::cout << "max(a,b) = " << max(a,b) << std::endl;
		swap(&a, &b);
		std::cout << "swap(a, b), "
			<< "we got:" << std::endl
			<< "a = " << a << std::endl
			<< "b = "<< b << std::endl
			<< "then we swap:" << std::endl
			<< "a = " << a << std::endl
			<< "b = "<< b << std::endl
			<< std::endl;
	}
}
