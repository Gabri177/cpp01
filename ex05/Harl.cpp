/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yugao <yugao@student.42madrid.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 00:08:47 by yugao             #+#    #+#             */
/*   Updated: 2024/05/13 00:08:48 by yugao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

void    Harl::debug(void){

    std::cout << "Mi ordenador esta roto, no puede ser mi culpa!!!\n";
}

void    Harl::info(void){

    std::cout << "Soy un fan de tortilla patatas!!! El mejor invento del mundo!!!\n";
}

void    Harl::warning(void){

    std::cout << "QUEEEE ?! Esta vez qué pasa!!!\n";
}

void    Harl::error(void){

    std::cout << "Error?! Qué va! Revisalo bien, seguro no hay error, si lo hay, fijate que no!!!\n";
}

void    Harl::complain (std::string level){

    t_func  funcs[] = {
        &Harl::debug,
        &Harl::info,
        &Harl::warning,
        &Harl::error
    };
    levels msg = {"DEBUG", "INFO", "WARNING", "ERROR"};
    int i = 0;
    for (; i < 4 && msg[i].compare(level); i ++);
    if (i < 4)
        (this->*funcs[i])();
}