/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namohamm <namohamm@student.42.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 01:45:42 by namohamm          #+#    #+#             */
/*   Updated: 2022/12/15 01:46:23 by namohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialize.hpp"

int		main(void) {
	srand(time(NULL));
	Data *data = new Data;
	data->s1 = "Hello";
	data->n = rand();
	data->s2 = "World";
	std::cout << "s1: " << data->s1 << std::endl;
	std::cout << "n: " << data->n << std::endl;
	std::cout << "s2: " << data->s2 << std::endl;
	uintptr_t raw = serialize(data);
	Data *data2 = deserialize(raw);
	std::cout << "s1: " << data2->s1 << std::endl;
	std::cout << "n: " << data2->n << std::endl;
	std::cout << "s2: " << data2->s2 << std::endl;
	delete data;
	return (0);
}