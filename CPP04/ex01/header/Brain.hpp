/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongele <seongele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 12:27:17 by seongele          #+#    #+#             */
/*   Updated: 2022/06/18 14:04:08 by seongele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Brain_HPP
#define Brain_HPP

class Brain
{
private:
	std::string ideas_[100];

public:
	Brain();
	Brain(const Brain& br);
	~Brain();
	Brain& operator=(const Brain& br);
};

#endif