#include "Zombie.hpp"

int	main(void){

	Zombie	*cur;
	cur = newZombie ("jaja");
	cur->announce();
	randomChump("test");
	delete cur;
	return 0;
}