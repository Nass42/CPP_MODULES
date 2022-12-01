/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namohamm <namohamm@student.42.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 19:43:21 by namohamm          #+#    #+#             */
/*   Updated: 2022/11/30 13:58:32 by namohamm         ###   ########.fr       */
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
		Fixed(); 
		Fixed(const Fixed &copy); // copy constructor
		~Fixed();
		Fixed& operator=(const Fixed &rhs); // copy assignment operator

		int getRawBits(void) const;
		void setRawBits(int const raw);
};

#endif
