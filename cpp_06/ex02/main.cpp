/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namohamm <namohamm@student.42.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 22:55:06 by namohamm          #+#    #+#             */
/*   Updated: 2022/12/15 22:56:22 by namohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "helper.hpp"

int main()
{
	srand(time(NULL));
	Base *base = generate();
	identify(base);
	identify(*base);
	return (0);
}