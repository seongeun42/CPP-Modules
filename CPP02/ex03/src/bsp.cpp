/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongele <seongele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 20:43:19 by seongele          #+#    #+#             */
/*   Updated: 2022/07/06 13:54:06 by seongele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

static int calcTriangle(Point const v1, Point const v2, Point const v3)
{
	int ans = v1.getX().toFloat() * (v2.getY().toFloat() - v3.getY().toFloat())
		+ v2.getX().toFloat() * (v3.getY().toFloat() - v1.getY().toFloat())
		+ v3.getX().toFloat() * (v1.getY().toFloat() - v2.getY().toFloat());
	return ans < 0 ? -ans : ans;
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	int target = calcTriangle(a, b, c);
	int aa = calcTriangle(point, b, c);
	int bb = calcTriangle(a, point, c);
	int cc = calcTriangle(a, b, point);

	return target == aa + bb + cc;
}