/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongele <seongele@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 15:58:02 by seongele          #+#    #+#             */
/*   Updated: 2022/06/08 00:13:07 by seongele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : value_(0)
{
}

Fixed::Fixed(const int v) : value_(v << Fixed::bit)
{
}

Fixed::Fixed(const float v) : value_((int) roundf(v * (1 << Fixed::bit)))
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
	value_ = raw;
}

int Fixed::getRawBits() const
{
	return value_;
}

float Fixed::toFloat() const
{
	return (value_ / (float) (1 << Fixed::bit));
}

int Fixed::toInt() const
{
	return value_ >> Fixed::bit;
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
	value_ = fixed.getRawBits();
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
	++value_;
	return *this;
}

Fixed& Fixed::operator--()
{
	--value_;
	return *this;
}

const Fixed Fixed::operator++(int)
{
	Fixed tmp = *this;
	++value_;
	return tmp;
}

const Fixed Fixed::operator--(int)
{
	Fixed tmp = *this;
	--value_;
	return tmp;
}

std::ostream& operator<<(std::ostream &os, const Fixed& fixed)
{
	os << fixed.toFloat();
	return os;
}