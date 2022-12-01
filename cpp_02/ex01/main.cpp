/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namohamm <namohamm@student.42.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 23:49:27 by namohamm          #+#    #+#             */

/*   Updated: 2022/12/01 11:45:17 by namohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <ostream>

int main ( void ) {

	Fixed a; // Default constructor called
	Fixed const b( 10 ); // Int constructor called
	Fixed const c( 42.42f ); // Float constructor called
	Fixed const d( b ); // Copy constructor called

	a = Fixed( 1234.4321f ); // 

	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;
	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	std::cout << "d is " << d.toInt() << " as integer" << std::endl;
	return 0;
}

// expected output:
// Default constructor called
// Int constructor called
// Float constructor called
// Copy constructor called
// Copy assignation operator called
// Destructor called // beacuse of a = Fixed( 1234.4321f ); // how ? well, a is a local variable, so when it goes out of scope, it's destructor is called // and the destructor is called when the object goes out of scope // so when a = Fixed( 1234.4321f ); is called, the destructor is called for the object a // and then the object a is assigned a new value //
// a is 1234.43
// b is 10
// c is 42.42
// d is 10
// a is 1234 as integer
// b is 10 as integer
// c is 42 as integer
// d is 10 as integer
// Destructor called
// Destructor called
// Destructor called
// Destructor called
// Destructor called