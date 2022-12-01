/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namohamm <namohamm@student.42.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 23:53:31 by namohamm          #+#    #+#             */
/*   Updated: 2022/11/29 23:59:29 by namohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

/*
** Fixed class
	Add public member functions to your class to overload the following operators:
• The 6 comparison operators: >, <, >=, <=, == and !=.
• The 4 arithmetic operators: +, -, *, and /.
• The 4 increment/decrement (pre-increment and post-increment, pre-decrement and post-decrement) operators, that will increase or decrease the fixed-point value from the smallest representable ε such as 1 + ε > 1.
*/

class Fixed
{
	private:
		int 				_fixedPointValue;
		static const int	_fractionalBits = 8;
	public:
		Fixed();
		Fixed(const Fixed &copy);
		Fixed(const int n);
		Fixed(const float n);
		~Fixed();
		Fixed &operator=(const Fixed &copy);
		int getRawBits(void) const;
		void setRawBits(int const raw);
		float toFloat(void) const;
		int toInt(void) const;
		bool operator>(const Fixed &copy) const;
		bool operator<(const Fixed &copy) const;
		bool operator>=(const Fixed &copy) const;
		bool operator<=(const Fixed &copy) const;
		bool operator==(const Fixed &copy) const;
		bool operator!=(const Fixed &copy) const;
		Fixed operator+(const Fixed &copy) const;
		Fixed operator-(const Fixed &copy) const;
		Fixed operator*(const Fixed &copy) const;
		Fixed operator/(const Fixed &copy) const;
		Fixed &operator++();
		Fixed operator++(int);
		Fixed &operator--();
		Fixed operator--(int);
		static Fixed &min(Fixed &a, Fixed &b);
		static Fixed &max(Fixed &a, Fixed &b);
		static const Fixed &min(const Fixed &a, const Fixed &b);
		static const Fixed &max(const Fixed &a, const Fixed &b);
};

#endif
 