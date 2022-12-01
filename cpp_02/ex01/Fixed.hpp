/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namohamm <namohamm@student.42.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 23:53:31 by namohamm          #+#    #+#             */
/*   Updated: 2022/11/30 23:41:20 by namohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
	private:
		int					_fixedPointValue;
		static const int	_fractionalBits = 8;
	public:
		Fixed(); // Default constructor
		Fixed(const Fixed &copy); // Copy constructor
		~Fixed(); // Destructor
		Fixed& operator=(const Fixed &rhs); // Copy assignation operator
		int getRawBits(void) const; // Returns the raw value of the fixed point value
		void setRawBits(int const raw); // Sets the raw value of the fixed point value
		Fixed(const int value); // Int constructor
		Fixed(const float value); // Float constructor
		float toFloat(void) const; // Converts the fixed point value to a float
		int toInt(void) const; // Converts the fixed point value to an int
};

std::ostream& operator<<(std::ostream &out, const Fixed &rhs);  // Overload the << operator

#endif
 