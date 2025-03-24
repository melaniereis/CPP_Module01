/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meferraz <meferraz@student.42porto.pt>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 14:38:45 by meferraz          #+#    #+#             */
/*   Updated: 2025/03/24 15:20:23 by meferraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Zombie.hpp"

/**
 * @brief Allocates a new Zombie object on the heap.
 *
 * Creates a new Zombie object on the heap with the given name and returns a pointer to it.
 *
 * @param name The name of the Zombie.
 * @return A pointer to a new Zombie object.
 */
Zombie* newZombie(std::string name)
{
	return (new Zombie(name));
}
