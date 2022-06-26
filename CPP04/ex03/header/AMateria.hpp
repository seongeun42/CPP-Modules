/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongele <seongele@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 00:09:16 by seongele          #+#    #+#             */
/*   Updated: 2022/06/21 00:09:16 by seongele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include "ICharacter.hpp"

class AMateria
{
protected:
	std::string type_;

public:
	AMateria();
	AMateria(const std::string& type);
	AMateria(const AMateria& mt);
	virtual ~AMateria();
	AMateria& operator=(const AMateria& mt);

	std::string const& getType() const;

	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
};

#endif