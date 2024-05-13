/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yugao <yugao@student.42madrid.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 00:08:08 by yugao             #+#    #+#             */
/*   Updated: 2024/05/13 00:08:09 by yugao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name){
	if (N < 0)
		return NULL;
	Zombie *fin = new Zombie[N];
	for (int i = 0; i < N ; i++){
		new (fin + i) Zombie(name);
	}
	return fin;
}