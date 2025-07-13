/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tndreka < tndreka@student.42heilbronn.d    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 16:03:20 by tndreka           #+#    #+#             */
/*   Updated: 2025/07/13 19:10:23 by tndreka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main ()
{
	//test case 1
	
	FragTrap f1("Jocker");

	//test 2: copy operation
	FragTrap f2(f1);
	FragTrap f3("boss");
	f3 = f1;

	//test 3: Attack
	f1.attack("Enemy");

	//test 4: Special ability
	f1.highFivesGuys();

	//test 5: Inherited methods
	f1.takeDamage(50);
	f1.beRepaired(30);
	FragTrap original("Original");
    FragTrap copy(original);
    
    original.attack("Target");
    original.highFivesGuys();
	return 0;
}