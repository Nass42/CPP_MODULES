/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namohamm <namohamm@student.42.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 18:29:16 by namohamm          #+#    #+#             */
/*   Updated: 2022/12/09 11:25:21 by namohamm         ###   ########.fr       */
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
	std::cout << "---------------------" << std::endl;
	//Call the makeSound function on each of the Animal objects in the array
	for (int i = 4; i > -1; i--)
		delete animals[i];
	std::cout << "---------------------" << std::endl;
}

void additional_test() {

	Cat cat_one;
	Cat cat_two;

	std::cout << "cat_one Ideas-------------------" << std::endl;
	cat_one.getbrain()->getIdeas();
	std::cout << "--------------------------------" << std::endl;
	std::cout << "Copy cat_one to cat_two---------" << std::endl;
	cat_two = cat_one;
	std::cout << "--------------------------------" << std::endl;
	std::cout << "cat_two Ideas-------------------" << std::endl;
	cat_two.getbrain()->getIdeas();
	std::cout << "--------------------------------" << std::endl;
	std::cout << "cat_one Change his mind---------" << std::endl;
	cat_one.getbrain()->changeIdeas();
	std::cout << "cat_one New Ideas---------------" << std::endl;
	cat_one.getbrain()->getIdeas();
	std::cout << "--------------------------------" << std::endl;
	std::cout << "cat_two Ideas-------------------" << std::endl;
	cat_two.getbrain()->getIdeas();
	std::cout << "--------------------------------" << std::endl;
}

int main( void ) {
	// mandatory_test();
	additional_test();
	
	return 0;
}