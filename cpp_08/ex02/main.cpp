/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namohamm <namohamm@student.42.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 11:48:44 by namohamm          #+#    #+#             */
/*   Updated: 2022/12/24 14:51:59 by namohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main()
{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	std::cout << "------------------" << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	std::cout << "------------------" << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	std::cout << "------------------" << std::endl;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::cout << "------------------" << std::endl;
	std::stack<int> s(mstack);
	MutantStack<int> t(mstack);
	mstack.pop();
	mstack.pop();
	mstack.pop();
	mstack.pop();
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	std::cout << t.size() << std::endl;
	MutantStack<int>::iterator et = t.begin();
	MutantStack<int>::iterator ete = t.end();
	std::cout << "------------------" << std::endl;
	while (et != ete)
	{
		std::cout << *et << std::endl;
		et++;
	}
	std::cout << "------------------" << std::endl;
	return 0;
}