/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tndreka < tndreka@student.42heilbronn.d    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 16:19:14 by tndreka           #+#    #+#             */
/*   Updated: 2025/07/13 18:50:32 by tndreka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "ClapTrap Default constructor called\n";
	name = "";
	health = 10;
	energy = 10;
	attack_damage = 0;
}

ClapTrap::ClapTrap(std::string _name)
{
	std::cout << " Clap Trap Parameter constructor called\n";
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
	std::cout << "ClapTrap "<< name <<  " destroyed\n";
}

unsigned int ClapTrap::getAttackDamage(void) const
{
	return attack_damage;
}

void ClapTrap::setAttackDamage(unsigned int amount)
{
	attack_damage = amount;
}

void ClapTrap::attack(const std::string& target)
{
	if (health == 0 || energy == 0)
		std::cout << "ClapTrap " << name << " can not attack. It has: " << health <<" health points and "<< energy << " energy points !!!\n";
	else
	{
		energy--;
		std::cout << "ClapTrap " << name << " attacks " << target << " causing " << attack_damage << " points of damage ! ! !\n"; 
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (health == 0)
	{
		std::cout << "ClapTrap "<< name << " is Destroyed!\n";
		return ; 
	}
	if (amount >= health)
		health = 0;
	else
		health -= amount;
	std::cout << "ClapTrap "<< name << " takes " << amount << " points of damage!\n";
	std::cout << "Current Health: " << health << " points\n"; 
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (energy == 0)
	{
		std::cout << "ClapTrap" << name << " can not repair itself no more energy!\n";
		return ;		
	}
	if (health == 0)
	{
		std::cout << "ClapTrap" << name << " i'ts Destroyed!\n";
		return ;
	}
	energy--;
	health += amount;
	std::cout << "ClapTrap "<< name << " repair itself with " << amount << " points of health!\n";
	std::cout << "Current Health: " << health << " points\n";
	std::cout << "Energy status: " << energy << " points\n"; 
}