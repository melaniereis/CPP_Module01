/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FileUtils.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meferraz <meferraz@student.42porto.pt>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 16:30:37 by meferraz          #+#    #+#             */
/*   Updated: 2025/03/29 09:46:24 by meferraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/FileUtils.hpp"

/**
 * Reads the content of a file and stores it in a given string.
 *
 * @param filename name of the file to read
 * @param content string where the file content will be stored
 * @return true if the file was read successfully, false otherwise
 */
bool readFile(const std::string &filename, std::string &content)
{
	std::ifstream file(filename.c_str());
	if (!file.is_open())
		return false;

	std::string line;
	while (std::getline(file, line))
		content += line + "\n";

	file.close();
	return true;
}

/**
 * Writes the given content to a file with the specified filename.
 *
 * @param filename name of the file to write to
 * @param content string containing the content to be written to the file
 * @return true if the file was written successfully, false otherwise
 */

bool writeFile(const std::string &filename, const std::string &content)
{
	std::ofstream file(filename.c_str());
	if (!file.is_open())
		return false;

	file << content;
	file.close();
	return true;
}
