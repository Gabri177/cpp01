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