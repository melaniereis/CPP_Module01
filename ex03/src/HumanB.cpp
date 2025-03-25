/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meferraz <meferraz@student.42porto.pt>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 22:00:23 by meferraz          #+#    #+#             */
/*   Updated: 2025/03/25 15:34:30 by meferraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/HumanB.hpp"

HumanB::HumanB(std::string name): _name(name)
{
	std::cout << GRN << "HumanB created with name " << GRNHB << this->_name <<
	GRN << " ✅" << RESET << std::endl;
}

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

void HumanB::setWeapon(Weapon& weapon)
{
	this->_weapon = &weapon;
}
