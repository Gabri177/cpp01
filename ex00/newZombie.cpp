#include "Zombie.hpp"

Zombie*	newZombie(std::string name){

	Zombie *fin = new Zombie(name);
	return fin;
}