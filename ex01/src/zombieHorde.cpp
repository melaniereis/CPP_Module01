/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meferraz <meferraz@student.42porto.pt>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 15:29:30 by meferraz          #+#    #+#             */
/*   Updated: 2025/03/29 09:01:12 by meferraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Zombie.hpp"
#include "../inc/ansi.h"

/**
 * @brief Allocates an array of Zombie objects on the heap with a given base name.
 *
 * Allocates an array of Zombie objects on the heap with a given base name.
 * Each Zombie object is initialized with the base name and a number
 * starting from 0 and incrementing by 1.
 *
 * @param N The number of Zombie objects to create.
 * @param name The base name of the Zombie objects.
 * @return A pointer to an array of Zombie objects.
 */
Zombie *zombieHorde(int N, std::string name)
{
	Zombie *zombies = new Zombie[N];
	for (int i = 0; i < N; i++)
	{
		std::ostringstream oss;
		oss << i;
		zombies[i].setName(name + oss.str());
	}
	return (zombies);
}
