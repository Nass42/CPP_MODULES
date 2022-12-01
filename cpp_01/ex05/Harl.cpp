/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namohamm <namohamm@student.42.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 09:32:44 by namohamm          #+#    #+#             */
/*   Updated: 2022/12/01 10:33:49 by namohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

// default constructor
Harl::Harl( void ) {}

// destructor
Harl::~Harl( void ) {}

// copy constructor
Harl::Harl( Harl const & src ) {
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return ;
}

// assignment operator
Harl & Harl::operator=( Harl const & rhs ) {
	std::cout << "Assignation operator called" << std::endl;
	// this != &rhs means that the object is not the same as the object on the right hand side
	if ( this != &rhs ) {
		// do stuff
	}
	return *this;
}

// Here the complains to print 
void Harl::debug( void ) {
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
	return ;
}

void Harl::info( void ) {
	std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
	return ;
}

void Harl::warning( void ) {
	std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << std::endl;
	return ;
}

void Harl::error( void ) {
	std::cout << "This is unacceptabel! I want to speak to the manager now." << std::endl;
	return ;
}

// Harl has to complain without using  if/else statements
void Harl::complain( std::string level ) {
	void (Harl::*ptr[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	for (int i = 0; i < 4; i++) {
		if (level == levels[i]) {
			(this->*ptr[i])();
		}
	}
}