/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongele <seongele@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 12:20:13 by seongele          #+#    #+#             */
/*   Updated: 2022/07/02 12:20:13 by seongele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base::~Base() {}

Base* generate()
{
	srand(time(NULL));
	switch (rand() % 3)
	{
	case 0:
		return new A();
		break;
	case 1:
		return new B();
		break;
	case 2:
		return new C();
		break;
	default:
		std::cerr << "Generation failed" << std::endl;
		break;
	}
	return NULL;
}

void identify(Base* p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "This is A class" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "This is B class" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "This is C class" << std::endl;
	else
		std::cerr << "Identification failed : Pointer" << std::endl;
}

void identify(Base& p)
{
	try
	{
		(void) dynamic_cast<A&>(p);
		std::cout << "This is A class" << std::endl;
		return;
	}
	catch (std::exception& e)
	{
		(void) e;
	}

	try
	{
		(void) dynamic_cast<B&>(p);
		std::cout << "This is B class" << std::endl;
		return;
	}
	catch (std::exception& e)
	{
		(void) e;
	}

	try
	{
		(void) dynamic_cast<C&>(p);
		std::cout << "This is C class" << std::endl;
		return;
	}
	catch (std::exception& e)
	{
		(void) e;
		std::cerr << "Identification failed : Reference" << std::endl;
	}
}