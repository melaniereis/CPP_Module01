/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meferraz <meferraz@student.42porto.pt>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 21:55:49 by meferraz          #+#    #+#             */
/*   Updated: 2025/03/25 16:45:48 by meferraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/HumanA.hpp"

/**
 * @brief Constructor of the HumanA class.
 *
 * Initializes a new HumanA object with the given name and weapon.
 *
 * @param name The name of the HumanA object.
 * @param weapon A reference to a Weapon object.
 */
HumanA::HumanA(std::string name, Weapon& weapon) : _name(name), _weapon(weapon)
{
	std::cout << GRN << "HumanA created with name " << GRNHB << this->_name <<
	GRN << " and weapon " << GRNHB << this->_weapon.getType() << GRN << " ✅" <<
	RESET << std::endl;
}

/**
 * @brief Destructor of the HumanA class.
 *
 * When a HumanA object is destroyed, it prints a red message to the standard
 * output indicating that it was destroyed with its name and weapon name.
 */
HumanA::~HumanA(void)
{
	std::cout << RED << "HumanA destroyed with name " << REDHB << this->_name <<
	RED << " and weapon " << REDHB << this->_weapon.getType() << RED << " ❌" <<
	RESET << std::endl;
}

/**
 * Prints to the standard output a message saying that this HumanA is attacking
 * with the weapon he's holding.
 */
void HumanA::attack(void) const
{
	std::cout << YEL << "HumanA " << YELHB << this->_name << YEL <<
	" attacks with his " << YELHB << this->_weapon.getType() << YEL
	<< " 💥" << RESET << std::endl;
}
