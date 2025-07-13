/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tndreka <tndreka@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 16:03:14 by tndreka           #+#    #+#             */
/*   Updated: 2025/07/13 04:14:06 by tndreka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	/*
			CLAP_TRAP TEST
	*/
	ClapTrap test;
	ClapTrap t("Pusha_T");
	ClapTrap b("Future");
	ClapTrap cp(t);

	

	//TEST CASE WITH 0
	t.attack("Future");
	b.takeDamage(0);
	std::cout << std::endl;


	//TEST CASE WITH 3
	t.setAttackDamage(3);
	t.attack("Future");
	b.takeDamage(3);
	std::cout << std::endl;

	// Repair Functionality
	b.beRepaired(2);
	std::cout << std::endl;

	//Death scenario
	ClapTrap death("victim");
	death.takeDamage(115);
	death.attack("someone");
	death.beRepaired(5);
	std::cout << std::endl;

	//edge case
	ClapTrap edge("case");
	edge.takeDamage(0);
	edge.beRepaired(0);
	edge.takeDamage(5);
	edge.beRepaired(3);
	std::cout << std::endl;
	return 0;
}