/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tndreka < tndreka@student.42heilbronn.d    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 20:14:29 by tndreka           #+#    #+#             */
/*   Updated: 2025/07/11 20:18:50 by tndreka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"


FragTrap::FragTrap() : ClapTrap()
{
	std::cout << "FragTrap Default constructor called\n";
	name = "";
	energy = 100;
	health = 100;
	setAttackDamage(30);
}

FragTrap:: FragTrap(std::string _name): ClapTrap(_name)
{
	std::cout << "FragTrap Parameter constructor called\n";
	// name = _name;
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
	std::cout << "FragTrap Copy assign operator called\n";
	if (this != &other)
		ClapTrap::operator=(other);
	return *this;	
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap Destructor called\n";
	// ClapTrap::~ClapTrap();
}
