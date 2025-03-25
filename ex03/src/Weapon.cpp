/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meferraz <meferraz@student.42porto.pt>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 22:00:33 by meferraz          #+#    #+#             */
/*   Updated: 2025/03/25 16:45:44 by meferraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Weapon.hpp"

/**
 * @brief Constructs a new Weapon object with the specified type.
 *
 * This constructor initializes the Weapon object and sets its type
 * using the provided string.
 *
 * @param type The type of the weapon as a string.
 */

Weapon::Weapon(std::string type) : _type(type)
{
}

/**
 * @brief Destructor.
 *
 * This is the destructor of the Weapon class. It is empty since there is
 * nothing to clean up.
 */
Weapon::~Weapon(void)
{
}

const std::string& Weapon::getType(void) const
{
	return this->_type;
}

/**
 * @brief Sets the type of the weapon.
 *
 * This method updates the Weapon's internal state to reflect the new type.
 *
 * @param type The new type of the weapon as a string.
 */
void Weapon::setType(std::string type)
{
	this->_type = type;
}
