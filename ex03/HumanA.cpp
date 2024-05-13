/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yugao <yugao@student.42madrid.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 00:08:17 by yugao             #+#    #+#             */
/*   Updated: 2024/05/13 00:08:18 by yugao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

void		HumanA::attack(void){

	std::cout << name << " attacks with their " << wa->getType() << std::endl;
}

HumanA::HumanA(std::string init_name, Weapon &init_wa){

	name = init_name;
	wa = &init_wa;
}
