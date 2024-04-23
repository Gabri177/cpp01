#include "Zombie.hpp"

int	main(void){

	Zombie	*ary;
	ary = zombieHorde (10, "Horde");
	for (int i = 0; i < 10; i ++)
		ary[i].announce();
	delete [] ary;
	//system ("leaks -q Horde");
	return 0;
}