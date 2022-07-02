/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongele <seongele@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 11:08:47 by seongele          #+#    #+#             */
/*   Updated: 2022/07/02 11:08:47 by seongele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data() : value_(0)
{
}

Data::Data(const int value) : value_(value)
{
}

Data::Data(const Data& data) : value_(data.getValue())
{
}

Data::~Data()
{
}

Data& Data::operator=(const Data& data)
{
	if (this == &data)
		return *this;

	value_ = data.getValue();

	return *this;
}

const int& Data::getValue() const
{
	return value_;
}



uintptr_t serialize(Data* ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

Data* deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data*>(raw);
}

