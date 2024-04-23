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