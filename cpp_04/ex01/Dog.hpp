/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namohamm <namohamm@student.42.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 18:14:57 by namohamm          #+#    #+#             */
/*   Updated: 2022/12/05 23:53:10 by namohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal {
	private:
		Brain*	_brain;
	public:
		Dog();
		Dog( Dog const& src );
		~Dog();
		Dog& operator=(Dog const& rhs);
		void makeSound() const;
};

#endif