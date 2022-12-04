/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namohamm <namohamm@student.42.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 21:28:49 by namohamm          #+#    #+#             */
/*   Updated: 2022/12/04 17:34:08 by namohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void) {
	ClapTrap clapTrap("ClapTrap");
	std::cout << "------------------"<< std::endl;
	clapTrap.attack("Enemy");
	clapTrap.takeDamage(9);
	clapTrap.beRepaired(8);
	std::cout << "------------------"<< std::endl;

	return 0;
}