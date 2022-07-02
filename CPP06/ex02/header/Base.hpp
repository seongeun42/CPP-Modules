/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongele <seongele@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 12:07:47 by seongele          #+#    #+#             */
/*   Updated: 2022/07/02 12:07:47 by seongele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
#define BASE_HPP

#include <iostream>
#include <exception>
#include <cstdlib>
#include <ctime>

class Base
{
public:
	virtual ~Base();
};

Base* generate();
void identify(Base* p);
void identify(Base& p);

#endif