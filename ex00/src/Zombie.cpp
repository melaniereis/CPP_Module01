/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meferraz <meferraz@student.42porto.pt>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 14:37:15 by meferraz          #+#    #+#             */
/*   Updated: 2025/03/24 21:40:25 by meferraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Zombie.hpp"

/**
 * @brief Construct a new Zombie object.
 *
 * @param name The name of the Zombie. If omitted, the Zombie's name defaults to "Zombie".
 */
Zombie::Zombie(std::string name)
{
	this->_name = name;
}

/**
 * @brief Construct a new Zombie object without a name.
 *
 * The Zombie's name defaults to "Zombie".
 */
Zombie::Zombie(void)
{
	this->_name = "Zombie";
}

/**
 * @brief Destroy the Zombie object.
 *
 * When a Zombie is destroyed, its name and " has died." are printed to the standard output.
 */
Zombie::~Zombie(void)
{
	std::cout << this->_name << " has died." << std::endl;
}

/**
 * @brief Makes the Zombie announce its presence.
 *
 * When a Zombie is told to announce itself, it prints its name followed by ":
 * BraiiiiiiinnnzzzZ..." to the standard output.
 */
void Zombie::announce(void)
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
