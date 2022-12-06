/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namohamm <namohamm@student.42.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 18:29:16 by namohamm          #+#    #+#             */
/*   Updated: 2022/12/06 16:29:40 by namohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main( void )
{
	// const Animal* j = new Dog();
	// const Animal* i = new Cat();
	//In your main function, create and fill an array of Animal objects. Half of it will
	//be Dog objects and the other half will be Cat objects
	Animal* animals[10];
	for (int i = 0; i < 10; i++)
	{
		if (i % 2 == 0)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
	}
	std::cout << "----------------------------------------" << std::endl;
	//Call the makeSound function on each of the Animal objects in the array
	for (int i = 0; i < 10; i++)
		animals[i]->makeSound();
	std::cout << "----------------------------------------" << std::endl;
	// print ideas of each animal
	for (int i = 0; i < 10; i++)
	{
		if (i % 2 == 0)
			((Dog*)animals[i])->getbrain().getIdeas();
		else
			((Cat*)animals[i])->getbrain().getIdeas();
	}
	std::cout << "----------------------------------------" << std::endl;
	//Call the makeSound function on each of the Animal objects in the array
	for (int i = 0; i < 10; i++)
		delete animals[i];
	std::cout << "----------------------------------------" << std::endl;
	
	return 0;
}