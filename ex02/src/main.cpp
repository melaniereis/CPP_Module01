/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meferraz <meferraz@student.42porto.pt>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 21:29:07 by meferraz          #+#    #+#             */
/*   Updated: 2025/03/29 09:02:50 by meferraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cstdlib>
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
	std::cout << BLUHB << "             Memory Demo             " << RESET << std::endl;
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
 * @brief The main entry point of the program.
 *
 * The program creates a header, creates a string variable and two references to it,
 * prints out the memory addresses of the string variable and the two references,
 * prints out the string stored in the string variable and the two references,
 * and finally exits with a success status.
 */
int main(void)
{
	printHeader();
	printSeparator();

	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << YEL << "Memory Addresses and Values" << RESET << std::endl;
	printSeparator();

	std::cout << MAG << "The memory address of the string variable: " << RESET << &str << std::endl;
	std::cout << CYN << "The memory address held by stringPTR: " << RESET << stringPTR << std::endl;
	std::cout << BYEL << "The memory address held by stringREF: " << RESET << &stringREF << std::endl;

	printSeparator();

	std::cout << BBLU << "The string held by the string variable: " << RESET << str << std::endl;
	std::cout << BMAG << "The string held by stringPTR: " << RESET << *stringPTR << std::endl;
	std::cout << BCYN << "The string held by stringREF: " << RESET << stringREF << std::endl;

	printSeparator();

	std::cout << GRN << "Program execution completed successfully!" << RESET << std::endl;
	printSeparator();

	return EXIT_SUCCESS;
}
