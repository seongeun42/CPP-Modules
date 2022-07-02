/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongele <seongele@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 17:22:33 by seongele          #+#    #+#             */
/*   Updated: 2022/07/02 17:22:33 by seongele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <algorithm>

class NotFoundException : public std::exception
{
public:
	const char* what() const throw()
	{
		return "Target not found";
	}
};

template <typename T>
typename T::iterator easyfind(T& c, int target)
{
	typename T::iterator it = std::find(c.begin(), c.end(), target);
	if (it == c.end())
		throw NotFoundException();
	return it;
}
