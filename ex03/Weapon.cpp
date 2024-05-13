/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yugao <yugao@student.42madrid.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 00:08:33 by yugao             #+#    #+#             */
/*   Updated: 2024/05/13 00:08:34 by yugao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

const std::string&	Weapon::getType(void){

	return type;
}


void	Weapon::setType(std::string newtype){
	
	type = newtype;
}

Weapon::Weapon(std::string init_type){

	type = init_type;
}

Weapon::Weapon(void){
	
}