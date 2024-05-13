/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yugao <yugao@student.42madrid.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 00:08:25 by yugao             #+#    #+#             */
/*   Updated: 2024/05/13 00:08:26 by yugao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP
# include "Weapon.hpp"

class HumanB{
	
	private:
		std::string name;
		Weapon		*wb;
	public:
					HumanB(std::string init_name);
		void		setWeapon(Weapon &new_wb);
		void		attack(void);
};

#endif