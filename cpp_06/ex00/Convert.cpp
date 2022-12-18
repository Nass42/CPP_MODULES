/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namohamm <namohamm@student.42.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 22:46:38 by namohamm          #+#    #+#             */
/*   Updated: 2022/12/18 18:55:04 by namohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <stdexcept>
#include <string>
#include <limits>
#include "Convert.hpp"

int str_int(const std::string& str)
{
	std::size_t* idx = NULL;
	int base = 10;
    char* endptr = NULL;
    const long long result = std::strtoll(str.c_str(), &endptr, base);
    if (endptr == str.c_str()) {
        throw std::invalid_argument("stoi: no conversion");
    }
    if (idx != NULL) {
        *idx = static_cast<std::size_t>(endptr - str.c_str());
    }
    if (result < std::numeric_limits<int>::min() || result > std::numeric_limits<int>::max()) {
        throw std::out_of_range("stoi: out of range");
    }
    return static_cast<int>(result);
}

float str_float(const std::string& str)
{
	std::size_t* idx = NULL;
    char* endptr = NULL;
    const float result = std::atof(str.c_str());
    if (result == 0 && str.c_str() == endptr) {
        throw std::invalid_argument("stof: no conversion");
    }
    if (idx != NULL) {
        *idx = static_cast<std::size_t>(endptr - str.c_str());
    }
    return result;
}

double str_double(const std::string& str)
{
	char* endptr = NULL;
	const double result = std::atof(str.c_str());
	if (result == 0 && str.c_str() == endptr) {
		throw std::invalid_argument("stof: no conversion");
	}
	return result;
}

Convert::Convert() : _str(""), _char(0), _int(0), _float(0), _double(0){
}

Convert::Convert(Convert const &rhs) {
	*this = rhs;
}

Convert::~Convert() {
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
			this->_char = static_cast<char>(str_int(this->_str));
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
		if (this->_str.length() == 1 && !isdigit(this->_str[0]))
			this->_int = static_cast<int>(this->_str[0]);
		else
			this->_int = str_int(this->_str);
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
		if (this->_str.length() == 1 && !isdigit(this->_str[0]))
			this->_float = static_cast<float>(this->_str[0]);
		else
			this->_float = str_float(this->_str);
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
		if (this->_str.length() == 1 && !isdigit(this->_str[0]))
			this->_double = static_cast<double>(this->_str[0]);
		else
			this->_double = str_double(this->_str);
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
