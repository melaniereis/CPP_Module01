/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meferraz <meferraz@student.42porto.pt>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 21:55:35 by meferraz          #+#    #+#             */
/*   Updated: 2025/03/29 09:30:36 by meferraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/HumanA.hpp"
#include "../inc/HumanB.hpp"
#include "../inc/Weapon.hpp"
#include "../inc/ansi.h"

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
	std::cout << BLUHB << "       Human and Weapon Demo         " << RESET << std::endl;
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
 * This is the main entry point of the program. It prints a header
 * line, followed by a separator line, and then runs the tests. The
 * tests are divided into two sections: the first section are the tests
 * from the subject, and the second section are the additional tests.
 * The program prints a separator line after each section. Finally, it
 * prints a green success message and a separator line before exiting.
 */
int main(void)
{
	printHeader();
	printSeparator();

	// Tests from the subject
	std::cout << YELHB << "            Subject Tests            " << RESET << std::endl;
	printSeparator();
	std::cout << std::endl;

	{
		Weapon club = Weapon("crude spiked club");
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("some other type of club");
		bob.attack();
	}
	{
		Weapon club = Weapon("crude spiked club");
		HumanB jim("Jim");
		jim.setWeapon(club);
		jim.attack();
		club.setType("some other type of club");
		jim.attack();
	}

	std::cout << std::endl;
	printSeparator();

	// Additional tests
	std::cout << MAGHB << "          Additional Tests           " << RESET << std::endl;
	printSeparator();
	std::cout << std::endl;

	{
		Weapon sword = Weapon("Long Sword");
		HumanA alice("Alice", sword);
		alice.attack();
		sword.setType("Short Sword");
		alice.attack();
	}
	{
		Weapon dagger = Weapon("Dagger");
		HumanB charlie("Charlie");
		charlie.setWeapon(dagger);
		charlie.attack();
		dagger.setType("Throwing Dagger");
		charlie.attack();
	}
	{
		HumanB dave("Dave");
		dave.attack();
	}

	std::cout << std::endl;
	printSeparator();

	std::cout << GRN << "Program execution completed successfully!" << RESET << std::endl;
	printSeparator();

	return EXIT_SUCCESS;
}
