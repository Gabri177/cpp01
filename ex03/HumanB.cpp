#include "HumanB.hpp"

void		HumanB::attack(void){
	
	std::cout << name << " attacks with their " << wb->getType() << std::endl;
}

HumanB::HumanB(std::string init_name){

	wb = NULL;
	name = init_name;
}

void		HumanB::setWeapon(Weapon &new_wb){

		wb = &new_wb;
}
