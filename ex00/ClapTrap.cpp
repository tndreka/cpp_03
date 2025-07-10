/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tndreka < tndreka@student.42heilbronn.d    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 16:19:14 by tndreka           #+#    #+#             */
/*   Updated: 2025/07/10 16:33:53 by tndreka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "Default constructor called\n";
	name = "";
	health = 10;
	energy = 10;
	attack_damage = 0;
}

ClapTrap::ClapTrap(std::string _name)
{
	name = _name;
	health = 10;
	energy = 10;
	attack_damage = 0;
}

ClapTrap::ClapTrap(const ClapTrap&  other)
{
	std::cout << "Copy constructor called\n";
	*this = other;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
	std::cout << "Copy assignment operator called\n";	
	if (this != &other)
	{
		this->name = other.name;
		this->health = other.health;
		this->energy = other.energy;
		this->attack_damage = other.attack_damage;
	}
	return *this;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called\n";
}

unsigned int ClapTrap::getAttackDamage(void)
{
	return attack_damage;
}

unsigned int ClapTrap::setAttackDamage(usigned int amount)
{
	attack_damage = amount;
}

void ClapTrap::attack(const std::string& target)
{
	
}

void ClapTrap::takeDamage(unsigned int amount)
{
	
}

void ClapTrap::beRepaired(unsigned int amount)
{
	
}