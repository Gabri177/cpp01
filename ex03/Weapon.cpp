#include "Weapon.hpp"

const std::string&	Weapon::getType(void){

	return type;
}


void	Weapon::setType(std::string newtype){
	
	type = newtype;
}

Weapon::Weapon(std::string init_type){

	type = init_type;
}

Weapon::Weapon(void){
	
}