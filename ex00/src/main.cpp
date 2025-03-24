/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meferraz <meferraz@student.42porto.pt>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 14:36:54 by meferraz          #+#    #+#             */
/*   Updated: 2025/03/24 15:21:56 by meferraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Zombie.hpp"
#include "../inc/ansi.h"

Zombie* newZombie(std::string name);
void randomChump(std::string name);

/**
 * @brief Prints a header line.
 *
 * This function prints a green header line with a centered title
 * to the standard output. It is used to visually separate different
 * sections of the program and to provide a title for the program.
 */
static void printHeader() {
	std::cout << GRN << "=====================================" << RESET << std::endl;
	std::cout << BLUHB << "          Zombie Memory Demo         " << RESET << std::endl;
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
 * @brief The main entry point of the program.
 *
 * The program creates a header and prompts the user for two zombie names.
 * It then creates a heap-allocated zombie and a stack-allocated zombie,
 * and calls their `announce` method to print out their names.
 * Finally, it deletes the heap-allocated zombie and exits with a success status.
 */
int main(void)
{
	std::string heapZombieName, stackZombieName;

	// Print header
	printHeader();

	// Prompt user for zombie names
	std::cout << YEL "Enter a name for a Heap Zombie: " RESET;
	std::getline(std::cin, heapZombieName);
	std::cout << YEL "Enter a name for a Stack Zombie: " RESET;
	std::getline(std::cin, stackZombieName);

	printSeparator();

	// Heap allocation: Zombie created dynamically
	std::cout << BLU "Creating Heap Zombie..." RESET << std::endl;
	Zombie* heapZombie = newZombie(heapZombieName);
	heapZombie->announce();

	printSeparator();

	// Stack allocation: Zombie created locally
	std::cout << MAG "Creating Stack Zombie..." RESET << std::endl;
	randomChump(stackZombieName);

	printSeparator();

	// Clean up heap memory
	std::cout << RED "Deleting Heap Zombie..." RESET << std::endl;
	delete heapZombie;

	printSeparator();

	// Exit program
	std::cout << GRN "Program execution completed successfully!" RESET << std::endl;
	return EXIT_SUCCESS;
}

