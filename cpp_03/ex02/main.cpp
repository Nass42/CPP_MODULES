/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namohamm <namohamm@student.42.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 21:28:49 by namohamm          #+#    #+#             */
/*   Updated: 2022/12/09 10:59:44 by namohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void) {
	ClapTrap clapTrap("ClapTrap");
	ScavTrap scavTrap("ScavTrap");
	FragTrap fragTrap("FragTrap");
	std::cout << "------------------"<< std::endl;
	clapTrap.attack("Enemy");
	clapTrap.takeDamage(10);
	clapTrap.beRepaired(5);
	std::cout << "------------------"<< std::endl;
	scavTrap.attack("Enemy");
	scavTrap.takeDamage(10);
	scavTrap.beRepaired(5);
	scavTrap.guardGate();
	std::cout << "------------------"<< std::endl;
	fragTrap.attack("Enemy");
	fragTrap.takeDamage(10);
	fragTrap.beRepaired(5);
	fragTrap.highFivesGuys();
	std::cout << "------------------"<< std::endl;
	return 0;
}