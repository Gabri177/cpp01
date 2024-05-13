/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yugao <yugao@student.42madrid.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 00:08:50 by yugao             #+#    #+#             */
/*   Updated: 2024/05/13 00:08:51 by yugao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_CPP
# define HARL_CPP
# include "main.hpp"

class Harl{

    void    debug(void);
    void    info(void);
    void    warning(void);
    void    error(void);
    public:
        void    complain (std::string level);
};

typedef void (Harl::*t_func)(void);
typedef std::string levels[4];

#endif