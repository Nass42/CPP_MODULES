/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namohamm <namohamm@student.42.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 15:57:50 by namohamm          #+#    #+#             */
/*   Updated: 2022/12/15 14:09:25 by namohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	/*-------------------------*/
	Bureaucrat b("Bob", 5);
	std::cout << b << std::endl;
	b.incrementGrade();
	std::cout << b << std::endl;
	b.decrementGrade();
	std::cout << b << std::endl;
	/*-------------------------*/
	// try and catch
	try
	{
		Bureaucrat b("Nass", -8);
		std::cout << b << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	/*-------------------------*/
	return 0;
}