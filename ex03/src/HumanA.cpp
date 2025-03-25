/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meferraz <meferraz@student.42porto.pt>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 21:55:49 by meferraz          #+#    #+#             */
/*   Updated: 2025/03/25 15:30:52 by meferraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) : _name(name), _weapon(weapon)
{
	std::cout << GRN << "HumanA created with name " << GRNHB << this->_name <<
	GRN << " and weapon " << GRNHB << this->_weapon.getType() << GRN << " ✅" <<
	RESET << std::endl;
}

HumanA::~HumanA(void)
{
	std::cout << RED << "HumanA destroyed with name " << REDHB << this->_name <<
	RED << " and weapon " << REDHB << this->_weapon.getType() << RED << " ❌" <<
	RESET << std::endl;
}

void HumanA::attack(void) const
{
	std::cout << YEL << "HumanA " << YELHB << this->_name << YEL <<
	" attacks with his " << YELHB << this->_weapon.getType() << YEL
	<< " 💥" << RESET << std::endl;
}
