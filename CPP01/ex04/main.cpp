/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongele <seongele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 15:56:35 by seongele          #+#    #+#             */
/*   Updated: 2022/05/18 15:56:35 by seongele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int	main(int argc, char* argv[])
{
	if (argc != 4)
	{
		std::cerr << "Program needs 3 arguments (filename, string1, string2)\n";
		return 1;
	}

	char* file = argv[1];
	std::string target = argv[2];
	std::string replace = argv[3];

	std::string line;
	std::ifstream ifs;
	ifs.open(file);
	if (ifs.fail())
	{
		std::cerr << file << " open failed!\n";
		return 1;
	}

	std::ofstream ofs;
	ofs.open("output.txt");
	if (ofs.fail())
	{
		std::cerr << "output.txt open failed!\n";
		return 1;
	}

	while (!ifs.eof())
	{
		std::getline(ifs, line);
		size_t idx = line.find(target);
		if (idx != std::string::npos)
		{
			line.erase(idx, target.length());
			line.insert(idx, replace);
		}
		ofs << line << '\n';
	}

	ifs.close();
	ofs.close();

	return 0;
}