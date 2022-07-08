/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongele <seongele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 16:02:08 by seongele          #+#    #+#             */
/*   Updated: 2022/07/08 15:35:18 by seongele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

template <typename T>
void iter(T* arr, size_t len, void (*f)(T&))
{
	for (size_t i = 0; i < len; i++)
		f(arr[i]);
}

template <typename T>
void iter(T* arr, size_t len, void (*f)(const T&))
{
	for (size_t i = 0; i < len; i++)
		f(arr[i]);
}

#endif