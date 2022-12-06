/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namohamm <namohamm@student.42.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 18:29:16 by namohamm          #+#    #+#             */
/*   Updated: 2022/12/06 18:21:16 by namohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

void mandatory_test()
{
	Animal* animals[4];
	for (int i = 0; i < 4; i++)
	{
		if (i % 2 == 0)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
	}
	std::cout << "----------------------------------------" << std::endl;
	for (int i = 0; i < 4; i++)
		animals[i]->makeSound();
	std::cout << "----------------------------------------" << std::endl;
	// print ideas of each animal
	for (int i = 0; i < 3; i++)
	{
		if (i % 2 == 0)
			((Dog*)animals[i])->getbrain().getIdeas();
		else
			((Cat*)animals[i])->getbrain().getIdeas();
		
	std::cout << "----------" << std::endl;
	}
	std::cout << "----------------------------------------" << std::endl;
	//Call the makeSound function on each of the Animal objects in the array
	for (int i = 0; i < 4; i++)
		delete animals[i];
	std::cout << "----------------------------------------" << std::endl;
}

int main( void )
{
	mandatory_test();
	
	return 0;
}