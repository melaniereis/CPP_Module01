/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meferraz <meferraz@student.42porto.pt>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 14:39:24 by meferraz          #+#    #+#             */
/*   Updated: 2025/03/29 08:59:26 by meferraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>
#include <cstdlib>
#include <sstream>

class Zombie
{
private:
	std::string _name;

public:
	Zombie(std::string name);
	Zombie(void);
	~Zombie(void);
	void announce(void);
	void setName(std::string name);
};

Zombie *zombieHorde(int N, std::string name);

#endif
