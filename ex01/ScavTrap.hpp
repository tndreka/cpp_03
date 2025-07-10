/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tndreka < tndreka@student.42heilbronn.d    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 18:10:55 by tndreka           #+#    #+#             */
/*   Updated: 2025/07/10 18:13:20 by tndreka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP 

#include <iostream>

class ScavTrap
{
private:
	
public:
	ScavTrap();
	ScavTrap(const ScavTrap& other);
	ScavTrap& operator=(const ScavTrap& other);
	~ScavTrap();
};

#endif