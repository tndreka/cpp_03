/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tndreka < tndreka@student.42heilbronn.d    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 18:10:53 by tndreka           #+#    #+#             */
/*   Updated: 2025/07/11 18:20:42 by tndreka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << "ScavTrap Default constructor called\n";
	name = "";
	energy = 50;
	health = 100;
	setAttackDamage(20);
}

ScavTrap:: ScavTrap(std::string _name): ClapTrap(_name)
{
	std::cout << "ScavTrap Parameter constructor called\n";
	name = _name;
	energy = 50;
	health = 100;
	setAttackDamage(20);
}

ScavTrap:: ScavTrap(const ScavTrap& other) : ClapTrap(other)
{
	std::cout << "ScavTrap Copy constructor called\n";
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
	std::cout << "ScavTrap Copy assign operator called\n";
	if (this != &other)
		ClapTrap::operator=(other);
	return *this;	
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Destructor called\n";
	ClapTrap::~ClapTrap();
}