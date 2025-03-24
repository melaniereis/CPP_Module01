/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meferraz <meferraz@student.42porto.pt>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 14:36:54 by meferraz          #+#    #+#             */
/*   Updated: 2025/03/24 15:58:41 by meferraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Zombie.hpp"
#include "../inc/ansi.h"

/**
 * @brief Prints a header line.
 *
 * This function prints a green header line with a centered title
 * to the standard output. It is used to visually separate different
 * sections of the program and to provide a title for the program.
 */
static void printHeader() {
	std::cout << GRN << "=====================================" << RESET << std::endl;
	std::cout << BLUHB << "          Zombie Horde Demo         " << RESET << std::endl;
	std::cout << GRN << "=====================================" << RESET << std::endl;
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

/**
 * @brief Parses command-line arguments to determine the size of the zombie horde and their base name.
 *
 * @param argc The number of command-line arguments.
 * @param argv An array of command-line arguments.
 * @param hordeSize Output parameter for the size of the horde.
 * @param hordeName Output parameter for the base name of the horde.
 * @return True if parsing is successful, false otherwise.
 */
static bool parseArguments(int argc, char* argv[], int& hordeSize, std::string& hordeName)
{
	if (argc != 3)
	{
		std::cerr << "Usage: " << argv[0] << " <horde_size> <base_name>" << std::endl;
		return false;
	}

	try {
		hordeSize = std::stoi(argv[1]);
		if (hordeSize <= 0)
			throw std::invalid_argument("Horde size must be a positive integer.");
		hordeName = argv[2];
	} catch (const std::exception& e) {
		std::cerr << "Error parsing arguments: " << e.what() << std::endl;
		return false;
	}

	return true;
}

/**
 * @brief Creates a zombie horde and makes each zombie announce itself.
 *
 * @param hordeSize The size of the zombie horde.
 * @param hordeName The base name of the zombies.
 * @return True if successful, false otherwise.
 */
static bool createAndAnnounceHorde(int hordeSize, std::string hordeName)
{
	try
	{
		Zombie* horde = zombieHorde(hordeSize, hordeName);
		std::cout << BLU "Creating Zombie Horde..." RESET << std::endl;
		printSeparator();
		std::cout << MAG "Zombie Horde Announcing..." RESET << std::endl;
		for (int i = 0; i < hordeSize; i++)
			horde[i].announce();
		printSeparator();
		std::cout << RED "Deleting Zombie Horde..." RESET << std::endl;
		delete[] horde; // Use delete[] for arrays
		printSeparator();
		return true;
	} catch (const std::exception& e)
	{
		std::cerr << "An error occurred: " << e.what() << std::endl;
		return false;
	}
}

/**
 * @brief The main entry point of the program.
 *
 * The program creates a header, parses command-line arguments, creates a zombie horde,
 * makes each zombie announce itself, and finally deletes the horde.
 */
int main(int argc, char** argv)
{
	int hordeSize;
	std::string hordeName;

	if (!parseArguments(argc, argv, hordeSize, hordeName))
		return EXIT_FAILURE;

	printHeader();
	printSeparator();

	if (!createAndAnnounceHorde(hordeSize, hordeName))
		return EXIT_FAILURE;

	std::cout << GRN "Program execution completed successfully!" RESET << std::endl;
	return EXIT_SUCCESS;
}
