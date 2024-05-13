/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yugao <yugao@student.42madrid.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 00:08:20 by yugao             #+#    #+#             */
/*   Updated: 2024/05/13 00:08:21 by yugao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP
# include "Weapon.hpp"

class HumanA{
	
	private:
		std::string name;
		Weapon		*wa;
	public:
					HumanA(std::string init_name, Weapon &init_wa);
		void		attack(void);
};

#endif