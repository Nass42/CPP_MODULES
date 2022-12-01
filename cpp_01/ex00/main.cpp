/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namohamm <namohamm@student.42.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 17:18:02 by namohamm          #+#    #+#             */
/*   Updated: 2022/12/01 10:47:50 by namohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *newZombie( std::string name );
void randomChump( std::string name );

int main(void)
{
	Zombie *zombie;
	zombie = newZombie("newNass");
	randomChump("randomNass");
	delete zombie;
	return (0);
}