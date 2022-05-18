/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongele <seongele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 15:58:06 by seongele          #+#    #+#             */
/*   Updated: 2022/05/18 15:58:07 by seongele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
private:
	int value;
	static const int bit = 8;

public:
	Fixed();
	Fixed(const int value);
	Fixed(const float value);
	Fixed(const Fixed& fixed);
	~Fixed();
	
	Fixed& operator=(const Fixed& fixed);

	void setRawBits(const int raw);
	int getRawBits(void) const;
	
	float toFloat(void) const;
	int toInt(void) const;
};

std::ostream& operator<<(std::ostream &os, const Fixed& fixed);

#endif