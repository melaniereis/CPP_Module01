/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meferraz <meferraz@student.42porto.pt>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 21:33:27 by meferraz          #+#    #+#             */
/*   Updated: 2025/03/25 22:00:22 by meferraz         ###   ########.fr       */
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

/**
 * @brief Default constructor for Harl class.
 *
 * Prints a green success message to the standard output.
 */
Harl::Harl(void)
{
	std::cout << GRNHB "Harl 2.0 initialized successfully ✅" RESET << std::endl;
}

/**
 * @brief Destructor for Harl class.
 *
 * Prints a red error message to the standard output,
 * indicating that Harl 2.0 is shutting down.
 */
Harl::~Harl(void)
{
	std::cout << REDHB "Harl 2.0 shutting down... ☠" RESET << std::endl;
}

/**
 * @brief Allows the user to specify a complaint level and Harl will complain accordingly.
 *
 * @param level The level of complaint. Must be one of DEBUG, INFO, WARNING, or ERROR.
 *
 * If the specified level is not one of the above,
 * Harl will not complain at all.
 */
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

/**
 * @brief Complains at DEBUG level.
 *
 * Prints a yellow complaint message to the standard output,
 * indicating that the user loves having extra bacon for their burger.
 */
void Harl::debug(void)
{
	headerPrinter("[ DEBUG ]", 40, ' ', BWHT);
	std::cout << YELHB "I love having extra bacon for my" << RESET << std::endl
			  << YELHB "7XL-double-cheese-triple-pickle-special-ketchup" << RESET << std::endl
			  << YELHB "burger. I really do! 🥓🍔" << RESET << std::endl
			  << std::endl;
}

/**
 * @brief Complains at INFO level.
 *
 * Prints a cyan complaint message to the standard output,
 * indicating that the user is complaining about the cost of extra bacon.
 */
void Harl::info(void)
{
	headerPrinter("[ INFO ]", 40, ' ', BWHT);
	std::cout << CYNHB "I cannot believe adding extra bacon costs" << RESET << std::endl
			  << CYNHB "more money. You didn’t put enough bacon in" << RESET << std::endl
			  << CYNHB "my burger! If you did, I wouldn’t be asking" << RESET << std::endl
			  << CYNHB "for more! 🥓💸" << RESET << std::endl
			  << std::endl;
}

/**
 * @brief Complains at WARNING level.
 *
 * Prints a magenta complaint message to the standard output,
 * indicating that the user is threatening to leave because of the cost of extra bacon.
 */
void Harl::warning(void)
{
	headerPrinter("[ WARNING ]", 40, ' ', BWHT);
	std::cout << MAGHB "I think I deserve to have some extra bacon" << RESET << std::endl
			  << MAGHB "for free. I’ve been coming for years whereas" << RESET << std::endl
			  << MAGHB "you started working here since last month." << RESET << std::endl
			  << std::endl;
}

/**
 * @brief Complains at ERROR level.
 *
 * Prints a red complaint message to the standard output,
 * indicating that the user is unhappy about the cost of extra bacon
 * and wants to speak to the manager.
 */
void Harl::error(void)
{
	headerPrinter("[ ERROR ]", 40, ' ', BWHT);
	std::cout << REDHB "This is unacceptable! I want to speak to" << RESET << std::endl
			  << REDHB "the manager now. 😤👨‍💼" << RESET << std::endl
			  << std::endl;
}
