/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namohamm <namohamm@student.42.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 13:28:43 by namohamm          #+#    #+#             */
/*   Updated: 2022/11/28 13:38:32 by namohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main( void ) {
	std::string str = "HI THIS IS BRAIN";
	std::string* stringPTR = &str;
	std::string &stringREF = str;

	std::cout << "Memory addresses:" << std::endl;
	std::cout << "	String: " << &str << std::endl;
	std::cout << "	StringPTR: " << stringPTR << std::endl;
	std::cout << "	StringREF: " << &stringREF << std::endl;

	std::cout << "String values:" << std::endl;
	std::cout << "	String: " << str << std::endl;
	std::cout << "	StringPTR: " << *stringPTR << std::endl;
	std::cout << "	StringREF: " << stringREF << std::endl;

	return (0);
}