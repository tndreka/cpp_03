/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tndreka <tndreka@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 16:03:17 by tndreka           #+#    #+#             */
/*   Updated: 2025/07/13 04:31:02 by tndreka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
	//ScavTrap creation
	ScavTrap temp("Trap_guardian");
	std::cout<<std::endl;

	//attack 
	ScavTrap temp1("guardian");
	temp1.attack("Enemy");
	std::cout<<std::endl;

	//special ability
	temp.guardGate();
	std::cout<<std::endl;

	//testing inherited methods
	temp.takeDamage(30);
	temp.beRepaired(15);
	std::cout<<std::endl;

	return 0;
}