/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namohamm <namohamm@student.42.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 13:50:46 by namohamm          #+#    #+#             */
/*   Updated: 2022/11/29 10:59:44 by namohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <iostream>
# include "Weapon.hpp"

class HumanA {
	private:
		std::string _name;
		Weapon &_weapon;
	public:
		HumanA(std::string name, Weapon &weapon);
		~HumanA( void );
		void attack( void );
};

#endif