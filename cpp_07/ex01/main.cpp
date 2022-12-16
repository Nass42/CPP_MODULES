/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namohamm <namohamm@student.42.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 11:02:18 by namohamm          #+#    #+#             */
/*   Updated: 2022/12/16 11:17:44 by namohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "iter.hpp"


void print(int const &x)
{
	std::cout << x << std::endl;
}

int main()
{
	int array[5] = {1, 2, 3, 4, 5};
	iter(array, 5, print);
	return (0);
}