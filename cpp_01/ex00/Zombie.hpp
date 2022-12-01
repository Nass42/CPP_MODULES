/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namohamm <namohamm@student.42.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 17:02:04 by namohamm          #+#    #+#             */
/*   Updated: 2022/11/28 11:50:03 by namohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_CLASS_HPP
# define ZOMBIE_CLASS_HPP

#include <iostream>

class Zombie
{
	private:
		std::string _name;
	public:
		Zombie( void );
		~Zombie( void );
		void    announce( void );
		void	setName( std::string name );
};

#endif