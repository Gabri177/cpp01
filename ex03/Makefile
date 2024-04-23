# Makefile

CPPFLAGS = -Wall -Werror -Wextra -std=c++98
CPPFILE = HumanA.cpp HumanB.cpp Weapon.cpp main.cpp
OFILE = $(CPPFILE:.cpp=.o)
NAME = Fight

all: $(NAME)

$(NAME): $(OFILE)
	g++ $(CPPFLAGS) $(VERSION_FLG) -o $(NAME) $(OFILE)

%.o:%.cpp
	g++ $(CPPFLAGS) -c $< -o $@

clean:
	$(RM) $(OFILE)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: clean fclean re