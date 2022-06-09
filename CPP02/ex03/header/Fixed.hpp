/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongele <seongele@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 15:58:06 by seongele          #+#    #+#             */
/*   Updated: 2022/06/08 00:00:29 by seongele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
private:
	int value_;
	static const int bit = 8;

public:
	Fixed();
	Fixed(const int v);
	Fixed(const float v);
	Fixed(const Fixed& fixed);
	~Fixed();
	
	void setRawBits(const int raw);
	int getRawBits(void) const;
	
	float toFloat(void) const;
	int toInt(void) const;

	// 정적 멤버 함수 선언만 static을 붙이고, 구현에서는 static 안 붙임. 붙이면 C언어의 static이 됨
	static Fixed& min(Fixed& v1, Fixed& v2);
	static const Fixed& min(const Fixed& v1, const Fixed& v2);
	static Fixed& max(Fixed& v1, Fixed& v2);
	static const Fixed& max(const Fixed& v1, const Fixed& v2);
	
	// 대입 연산자 오버로딩
	Fixed& operator=(const Fixed& fixed);

	// 비교 연산자 오버로딩
	bool operator>(const Fixed& fixed);
	bool operator<(const Fixed& fixed);
	bool operator>=(const Fixed& fixed);
	bool operator<=(const Fixed& fixed);
	bool operator==(const Fixed& fixed);
	bool operator!=(const Fixed& fixed);

	// 사칙 연산자 오버로딩
	float operator+(const Fixed& fixed);
	float operator-(const Fixed& fixed);
	float operator*(const Fixed& fixed);
	float operator/(const Fixed& fixed);
	
	// 전치 증감 연산자
	Fixed& operator++();
	Fixed& operator--();
	// 후치 증감 연산자
	const Fixed operator++(int);
	const Fixed operator--(int);

};

std::ostream& operator<<(std::ostream &os, const Fixed& fixed);

#endif