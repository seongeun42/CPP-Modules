/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongele <seongele@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 22:18:32 by seongele          #+#    #+#             */
/*   Updated: 2022/06/30 22:18:32 by seongele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
#define CONVERT_HPP

#include <iostream>
#include <string>
#include <exception>
#include <cstring>	// strlen
#include <cmath>	// isnan, isinf, floor
#include <cstdlib>	// strtod
#include <climits> 	// 소수점 최대 자리수
#include <limits>	// int 최대 최소
#include <cfloat>	// float, double 최대
#include <iomanip>	// 소수점 자리수 조절

class Convert
{
private:
	std::string input_;
	double value_;
	bool isValid_;

public:
	Convert();
	Convert(std::string input);
	Convert(const Convert& c);
	~Convert();
	Convert& operator=(const Convert& c);

	const std::string& getInput() const;
	const double& getValue() const;
	const bool& getIsValid() const;
	
	char toChar();
	int toInt();
	float toFloat();
	double toDouble();

	void printChar();
	void printInt();
	void printFloat();
	void printDouble();
	void printAll();

	class ImpossibleException : public std::exception
	{
	public:
		const char* what() const throw();
	};

	class OverflowException : public std::exception
	{
	public:
		const char* what() const throw();
	};

	class NonDisplayableException : public std::exception
	{
	public:
		const char* what() const throw();
	};
};

#endif