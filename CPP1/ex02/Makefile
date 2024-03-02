# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ama10362 <ama10362@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/25 16:55:00 by ama10362          #+#    #+#              #
#    Updated: 2024/02/25 17:00:45 by ama10362         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		= c++
FLAGS	= -Wall -Wextra -Werror -std=c++98

NAME	= main

.PHONY: all clean re

all: $(NAME)

$(NAME): 
	@printf "Compiling $(NAME)...\n"
	@ $(CC) $(FLAGS) main.cpp -o $(NAME)
	@printf "Executable ready.\n"

clean:
	rm -rf $(NAME)
	@printf "Executable removed.\n"

fclean:
	rm -rf $(NAME)
	@printf "Executable removed.\n"

re: clean all