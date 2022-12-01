/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namohamm <namohamm@student.42.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 12:48:30 by namohamm          #+#    #+#             */
/*   Updated: 2022/11/25 16:34:53 by namohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"

/*--------------------------------------------------*/
Contact::Contact(void) {
	return ;
}

Contact::~Contact(void) {
	return ;
}
/*--------------------------------------------------*/
int		is_digit(std::string str) {
	int i = 0;
	while (str[i]) {
		if (!std::isdigit(str[i]))
			return (0);
		i++;
	}
	return (1);
}
/*--------------------------------------------------*/
void	Contact::setFirstName(void) {
	std::string firstName;

	while (1) {
		std::cout << "Enter first name: ";
		if (!std::getline(std::cin, firstName))
			break;
		if (firstName.length() > 0) {
			this->_firstName = firstName;
			break ;
		}
		std::cout << "First name cannot be empty" << std::endl;
	}
}

std::string	Contact::getFirstName(void) {
	return (this->_firstName);
}
/*--------------------------------------------------*/

/*--------------------------------------------------*/
void	Contact::setLastName(void) {
	std::string lastName;

	while (1) {
		std::cout << "Enter last name: ";
		if (!std::getline(std::cin, lastName))
			break;
		if (lastName.length() > 0) {
			this->_lastName = lastName;
			break ;
		}
		std::cout << "Last name cannot be empty" << std::endl;
	}
}

std::string	Contact::getLastName(void) {
	return this->_lastName;
}
/*--------------------------------------------------*/

/*--------------------------------------------------*/
void	Contact::setNickname(void) {
	std::string nickname;

	while (1) {
		std::cout << "Enter nickname: ";
		if (!std::getline(std::cin, nickname))
			break;
		if (nickname.length() > 0) {
			this->_nickname = nickname;
			break ;
		}
		std::cout << "Nickname cannot be empty" << std::endl;
	}
}

std::string	Contact::getNickname(void) {
	return this->_nickname;
}
/*--------------------------------------------------*/

/*--------------------------------------------------*/
void	Contact::setPhoneNumber(void) {
	std::string phoneNumber;
	long int	phoneNumberInt;

	while (1) {
		std::cout << "Enter phone number: ";
		if (!std::getline(std::cin, phoneNumber))
			break;
		if (phoneNumber.length() > 0) {
			if (is_digit(phoneNumber)) {
				try {
					phoneNumberInt = std::stol(phoneNumber);
					this->_phoneNumber = phoneNumberInt;
					break ;
				}
				catch (std::exception &e) {
					std::cout << "Phone number err " << e.what()<< std::endl;
				}
			}
			else
				std::cout << "Phone number must be a number between 0 and 9999999999" << std::endl;
		}
		else
			std::cout << "Phone number cannot be empty" << std::endl;
	}
}

long int	Contact::getPhoneNumber(void) {
	return this->_phoneNumber;
}
/*--------------------------------------------------*/

/*--------------------------------------------------*/
void	Contact::setDarkestSecret(void) {
	std::string darkestSecret;

	while (1) {
		std::cout << "Enter darkest secret: ";
		if (!std::getline(std::cin, darkestSecret))
			break;
		if (darkestSecret.length() > 0) {
			this->_darkestSecret = darkestSecret;
			break;
		}
		std::cout << "Darkest secret cannot be empty" << std::endl;
	}
}

std::string	Contact::getDarkestSecret(void) {
	return this->_darkestSecret;
}
/*--------------------------------------------------*/

/*--------------------------------------------------*/
void	Contact::printContact(void)
{
	std::cout << "First name: " << this->_firstName << std::endl;
	std::cout << "Last name: " << this->_lastName << std::endl;
	std::cout << "Nickname: " << this->_nickname << std::endl;
	std::cout << "Phone number: " << this->_phoneNumber << std::endl;
	std::cout << "Darkest secret: " << this->_darkestSecret << std::endl;
}
/*--------------------------------------------------*/