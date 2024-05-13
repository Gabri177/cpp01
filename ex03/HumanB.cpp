/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yugao <yugao@student.42madrid.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 00:08:22 by yugao             #+#    #+#             */
/*   Updated: 2024/05/13 00:08:23 by yugao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void		HumanB::attack(void){
	
	std::cout << name << " attacks with their " << wb->getType() << std::endl;
}

HumanB::HumanB(std::string init_name){

	wb = NULL;
	name = init_name;
}

void		HumanB::setWeapon(Weapon &new_wb){

		wb = &new_wb;
}
