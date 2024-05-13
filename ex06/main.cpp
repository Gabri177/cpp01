/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yugao <yugao@student.42madrid.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 00:09:11 by yugao             #+#    #+#             */
/*   Updated: 2024/05/13 00:09:12 by yugao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int main(int arc, char **argv){

    std::string str;
    Harl        cmp;
    levels      msg = {"DEBUG", "INFO", "WARNING", "ERROR"};

    if (arc != 2){

        std::cerr << "You have to introduce an argument of level!!\n";
        return 1;
    }
    str = argv[1];
    int index = 0;
    for (; index < 4 && msg[index] != str; index ++);
    for (; index < 4; index ++)
        cmp.complain (msg[index]);
    return 0;
}