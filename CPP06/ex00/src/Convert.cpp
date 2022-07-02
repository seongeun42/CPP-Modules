/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongele <seongele@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 22:18:40 by seongele          #+#    #+#             */
/*   Updated: 2022/06/30 22:18:40 by seongele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

Convert::Convert() : input_(NULL), value_(0.0), isValid_(false)
{
}

Convert::Convert(std::string input) : input_(input)
{
	char* tmp = NULL;
	// 문자열에서 숫자와 그 외로 분리
	value_ = std::strtod(input.c_str(), &tmp);
	// tmp가 f만 있는 게 아니라면 유효하지 않은 문자열로 처리
	isValid_ = !(*tmp) || (std::strlen(tmp) == 1 && tmp[0] == 'f') ? true : false;
}

Convert::Convert(const Convert& c) : input_(c.getInput()), value_(c.getValue()), isValid_(c.getIsValid())
{
}

Convert::~Convert()
{
}

Convert& Convert::operator=(const Convert& c)
{
	if (this == &c)
		return *this;

	input_ = c.getInput();
	value_ = c.getValue();
	isValid_ = c.getIsValid();
	return *this;
}

const std::string& Convert::getInput() const
{
	return input_;
}

const double& Convert::getValue() const
{
	return value_;
}

const bool& Convert::getIsValid() const
{
	return isValid_;
}

char Convert::toChar()
{
	// 숫자가 아닌 값 예외 처리
	if (!this->getIsValid() || std::isnan(getValue()) || std::isinf(getValue()))
		throw ImpossibleException();

	// char형 범위 외 오버플로우 예외 처리
	if (this->getValue() < -128.0 || this->getValue() > 127.0)
		throw OverflowException();

	// 출력 불가능 예외 처리
	if (this->getValue() < 32.0 || this->getValue() > 126.0)
		throw NonDisplayableException();

	return static_cast<char>(value_);
}

int Convert::toInt()
{
	// 숫자가 아닌 값 예외 처리
	if (!this->getIsValid() || std::isnan(getValue()) || std::isinf(getValue()))
		throw ImpossibleException();

	// int형 범위 외 오버플로우 예외 처리
	if (this->getValue() < INT_MIN || this->getValue() > INT_MAX)
		throw OverflowException();

	return static_cast<int>(value_);
}

float Convert::toFloat()
{
	// 숫자 아닌 값 예외 처리
	if (!this->getIsValid())
		throw ImpossibleException();

	// nan과 inf 값 처리 : 여기서 안 하면 오버플로우 처리 됨
	if (std::isnan(getValue()) || std::isinf(getValue()))
		return static_cast<float>(value_);

	// float형 오버플로우 예외 처리
	if (this->getValue() > FLT_MAX)
		throw OverflowException();

	return static_cast<float>(value_);
}

double Convert::toDouble()
{
	// 숫자 아닌 값 예외 처리
	if (!this->getIsValid())
		throw ImpossibleException();

	// nan과 inf 값 처리 : 여기서 안 하면 오버플로우 처리 됨
	if (std::isnan(getValue()) || std::isinf(getValue()))
		return static_cast<double>(value_);

	// double형 오버플로우 예외 처리
	if (this->getValue() > DBL_MAX)
		throw OverflowException();

	return static_cast<double>(value_);
}

void Convert::printChar()
{
	try
	{
		std::cout << "char: ";
		char c = toChar();
		std::cout << "'" << c << "'";
	}
	catch (std::exception& e)
	{
		std::cout << e.what();
	}
}

void Convert::printInt()
{
	try
	{
		std::cout << "int: ";
		std::cout << toInt();
	}
	catch (std::exception& e)
	{
		std::cout << e.what();
	}
}

void Convert::printFloat()
{
	try
	{
		std::cout << "float: ";
		float f = toFloat();
		if (std::isinf(f))	// inf는 부호까지 출력
			std::cout << std::showpos << f << "f";
		else if (f != std::floor(f))	// int형과 비교하면 범위 외 값은 못 잡아서 내림 함수 씀
			std::cout << std::setprecision(std::numeric_limits<float>::digits10) << f << "f";
		else
			std::cout << std::setprecision(std::numeric_limits<float>::digits10) << f << ".0f";
	}
	catch (std::exception& e)
	{
		std::cout << e.what();
	}
}

void Convert::printDouble()
{
	try
	{
		std::cout << "double: ";
		double d = toDouble();
		if (std::isinf(d))	// inf는 부호까지 출력
			std::cout << std::showpos << d;
		else if (d != std::floor(d))	// int형과 비교하면 범위 외 값은 못 잡아서 내림 함수 씀
			std::cout << std::setprecision(std::numeric_limits<double>::digits10) << d;
		else
			std::cout << std::setprecision(std::numeric_limits<double>::digits10) << d << ".0";
	}
	catch (std::exception& e)
	{
		std::cout << e.what();
	}
}

void Convert::printAll()
{
	printChar();
	std::cout << std::endl;
	printInt();
	std::cout << std::endl;
	printFloat();
	std::cout << std::endl;
	printDouble();
	std::cout << std::endl;
}

const char* Convert::ImpossibleException::what() const throw()
{
	return "impossible";
}

const char* Convert::OverflowException::what() const throw()
{
	return "overflow";
}

const char* Convert::NonDisplayableException::what() const throw()
{
	return "Non displayable";
}
