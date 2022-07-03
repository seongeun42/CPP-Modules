/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongele <seongele@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 17:22:24 by seongele          #+#    #+#             */
/*   Updated: 2022/07/02 17:22:24 by seongele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main()
{
	{
		std::cout << "========== Default Test ==========" << std::endl;
		MutantStack<int> mstack;

		mstack.push(5);
		mstack.push(17);

		std::cout << mstack.top() << std::endl;

		mstack.pop();

		std::cout << mstack.size() << std::endl;

		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		mstack.push(0);

		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();

		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::stack<int> s(mstack);
	}

	{
		std::cout << "\n========== Custom Test ==========" << std::endl;
		MutantStack<int> mstack;
		for (int i = 1; i <= 5; i++)
			mstack.push(i * i);
		
		std::cout << "Top : " << mstack.top() << std::endl;
		std::cout << "Size : " << mstack.size() << std::endl;

		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();

		std::cout << "mstack : ";
		while (it != ite)
			std::cout << *it++ << " ";

		MutantStack<int>::reverse_iterator rit = mstack.rbegin();
		MutantStack<int>::reverse_iterator rite = mstack.rend();

		std::cout << "\nreverse mstack : ";
		while (rit != rite)
			std::cout << *rit++ << " ";
		
		std::cout << std::endl;
	}

	return 0;
}