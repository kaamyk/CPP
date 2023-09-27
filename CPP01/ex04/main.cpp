/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoine <antoine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 12:39:16 by anvincen          #+#    #+#             */
/*   Updated: 2023/09/27 17:53:11 by antoine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

bool	parseInput(int ac, std::ifstream &infile, std::ofstream &outfile)
{
	if (ac != 4)
	{
		std::cout << "Please, enter 3 arguments : \n"
		<< "\tone file to read and two strings" << std::endl;
		return (1);
	}
	if (infile.is_open() == 0 || outfile.is_open() == 0)
	{
		std::cout << "File failed to open" << std::endl;
		return (1);
	}
	return (0);
}

void	replace(std::ifstream &infile, std::ofstream &outfile, std::string toFind, std::string newString)
{
	size_t			posFind;
	std::string		line;

	while (std::getline(infile, line))
	{
		posFind = line.find(toFind);
		if (posFind == std::string::npos)
		{
			if (line.empty() == 1)
				outfile << std::endl;
			else
				outfile << line;
		}
		else
		{
			posFind = line.find(toFind);
			while(posFind != std::string::npos)
			{
				line.erase(posFind, toFind.length());
				line.insert(posFind, newString);
				posFind = line.find(toFind);
				if (posFind == std::string::npos)
					outfile << line << std::endl;
			}
		}
	}
}

int		main(int ac, char **av)
{
	std::string		outfileName,
					toFind,
					newString;

	if (ac != 4)
	{
		std::cout << "Invalid number of arguments" << std::endl;
		return (1);
	}
	std::ifstream	infile(av[1]);
	outfileName = av[1];
	outfileName.append(".replace");
	std::ofstream	outfile(&outfileName[0]);
	if (parseInput(ac, infile, outfile) == 1)
		return (1);
	toFind = av[2];
	newString = av[3];
	replace(infile, outfile, toFind, newString);
	infile.close();
	outfile.close();
	return (0);
}