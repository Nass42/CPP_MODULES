/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namohamm <namohamm@student.42.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 01:45:42 by namohamm          #+#    #+#             */
/*   Updated: 2022/12/18 15:13:07 by namohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialize.hpp"

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





