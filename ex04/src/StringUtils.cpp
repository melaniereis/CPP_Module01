/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   StringUtils.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meferraz <meferraz@student.42porto.pt>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 16:31:21 by meferraz          #+#    #+#             */
/*   Updated: 2025/03/25 16:40:23 by meferraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/StringUtils.hpp"

/**
 * Replace all occurrences of s1 in content with s2.
 * @param content The string to have replacements made in.
 * @param s1 The string to be replaced.
 * @param s2 The string to replace s1 with.
 * @return The modified copy of content.
 */
std::string replaceString(const std::string &content, const std::string &s1, const std::string &s2)
{
	std::string result = "";
	size_t pos = 0;
	size_t contentLen = content.length();
	while (pos < contentLen)
	{
		size_t foundPos = content.find(s1, pos);
		if (foundPos == std::string::npos)
		{
			result += content.substr(pos);
			break;
		}

		result += content.substr(pos, foundPos - pos);
		result += s2;
		pos = foundPos + s1.length();
	}
	return result;
}
