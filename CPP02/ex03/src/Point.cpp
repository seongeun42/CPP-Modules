/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongele <seongele@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 20:43:22 by seongele          #+#    #+#             */
/*   Updated: 2022/06/07 20:43:22 by seongele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : x_(0), y_(0)
{
}

Point::Point(const float x, const float y) : x_(x), y_(y)
{
}

Point::Point(const Point& pt)
{
	*this = pt;
}

Point::~Point()
{
}

Point& Point::operator=(const Point& pt)
{
	if (this != &pt)
	{
		const_cast<Fixed&>(x_) = pt.getX();
		const_cast<Fixed&>(y_) = pt.getY();
	}
	return *this;
}

const Fixed& Point::getX() const
{
	return x_;
}

const Fixed& Point::getY() const
{
	return y_;
}

std::ostream& operator<<(std::ostream &os, const Point& pt)
{
	os << "(" << pt.getX().toFloat() << ", " << pt.getY().toFloat() << ")";
	return os;
}