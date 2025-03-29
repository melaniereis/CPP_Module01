/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meferraz <meferraz@student.42porto.pt>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 21:59:28 by meferraz          #+#    #+#             */
/*   Updated: 2025/03/29 09:04:09 by meferraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <string>
#include <cstdlib>
#include "ansi.h"

class Weapon
{
private:
	std::string _type;

public:
	Weapon(std::string type);
	~Weapon(void);
	const std::string &getType(void) const;
	void setType(std::string type);
};

#endif
