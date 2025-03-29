/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meferraz <meferraz@student.42porto.pt>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 17:27:54 by meferraz          #+#    #+#             */
/*   Updated: 2025/03/29 10:13:14 by meferraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Harl.hpp"
#include "../inc/ansi.h"

void harlFilter(std::string level, Harl &harl);

/**
 * @brief Prints a header line.
 *
 * This function prints a green header line with a centered title
 * to the standard output. It is used to visually separate different
 * sections of the program and to provide a title for the program.
 */
static void printHeader()
{
	std::cout << BGRN << "=====================================" << RESET << std::endl;
	std::cout << BWHT << "         Harl Complaint System       " << RESET << std::endl;
	std::cout << BGRN << "=====================================" << RESET << std::endl;
}

/**
 * @brief Prints a separator line.
 *
 * This function prints a green separator line to the standard output.
 * It is used to visually separate different sections of the program.
 */
static void printSeparator()
{
	std::cout << GRN << "-------------------------------------" << RESET << std::endl;
}

/**
 * @brief Program entry point.
 *
 * This is the main entry point of the program. It prints a header line,
 * followed by a separator line, and then runs the tests. The tests are
 * divided into two sections: the first section are the tests from the
 * subject, and the second section are the additional tests. The program
 * prints a separator line after each section. Finally, it prints a green
 * success message and a separator line before exiting.
 *
 * @param argc The number of command-line arguments.
 * @param argv The command-line arguments.
 *
 * @return EXIT_SUCCESS if the program runs successfully, and EXIT_FAILURE
 * otherwise.
 */
int main(int argc, char **argv)
{
	printHeader();
	printSeparator();

	if (argc != 2)
	{
		std::cerr << YEL << "Usage: " << argv[0] << " <complaint_level>" << RESET << std::endl;
		std::cerr << CYN << "Available levels: DEBUG, INFO, WARNING, ERROR" << RESET << std::endl;
		return 1;
	}

	Harl harl;

	std::string level = argv[1];
	printSeparator();
	std::cout << BYEL "Complaint level: " << YELHB << level << BYEL << " 💬" << RESET << std::endl;
	harlFilter(level, harl);
	printSeparator();
	std::cout << GRN << "Program execution completed successfully! 🎉" << RESET << std::endl;
	printSeparator();

	return 0;
}

/**
 * @brief Filter for Harl's complain method.
 *
 * This function filters the level argument and calls Harl's complain
 * method with the appropriate level.
 *
 * @param level The level of the complaint.
 * @param harl Instance of Harl class.
 */
void harlFilter(std::string level, Harl &harl)
{
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int index = -1;
	for (int i = 0; i < 4; i++)
	{
		if (level == levels[i])
		{
			index = i;
			break;
		}
	}
	switch (index)
	{
	case DEBUG:
		harl.complain("DEBUG");
		harl.complain("INFO");
		harl.complain("WARNING");
		harl.complain("ERROR");
		break;
	case INFO:
		harl.complain("INFO");
		harl.complain("WARNING");
		harl.complain("ERROR");
		break;
	case WARNING:
		harl.complain("WARNING");
		harl.complain("ERROR");
		break;
	case ERROR:
		harl.complain("ERROR");
		break;
	default:
		std::cout << REDHB << "[ Probably complaining about insignificant problems 🤐 ]"
				  << RESET << std::endl;
		break;
	}
}
