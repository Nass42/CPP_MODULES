/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namohamm <namohamm@student.42.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 09:20:18 by namohamm          #+#    #+#             */
/*   Updated: 2022/12/01 10:18:16 by namohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

/*
** What is an Orthodox Canonical Class?
** well, it's a class that has 4 functions:
** 1- Default Constructor
** 2- Copy Constructor
** 3- Assignment Operator
** 4- Destructor
*/

# include <iostream>

class Harl {
	private:
		void debug( void );
		void info( void );
		void warning( void );
		void error( void );
	public:
		Harl( void ); // default constructor
		~Harl( void ); // destructor
		Harl( Harl const & src ); // copy constructor
		Harl & operator=( Harl const & rhs ); // assignment operator
		void complain( std::string level ); // member function
};

#endif