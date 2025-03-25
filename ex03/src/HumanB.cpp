/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meferraz <meferraz@student.42porto.pt>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 22:00:23 by meferraz          #+#    #+#             */
/*   Updated: 2025/03/25 16:46:07 by meferraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/HumanB.hpp"

/**
 * @brief Construct a new HumanB object.
 *
 * @param name The name of the HumanB.
 *
 * When a HumanB is created, its name is printed to the standard output.
 */
HumanB::HumanB(std::string name): _name(name)
{
	std::cout << GRN << "HumanB created with name " << GRNHB << this->_name <<
	GRN << " ✅" << RESET << std::endl;
}

/**
 * @brief Destroy the HumanB object.
 *
 * When a HumanB is destroyed, its name and (if applicable) the type of weapon
 * it is holding are printed to the standard output. If no weapon is set, will
 * print that the HumanB is destroyed with no weapon.
 */
HumanB::~HumanB(void)
{
	if (this->_weapon)
		std::cout << RED << "HumanB destroyed with name " << REDHB << this->_name
		<< RED << " and weapon " << REDHB << this->_weapon->getType() << RED
		<< " ❌" << RESET << std::endl;
	else
		std::cout << RED << "HumanB destroyed with name " << REDHB << this->_name
		<< RED << " ❌" << RESET << std::endl;
}

/**
 * Prints an attack message to the console, including the name of the
 * HumanB and the type of weapon being used. If no weapon is set, will
 * print that the HumanB is attacking with their bare hands.
 */
void HumanB::attack(void) const
{
	if (this->_weapon)
		std::cout << YEL << "HumanB " << YELHB << this->_name << YEL <<
		" attacks with his " << YELHB << this->_weapon->getType() << YEL
		<< " 💥" << RESET << std::endl;
	else
		std::cout << YEL << "HumanB " << YELHB << this->_name << YEL <<
		" attacks with his bare hands" << YEL << " 💥" << RESET << std::endl;
}

/**
 * Sets the weapon that the HumanB is holding. This is used to
 * determine what type of attack the HumanB will make. If no weapon
 * is set, the HumanB will make an attack with their bare hands.
 *
 * @param weapon The weapon to set for the HumanB.
 */
void HumanB::setWeapon(Weapon& weapon)
{
	this->_weapon = &weapon;
}
