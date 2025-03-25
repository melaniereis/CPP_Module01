/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meferraz <meferraz@student.42porto.pt>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 21:33:27 by meferraz          #+#    #+#             */
/*   Updated: 2025/03/25 21:57:07 by meferraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Harl.hpp"
#include "../inc/ansi.h"

/**
 * @brief Prints a formatted header with dynamic width and padding.
 *
 * @param title The title of the header.
 * @param width The total width of the header.
 * @param fillChar The character used for padding.
 * @param color The color of the header text.
 */
void headerPrinter(const std::string &title, int width, char fillChar, const char *color)
{
	int padding = (width - title.length()) / 2; // Calculate padding for centering
	int sidePadding = width - padding - title.length(); // Adjust for odd widths

	// Print formatted header
	std::cout << color
			<< std::setfill(fillChar)
			<< std::setw(padding)
			<< ""
			<< title
			<< std::setw(sidePadding)
			<< ""
			<< RESET
			<< std::endl;
}

Harl::Harl(void)
{
	std::cout << GRNHB "Harl 2.0 initialized successfully ✅" RESET << std::endl;
}

Harl::~Harl(void)
{
	std::cout << REDHB "Harl 2.0 shutting down... ☠" RESET << std::endl;
}

void Harl::complain(std::string level)
{
	// Array of function pointers
	void (Harl::*functions[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	// Corresponding levels
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (int i = 0; i < 4; i++)
	{
		if (level == levels[i])
		{
			(this->*functions[i])();
			return;
		}
	}
}

void Harl::debug(void)
{
	headerPrinter("[ DEBUG ]", 40, ' ', BWHT);
	std::cout << YELHB "I love having extra bacon for my" << RESET << std::endl
			  << YELHB "7XL-double-cheese-triple-pickle-special-ketchup" << RESET << std::endl
			  << YELHB "burger. I really do! 🥓🍔" << RESET << std::endl
			  << std::endl;
}

void Harl::info(void)
{
	headerPrinter("[ INFO ]", 40, ' ', BWHT);
	std::cout << CYNHB "I cannot believe adding extra bacon costs" << RESET << std::endl
			  << CYNHB "more money. You didn’t put enough bacon in" << RESET << std::endl
			  << CYNHB "my burger! If you did, I wouldn’t be asking" << RESET << std::endl
			  << CYNHB "for more! 🥓💸" << RESET << std::endl
			  << std::endl;
}

void Harl::warning(void)
{
	headerPrinter("[ WARNING ]", 40, ' ', BWHT);
	std::cout << MAGHB "I think I deserve to have some extra bacon" << RESET << std::endl
			  << MAGHB "for free. I’ve been coming for years whereas" << RESET << std::endl
			  << MAGHB "you started working here since last month." << RESET << std::endl
			  << std::endl;
}

void Harl::error(void)
{
	headerPrinter("[ ERROR ]", 40, ' ', BWHT);
	std::cout << REDHB "This is unacceptable! I want to speak to" << RESET << std::endl
			  << REDHB "the manager now. 😤👨‍💼" << RESET << std::endl
			  << std::endl;
}
