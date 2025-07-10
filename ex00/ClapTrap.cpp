/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tndreka < tndreka@student.42heilbronn.d    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 16:19:14 by tndreka           #+#    #+#             */
/*   Updated: 2025/07/10 17:44:11 by tndreka          ###   ########.fr       */
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

void ClapTrap::setAttackDamage(unsigned int amount)
{
	attack_damage = amount;
}

void ClapTrap::attack(const std::string& target)
{
	if(health == 0 || energy == 0)
		std::cout << "ClapTrap " << name << " can not attack. It has: " << health <<" health points and "<< energy << " energy points !!!\n";
	else
	{
		energy--;
		std::cout << "ClapTrap " << name << " attacks " << target << " causing " << attack_damage << " points of damage ! ! !\n"; 
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
}

void ClapTrap::beRepaired(unsigned int amount)
{
}