/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongele <seongele@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 20:43:26 by seongele          #+#    #+#             */
/*   Updated: 2022/06/07 20:43:26 by seongele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point
{
private:
	const Fixed x_;
	const Fixed y_;

public:
	Point();
	Point(const float x, const float y);
	Point(const Point& pt);
	~Point();

	Point& operator=(const Point& pt);

	const Fixed& getX() const;
	const Fixed& getY() const;
};

std::ostream& operator<<(std::ostream &os, const Point& pt);
bool bsp(Point const a, Point const b, Point const c, Point const point);

#endif