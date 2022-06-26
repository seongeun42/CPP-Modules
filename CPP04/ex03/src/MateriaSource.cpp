/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongele <seongele@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 00:12:21 by seongele          #+#    #+#             */
/*   Updated: 2022/06/21 00:12:21 by seongele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		materias_[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource& ms)
{
	for (int i = 0; i < 4; i++)
		materias_[i] = ms.copyMateria(i);
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		if (materias_[i])
		{
			delete materias_[i];
			materias_[i] = NULL;
		}
		
	}
}

MateriaSource& MateriaSource::operator=(const MateriaSource& ms)
{
	if (this == &ms)
		return *this;

	for (int i = 0; i < 4; i++)
	{
		if (materias_[i])
			delete materias_[i];
		materias_[i] = ms.copyMateria(i);
	}

	return *this;
}

AMateria* MateriaSource::copyMateria(int i) const
{
	return materias_[i] ? materias_[i]->clone() : NULL;
}

void MateriaSource::learnMateria(AMateria* m)
{
	int i;

	for (i = 0; i < 4; i++)
		if (!materias_[i])
			break;

	if (i < 4)
		materias_[i] = m;
	else
		std::cout << "\e[31mMateriaSource memory is full!\e[0m" << std::endl;
}

AMateria* MateriaSource::createMateria(std::string const& type)
{
	for (int i = 0; i < 4; i++)
		if (materias_[i]->getType() == type)
			return materias_[i]->clone();

	std::cout << "\e[31mNo matching types found!\e[0m" << std::endl;
	return NULL;
}
