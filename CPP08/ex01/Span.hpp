/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongele <seongele@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 18:13:35 by seongele          #+#    #+#             */
/*   Updated: 2022/07/02 18:13:35 by seongele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>

class Span
{
private:
	std::vector<int> arr_;
	unsigned int n_;
	Span();

public:
	Span(unsigned int n);
	Span(const Span& s);
	~Span();
	Span& operator=(const Span& s);

	const unsigned int& getN() const;
	const std::vector<int>& getArray() const;

	void addNumber(int num);
	void addNumbers(const std::vector<int>::iterator& begin, const std::vector<int>::iterator& end);

	unsigned int shortestSpan();
	unsigned int longestSpan();

	class NotFoundException : public std::exception
	{
	public:
		const char* what() const throw();
	};

	class AlreadyFullException : public std::exception
	{
	public:
		const char* what() const throw();
	};
};

#endif
