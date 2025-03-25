/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FileUtils.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meferraz <meferraz@student.42porto.pt>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 16:31:53 by meferraz          #+#    #+#             */
/*   Updated: 2025/03/25 16:32:03 by meferraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILEUTILS_HPP
# define FILEUTILS_HPP

# include <string>
# include <fstream>

bool readFile(const std::string &filename, std::string &content);
bool writeFile(const std::string &filename, const std::string &content);

#endif
