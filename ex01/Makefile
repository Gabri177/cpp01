# Makefile

CPPFLAGS = -Wall -Werror -Wextra -std=c++98
CPPFILE = Zombie.cpp main.cpp zombieHorde.cpp
OFILE = $(CPPFILE:.cpp=.o)
NAME = Horde

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