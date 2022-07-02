/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongele <seongele@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 11:09:04 by seongele          #+#    #+#             */
/*   Updated: 2022/07/02 11:09:04 by seongele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
#define DATA_HPP

#include <iostream>
#include <string>
#include <stdint.h>  // uintptr_t

class Data
{
private:
	int value_;

public:
	Data();
	Data(const int value);
	Data(const Data& data);
	~Data();
	Data& operator=(const Data& data);

	const int& getValue() const;
};

uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);

#endif