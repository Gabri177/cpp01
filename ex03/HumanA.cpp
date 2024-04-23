#include "HumanA.hpp"

void		HumanA::attack(void){

	std::cout << name << " attacks with their " << wa->getType() << std::endl;
}

HumanA::HumanA(std::string init_name, Weapon &init_wa){

	name = init_name;
	wa = &init_wa;
}
