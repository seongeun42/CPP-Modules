/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongele <seongele@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 18:13:23 by seongele          #+#    #+#             */
/*   Updated: 2022/07/02 18:13:23 by seongele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : arr_(0, 0), n_(0)
{
}

Span::Span(unsigned int n) : arr_(0, 0), n_(n)
{
}

Span::Span(const Span& s) : n_(s.getN())
{
	std::vector<int> sArr = s.getArray();
	arr_.resize(sArr.size());
	std::copy(sArr.begin(), sArr.end(), arr_.begin());
}

Span::~Span()
{
}

Span& Span::operator=(const Span& s)
{
	if (this == &s)
		return *this;

	n_ = s.getN();
	std::vector<int> sArr = s.getArray();
	arr_.clear();
	arr_.resize(sArr.size());
	std::copy(sArr.begin(), sArr.end(), arr_.begin());

	return *this;
}

const unsigned int& Span::getN() const
{
	return n_;
}

const std::vector<int>& Span::getArray() const
{
	return arr_;
}

void Span::addNumber(int num)
{
	if (arr_.size() == n_)
		throw AlreadyFullException();
	arr_.push_back(num);
}

void Span::addNumbers(const std::vector<int>::iterator& begin, const std::vector<int>::iterator& end)
{
	for (std::vector<int>::iterator it = begin; it != end; it++)
	{
		if (arr_.size() == n_)
			throw AlreadyFullException();
		arr_.push_back(*it);
	}
}

// 간격이 가장 작은 값
unsigned int Span::shortestSpan()
{
	if (arr_.size() < 2)
		throw NotFoundException();
	
	int ans = 2147483647;
	std::vector<int> tmp = arr_;

	std::sort(tmp.begin(), tmp.end());

	for (unsigned int i = 0; i < arr_.size() - 1; i++)
		ans = std::min(ans, tmp.at(i + 1) - tmp.at(i));

	return ans;
}

// 최대값 - 최소값
unsigned int Span::longestSpan()
{
	if (arr_.size() < 2)
		throw NotFoundException();

	int minV = *std::min_element(arr_.begin(), arr_.end());
	int maxV = *std::max_element(arr_.begin(), arr_.end());

	return maxV - minV;
}

const char* Span::NotFoundException::what() const throw()
{
	return "Span not found!";
}

const char* Span::AlreadyFullException::what() const throw()
{
	return "Already Full!";
}
