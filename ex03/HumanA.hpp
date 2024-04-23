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