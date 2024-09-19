# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bmatos-d <bmatos-d@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/17 04:33:49 by bmatos-d          #+#    #+#              #
#    Updated: 2024/09/20 00:08:54 by bmatos-d         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC        = c++
CFLAGS    = -Wall -Wextra -Werror -std=c++98
MAKEFLAGS = --no-print-directory
RM        = rm -f

SRC       = Megaphone.cpp
OBJ       = $(SRC:.cpp=.o)

NAME      = megaphone
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