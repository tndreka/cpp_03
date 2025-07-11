/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tndreka < tndreka@student.42heilbronn.d    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 18:10:53 by tndreka           #+#    #+#             */
/*   Updated: 2025/07/11 18:32:19 by tndreka          ###   ########.fr       */
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
	// name = _name;
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
	// ClapTrap::~ClapTrap();
}

void ScavTrap::attack(const std::string& target)
{
	if (health == 0 || energy == 0)
		std::cout << "ScavTrap " << name << " can not attack!!!\n";
	else
	{
		energy--;
		std::cout << "ScavTrap " << name << " attacks " << target << " causing " << attack_damage << " points of damage!!!\n"; 
	}
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << name << " is now in Gate keeping mode!\n";
}