/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yugao <yugao@student.42madrid.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 00:08:35 by yugao             #+#    #+#             */
/*   Updated: 2024/05/13 00:08:36 by yugao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_CPP
# define WEAPON_CPP
# include <iostream>
# include <string>

class Weapon{

	private:
		std::string type;
	public:
							Weapon(void);
							Weapon(std::string init_type);
		const std::string&	getType(void);
		void				setType(std::string newtype);
};

#endif