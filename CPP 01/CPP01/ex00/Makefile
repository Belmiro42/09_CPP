# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bmatos-d <bmatos-d@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/17 04:33:49 by bmatos-d          #+#    #+#              #
#    Updated: 2024/09/06 05:22:11 by bmatos-d         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC        = c++
CFLAGS    = -Wall -Wextra -Werror -std=c++98
RM        = rm -f

SRC       = main.cpp newZombie.cpp randomChump.cpp Zombie.cpp
OBJ       = $(SRC:.cpp=.o)

NAME      = ex00
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