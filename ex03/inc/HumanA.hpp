/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meferraz <meferraz@student.42porto.pt>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 21:59:39 by meferraz          #+#    #+#             */
/*   Updated: 2025/03/25 15:16:26 by meferraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "../inc/Weapon.hpp"

class HumanA
{
	public:
		HumanA(std::string name, Weapon& weapon);
		HumanA(void);
		~HumanA(void);
		void attack(void) const;
	private:
		std::string _name;
		Weapon& _weapon;
};

#endif
