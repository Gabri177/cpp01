#include "Zombie.hpp"

void	randomChump(std::string name){

	Zombie	tgt = Zombie (name);
	tgt.announce ();
}