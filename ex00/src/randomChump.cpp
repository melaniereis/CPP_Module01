/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meferraz <meferraz@student.42porto.pt>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 14:49:12 by meferraz          #+#    #+#             */
/*   Updated: 2025/03/24 21:40:38 by meferraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Zombie.hpp"

/**
 * @brief Creates a stack allocated Zombie with the given name and calls its announce method.
 *
 * This function creates a new Zombie object on the stack with the given name,
 * and then calls its `announce` method to print out the name of the Zombie.
 *
 * @param name The name of the Zombie.
 */
void randomChump(std::string name)
{
	Zombie zombie(name);
	zombie.announce();
}
