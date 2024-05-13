/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yugao <yugao@student.42madrid.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 00:08:52 by yugao             #+#    #+#             */
/*   Updated: 2024/05/13 00:08:53 by yugao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int main(void){

    std::string str;
    Harl        cmp;

    retry_input:
        std::cout << "Complain level : ";
        std::cin >> str;
        cmp.complain(str);
        if (str != "EXIT")
            goto retry_input;
    return 0;
}