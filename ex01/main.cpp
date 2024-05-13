/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yugao <yugao@student.42madrid.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 00:07:58 by yugao             #+#    #+#             */
/*   Updated: 2024/05/13 00:07:59 by yugao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void){

	Zombie	*ary;
	ary = zombieHorde (10, "Horde");
	for (int i = 0; i < 10; i ++)
		ary[i].announce();
	delete [] ary;
	//system ("leaks -q Horde");
	return 0;
}