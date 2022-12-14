/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namohamm <namohamm@student.42.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 22:46:38 by namohamm          #+#    #+#             */
/*   Updated: 2022/12/15 00:11:32 by namohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

Convert::Convert() : _str(""), _char(0), _int(0), _float(0), _double(0){
	return ;
}

Convert::Convert(Convert const &rhs) {
	*this = rhs;
	return ;
}

Convert::~Convert() {
	return ;
}

Convert &Convert::operator=(Convert const &rhs) {
	if (this != &rhs)
	{
		this->_str = rhs._str;
		this->_char = rhs._char;
		this->_int = rhs._int;
		this->_float = rhs._float;
		this->_double = rhs._double;
	}
	return (*this);
}

Convert::Convert(std::string const &str) : _str(str), _char(0), _int(0), _float(0), _double(0) {
	return ;
}

void	Convert::convertToChar() {
	if (this->_str.length() == 1 && !isdigit(this->_str[0]))
		this->_char = this->_str[0];
	else
	{
		try
		{
			this->_char = static_cast<char>(std::stoi(this->_str));
		}
		catch(const std::exception& e)
		{
			std::cerr << "char: impossible" << std::endl;
			return ;
		}
	}
	if (isprint(this->_char))
		std::cout << "char: '" << this->_char << "'" << std::endl;
	else
		std::cout << "char: Non displayable" << std::endl;
}

void	Convert::convertToInt() {
	try
	{
		this->_int = std::stoi(this->_str);
	}
	catch(const std::exception& e)
	{
		std::cerr << "int: impossible" << std::endl;
		return ;
	}
	std::cout << "int: " << this->_int << std::endl;
}

void	Convert::convertToFloat() {
	try
	{
		this->_float = std::stof(this->_str);
	}
	catch(const std::exception& e)
	{
		std::cerr << "float: impossible" << std::endl;
		return ;
	}
	if (this->_float - static_cast<int>(this->_float) == 0)
		std::cout << "float: " << this->_float << ".0f" << std::endl;
	else
		std::cout << "float: " << this->_float << "f" << std::endl;
}

void	Convert::convertToDouble() {
	try
	{
		this->_double = std::stod(this->_str);
	}
	catch(const std::exception& e)
	{
		std::cerr << "double: impossible" << std::endl;
		return ;
	}
	if (this->_double - static_cast<int>(this->_double) == 0)
		std::cout << "double: " << this->_double << ".0" << std::endl;
	else
		std::cout << "double: " << this->_double << std::endl;
}

void	Convert::convert() {
	this->convertToChar();
	this->convertToInt();
	this->convertToFloat();
	this->convertToDouble();
}
