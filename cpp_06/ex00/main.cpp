/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namohamm <namohamm@student.42.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 23:10:55 by namohamm          #+#    #+#             */
/*   Updated: 2022/12/18 18:53:20 by namohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

// is_num
bool is_num(std::string str)
{
	if ((str.find_first_not_of("0123456789") == std::string::npos)
		|| (str.find_first_not_of("-0123456789") == std::string::npos && str[0] == '-'))
		return (true);
	return (false);
}

// is_float
bool is_float(std::string str)
{
	if ((str.find_first_not_of("0123456789.") == std::string::npos)
		|| (str.find_first_not_of("-0123456789.") == std::string::npos && str[0] == '-'))
		return (true);
	return (false);
}

// is_char
bool is_char(std::string str)
{
	if (str.length() == 1)
		return (true);
	return (false);
}

// not_convertable
bool not_convertable(std::string str)
{
	if (is_num(str) || is_float(str) || is_char(str))
		return (false);
	return (true);
}

int		main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Error: Invalid number of arguments" << std::endl;
		return (1);
	}
	// check if argument is convertable or not empty
	if (not_convertable(argv[1]) || argv[1][0] == '\0')
	{
		std::cout << "Error: Invalid argument" << std::endl;
		return (1);
	}
	Convert convert(argv[1]);
	convert.convert();
	return (0);
}