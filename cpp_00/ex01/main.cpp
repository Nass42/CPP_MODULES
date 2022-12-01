/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namohamm <namohamm@student.42.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 13:49:55 by namohamm          #+#    #+#             */
/*   Updated: 2022/11/21 14:48:49 by namohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"

int		main(void) {
	PhoneBook	phoneBook;
	std::string	input;
	Contact		contact;

	while (1) {
		std::cout << "+-------------------------------------------+" << std::endl;
		std::cout << "|        Commands: ADD, SEARCH, EXIT        |" << std::endl;
		std::cout << "+-------------------------------------------+" << std::endl;
		std::cout << "Enter a Command: ";
		if (!std::getline(std::cin, input))
			break ;
		if (input == "EXIT") {
			break ;
		} else if (input == "ADD") {
			contact.setFirstName();
			contact.setLastName();
			contact.setNickname();
			contact.setPhoneNumber();
			contact.setDarkestSecret();
			phoneBook.addContact(contact);
		} else if (input == "SEARCH") {
			phoneBook.searchContact();
		}
	}
	return (0);
}