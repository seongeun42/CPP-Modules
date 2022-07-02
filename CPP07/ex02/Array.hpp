/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongele <seongele@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 16:17:09 by seongele          #+#    #+#             */
/*   Updated: 2022/07/02 16:17:09 by seongele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <cstdlib>
#include <ctime>
#include <exception>

template <typename T>
class Array
{
private:
	T* arr_;
	unsigned int size_;

public:
	Array() : arr_(NULL), size_(0) {}

	Array(unsigned int n) : arr_(new T[n]), size_(n) {}
	
	Array(const Array<T>& a) : size_(a.size())
	{
		arr_ = new T[size_];
		for (unsigned int i = 0; i < size_; i++)
			arr_[i] = a.arr_[i];
	}
	
	~Array() { delete[] arr_; }
	
	Array& operator=(const Array<T>& a)
	{
		if (this == &a)
			return *this;

		if (size_ > 0)
			delete[] arr_;

		size_ = a.size();
		arr_ = new T[size_];
		
		for (unsigned int i = 0; i < size_; i++)
			arr_[i] = a.arr_[i];
		
		return *this;
	}

	const unsigned int& size() const
	{
		return size_;
	}

	// 클래스 명으로 바로 클래스 내 arr_ 사용할 수 있도록 오버라이딩
	T& operator[](long long idx) const
	{
		if (idx < 0 || idx >= size_)
			throw OutOfRangeException();
		return arr_[idx];
	}

	class OutOfRangeException : public std::exception
	{
	public:
		const char* what() const throw()
		{
			return "out of range!";
		}
	};
};

#endif