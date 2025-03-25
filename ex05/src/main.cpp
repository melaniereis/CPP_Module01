/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meferraz <meferraz@student.42porto.pt>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 17:27:54 by meferraz          #+#    #+#             */
/*   Updated: 2025/03/25 21:32:25 by meferraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Harl.hpp"
#include "../inc/ansi.h"

/**
 * @brief Prints a header line.
 *
 * This function prints a green header line with a centered title
 * to the standard output. It is used to visually separate different
 * sections of the program and to provide a title for the program.
 */
static void printHeader() {
	std::cout << BGRN << "=====================================" << RESET << std::endl;
	std::cout << BWHT << "          Harl Complaint System         " << RESET << std::endl;
	std::cout << BGRN << "=====================================" << RESET << std::endl;
}

/**
 * @brief Prints a separator line.
 *
 * This function prints a green separator line to the standard output.
 * It is used to visually separate different sections of the program.
 */
static void printSeparator() {
	std::cout << GRN << "-------------------------------------" << RESET << std::endl;
}

int main(void)
{
	printHeader();
	printSeparator();

	Harl harl;

	std::cout << BYEL "Welcome to the Harl Complaint System! 💬" RESET << std::endl;
	std::cout << CYN "Available complaint levels: DEBUG, INFO, WARNING, ERROR" RESET << std::endl;
	std::cout << MAG "Type 'exit' to leave the system." RESET << std::endl;

	printSeparator();

	std::string level;
	while (true)
	{
		std::cout << BLU "Enter your complaint level: " RESET;
		std::cin >> level;

		if (level == "exit")
		{
			std::cout << RED "Exiting the system... Goodbye! 👋" RESET << std::endl;
			break;
		}

		// Validate input
		while (level != "DEBUG" && level != "INFO" && level != "WARNING" && level != "ERROR")
		{
			std::cout << YEL "Invalid level. Please type DEBUG, INFO, WARNING, or ERROR." RESET << std::endl;
			std::cout << BLU "Enter your complaint level: " RESET;
			std::cin >> level;

			if (level == "exit")
			{
				std::cout << RED "Exiting the system... Goodbye! 👋" RESET << std::endl;
				return 0;
			}
		}

		// Call Harl's complain method
		harl.complain(level);
		printSeparator();
	}

	return 0;
}
