# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yugao <yugao@student.42madrid.com>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/13 00:07:43 by yugao             #+#    #+#              #
#    Updated: 2024/05/13 00:07:44 by yugao            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Makefile

CPPFLAGS = -Wall -Werror -Wextra -std=c++98
CPPFILE = Zombie.cpp main.cpp newZombie.cpp randomChump.cpp
OFILE = $(CPPFILE:.cpp=.o)
NAME = BraiiiiiiinnnzzzZ

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