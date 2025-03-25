/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meferraz <meferraz@student.42porto.pt>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 16:08:08 by meferraz          #+#    #+#             */
/*   Updated: 2025/03/25 16:39:30 by meferraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/main.hpp"

/**
 * @brief Prints a header line.
 *
 * This function prints a green header line with a centered title
 * to the standard output. It is used to visually separate different
 * sections of the program and to provide a title for the program.
 */
static void printHeader() {
	std::cout << BGRN << "=====================================" << RESET << std::endl;
	std::cout << BLUHB << "       String Replacement Demo       " << RESET << std::endl;
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

	if (argc != 4)
	{
		std::cerr << YEL << "Usage: " << argv[0] << " <filename> <s1> <s2>" << RESET << std::endl;
		return (EXIT_FAILURE);
	}

	std::string filename = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3];

	printSeparator();

	std::cout << MAG << "Reading file: " << MAGHB << filename << MAG << " 📄" << RESET << std::endl;
	std::string fileContent;
	if (!readFile(filename, fileContent))
	{
		std::cerr << RED << "Error reading file: " << REDHB << filename << RED << " ❌" << RESET << std::endl;
		return (EXIT_FAILURE);
	}

	printSeparator();

	std::cout << CYN << "Replacing " << CYNHB << s1 << CYN << " with " << CYNHB << s2 << CYN << " 🔍" << RESET << std::endl;
	std::string replacedContent = replaceString(fileContent, s1, s2);

	printSeparator();

	// Write to a new file instead of overwriting the original
	std::string newFilename = filename + ".replace";
	std::cout << BYEL << "Writing to new file: " << YELHB << newFilename << BYEL << " 📝" << RESET << std::endl;
	if (!writeFile(newFilename, replacedContent))
	{
		std::cerr << RED << "Error writing to file: " << REDHB << newFilename << RED << " ❌" << RESET << std::endl;
		return (EXIT_FAILURE);
	}

	printSeparator();

	std::cout << GRN << "Program execution completed successfully! 🎉" << RESET << std::endl;
	printSeparator();

	return (EXIT_SUCCESS);
}
