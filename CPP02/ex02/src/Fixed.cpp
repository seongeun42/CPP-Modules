/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongele <seongele@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 15:58:02 by seongele          #+#    #+#             */
/*   Updated: 2022/05/25 11:14:53 by seongele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : value(0)
{
}

Fixed::Fixed(const int v) : value(v << Fixed::bit)
{
}

Fixed::Fixed(const float v) : value((int) roundf(v * (1 << Fixed::bit)))
{
}

Fixed::Fixed(const Fixed& fixed)
{
	*this = fixed;
}

Fixed::~Fixed()
{
}

void Fixed::setRawBits(const int raw)
{
	this->value = raw;
}

int Fixed::getRawBits() const
{
	return this->value;
}

float Fixed::toFloat() const
{
	return (this->value / (float) (1 << Fixed::bit));
}

int Fixed::toInt() const
{
	return this->value >> Fixed::bit;
}

Fixed& Fixed::min(Fixed& v1, Fixed& v2)
{
	if (v1.toFloat() > v2.toFloat())
		return v2;
	return v1;
}

const Fixed& Fixed::min(const Fixed& v1, const Fixed& v2)
{
	if (v1.toFloat() > v2.toFloat())
		return v2;
	return v1;
}

Fixed& Fixed::max(Fixed& v1, Fixed& v2)
{
	if (v1.toFloat() < v2.toFloat())
		return v2;
	return v1;
}

const Fixed& Fixed::max(const Fixed& v1, const Fixed& v2)
{
	if (v1.toFloat() < v2.toFloat())
		return v2;
	return v1;
}

Fixed& Fixed::operator=(const Fixed& fixed)
{
	this->value = fixed.getRawBits();
	return *this;
}

bool Fixed::operator>(const Fixed& fixed)
{
	return this->toFloat() > fixed.toFloat();
}

bool Fixed::operator<(const Fixed& fixed)
{
	return this->toFloat() < fixed.toFloat();
}

bool Fixed::operator>=(const Fixed& fixed)
{
	return this->toFloat() >= fixed.toFloat();
}

bool Fixed::operator<=(const Fixed& fixed)
{
	return this->toFloat() <= fixed.toFloat();
}

bool Fixed::operator==(const Fixed& fixed)
{
	return this->toFloat() == fixed.toFloat();
}

bool Fixed::operator!=(const Fixed& fixed)
{
	return this->toFloat() != fixed.toFloat();
}

float Fixed::operator+(const Fixed& fixed)
{
	return this->toFloat() + fixed.toFloat();
}

float Fixed::operator-(const Fixed& fixed)
{
	return this->toFloat() - fixed.toFloat();
}

float Fixed::operator*(const Fixed& fixed)
{
	return this->toFloat() * fixed.toFloat();
}

float Fixed::operator/(const Fixed& fixed)
{
	return this->toFloat() / fixed.toFloat();
}

Fixed& Fixed::operator++()
{
	++(this->value);
	return *this;
}

Fixed& Fixed::operator--()
{
	--(this->value);
	return *this;
}

const Fixed Fixed::operator++(int)
{
	Fixed tmp = *this;
	++(this->value);
	return tmp;
}

const Fixed Fixed::operator--(int)
{
	Fixed tmp = *this;
	--(this->value);
	return tmp;
}

std::ostream& operator<<(std::ostream &os, const Fixed& fixed)
{
	os << fixed.toFloat();
	return os;
}