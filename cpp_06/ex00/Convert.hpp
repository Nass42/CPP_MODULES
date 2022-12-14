/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namohamm <namohamm@student.42.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 22:46:56 by namohamm          #+#    #+#             */
/*   Updated: 2022/12/15 00:11:07 by namohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
# define CONVERT_HPP

# include <iostream>
# include <string>

class Convert
{
	private:
		std::string	_str;
		char		_char;
		int			_int;
		float		_float;
		double		_double;
	public:
		Convert();
		Convert(Convert const &rhs);
		~Convert();
		Convert &operator=(Convert const &rhs);
		Convert(std::string const &str);
		void	convertToChar();
		void	convertToInt();
		void	convertToFloat();
		void	convertToDouble();
		void	convert();
};

#endif