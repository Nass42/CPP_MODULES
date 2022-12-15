/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namohamm <namohamm@student.42.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 01:45:42 by namohamm          #+#    #+#             */
/*   Updated: 2022/12/15 22:14:25 by namohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialize.hpp"

// int		main(void) {
// 	srand(time(NULL));
// 	Data *data = new Data;
// 	data->s1 = "Hello";
// 	data->n = rand();
// 	data->s2 = "World";
// 	std::cout << "s1: " << data->s1 << std::endl;
// 	std::cout << "n: " << data->n << std::endl;
// 	std::cout << "s2: " << data->s2 << std::endl;
// 	uintptr_t raw = serialize(data);
// 	Data *data2 = deserialize(raw);
// 	std::cout << "s1: " << data2->s1 << std::endl;
// 	std::cout << "n: " << data2->n << std::endl;
// 	std::cout << "s2: " << data2->s2 << std::endl;
// 	delete data;
// 	return (0);
// }

int main() {
    Data data;
    data.s = "hello";

    // Serialize the pointer to data
    uintptr_t serialized = serialize(&data);

    // Deserialize the serialized pointer
    Data* deserialized = deserialize(serialized);

    // Ensure the deserialized pointer is equal to the original pointer
    if (deserialized == &data) {
        std::cout << "Success!" << std::endl;
    } else {
        std::cout << "Failed!" << std::endl;
    }

	std::cout << "s: " << deserialized->s << std::endl;

    return 0;
}





