/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongele <seongele@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 00:11:04 by seongele          #+#    #+#             */
/*   Updated: 2022/06/21 00:11:04 by seongele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
private:
	AMateria* materias_[4];

public:
	MateriaSource();
	MateriaSource(const MateriaSource& ms);
	~MateriaSource();
	MateriaSource& operator=(const MateriaSource& ms);

	AMateria* copyMateria(int i) const;
	void learnMateria(AMateria* m);
	AMateria* createMateria(std::string const& type);
};

#endif