/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tndreka < tndreka@student.42heilbronn.d    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 20:14:29 by tndreka           #+#    #+#             */
/*   Updated: 2025/07/13 18:51:29 by tndreka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"


FragTrap::FragTrap() : ClapTrap()
{
	std::cout << "FragTrap Default constructor called\n";
	energy = 100;
	health = 100;
	setAttackDamage(30);
}

FragTrap::FragTrap(std::string _name): ClapTrap(_name)
{
	std::cout << "FragTrap Parameter constructor called\n";
	energy = 100;
	health = 100;
	setAttackDamage(30);
}

FragTrap:: FragTrap(const FragTrap& other) : ClapTrap(other)
{
	std::cout << "FragTrap Copy constructor called\n";
}

FragTrap& FragTrap::operator=(const FragTrap& other)
{
	std::cout << "FragTrap Copy assignment operator called\n";
	if (this != &other)
		ClapTrap::operator=(other);
	return *this;	
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap "<< name <<  " destroyed\n";}

void FragTrap::highFiveGuys(void)
{
	std::cout << "FragTrap " << name << " is requesting a high five !\n"; 
}
