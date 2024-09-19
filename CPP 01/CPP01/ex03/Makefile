# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bmatos-d <bmatos-d@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/09 16:47:02 by bmatos-d          #+#    #+#              #
#    Updated: 2024/09/09 16:47:51 by bmatos-d         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC        = c++
CFLAGS    = -Wall -Wextra -Werror -std=c++98
RM        = rm -f

SRC       = main.cpp  HumanA.cpp HumanB.cpp Weapon.cpp
OBJ       = $(SRC:.cpp=.o)

NAME      = ex03
RENAME    = -o $(NAME)


all:   $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(CFLAGS) $(OBJ) $(RENAME)
	@echo Compiled

clean:
	@$(RM) $(OBJ)

fclean: clean
	@$(RM) $(NAME)

re: fclean $(NAME)