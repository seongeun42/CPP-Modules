/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongele <seongele@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 15:58:02 by seongele          #+#    #+#             */
/*   Updated: 2022/06/07 23:22:41 by seongele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : value(0)
{
	std::cout << "Default constructor called\n";
}

Fixed::Fixed(const int v) : value(v << Fixed::bit)
{
	std::cout << "Int constructor called\n";
}

Fixed::Fixed(const float v) : value((int) roundf(v * (1 << Fixed::bit)))
{
	std::cout << "Float constructor called\n";
}

Fixed::Fixed(const Fixed& fixed)
{
	std::cout << "Copy constructor called\n";
	*this = fixed;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called\n";
}

Fixed& Fixed::operator=(const Fixed& fixed)
{
	std::cout << "Copy assignment operator called\n";
	this->value = fixed.value;
	return *this;
}

void Fixed::setRawBits(const int raw)
{
	std::cout << "setRawBits member function called\n";
	this->value = raw;
}

int Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called\n";
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

std::ostream& operator<<(std::ostream &os, const Fixed& fixed)
{
	os << fixed.toFloat();
	return os;
}