/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yugao <yugao@student.42madrid.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 00:09:06 by yugao             #+#    #+#             */
/*   Updated: 2024/05/13 00:09:07 by yugao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

void    Harl::debug(void){

    std::cout   << "[DEBUG]\n"
                << "Mi ordenador esta roto, no puede ser mi culpa!!!\n\n";
}

void    Harl::info(void){

    std::cout   << "[INFO]\n"
                << "Soy un fan de tortilla patatas!!! El mejor invento del mundo!!!\n\n";
}

void    Harl::warning(void){

    std::cout   << "[WARNING]\n"
                << "QUEEEE ?! Esta vez qué pasa!!!\n\n";
}

void    Harl::error(void){

    std::cout   << "[ERROR]\n"
                << "Error?! Qué va! Revisalo bien, seguro no hay error, si lo hay, fijate que no!!!\n\n";
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