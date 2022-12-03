/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namohamm <namohamm@student.42.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 21:28:49 by namohamm          #+#    #+#             */
/*   Updated: 2022/12/03 13:04:23 by namohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void) {
	ClapTrap clapTrap("ClapTrap");
	ScavTrap scavTrap("ScavTrap");
	clapTrap.attack("ClapTrap");
	scavTrap.attack("ScavTrap");

	return 0;
}