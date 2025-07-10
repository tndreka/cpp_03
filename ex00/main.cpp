/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tndreka < tndreka@student.42heilbronn.d    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 16:03:14 by tndreka           #+#    #+#             */
/*   Updated: 2025/07/10 17:22:57 by tndreka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap bob("Bobi");
	ClapTrap jiji("Xhixhi");

	bob.setAttackDamage(2);
	bob.attack("Xhixhi");
	return 0;
}