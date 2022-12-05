/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namohamm <namohamm@student.42.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 18:29:16 by namohamm          #+#    #+#             */
/*   Updated: 2022/12/05 23:07:53 by namohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main( void )
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << "-----------------------" << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << "-----------------------" << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	std::cout << "-----------------------" << std::endl;
	delete j;
	delete i;
	delete meta;
	// std::cout << "-----------------------" << std::endl;
	// std::cout << "-----------------------" << std::endl;
	// const WrongAnimal* wrongAnimal = new WrongAnimal();
	// const WrongAnimal* wrongCat = new WrongCat();
	// std::cout << "-----------------------" << std::endl;
	// std::cout << wrongAnimal->getType() << " " << std::endl;
	// std::cout << wrongCat->getType() << " " << std::endl;
	// std::cout << "-----------------------" << std::endl;
	// wrongAnimal->makeSound();
	// wrongCat->makeSound();
	// std::cout << "-----------------------" << std::endl;
	// delete wrongCat;
	// delete wrongAnimal;
	return 0;
}