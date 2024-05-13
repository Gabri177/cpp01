/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yugao <yugao@student.42madrid.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 00:08:03 by yugao             #+#    #+#             */
/*   Updated: 2024/05/13 00:08:04 by yugao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(){

}

Zombie::Zombie(std::string name){

	_name = name;
}

Zombie::~Zombie(){

	std::cout << _name << " has been destroyed\n";
}

void	Zombie::announce(void){
	
	std::cout << _name << ": BraiiiiiiinnnzzzZ...\n";
}
