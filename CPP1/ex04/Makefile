# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ama10362 <ama10362@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/25 17:19:13 by ama10362          #+#    #+#              #
#    Updated: 2024/03/02 12:48:53 by ama10362         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		= c++
FLAGS	= -Wall -Wextra -Werror -std=c++98


NAME		= main
FILES		= main FindAndReplace

OBJDIR		= .build

SRC			= $(FILES:=.cpp)
OBJ			= $(addprefix $(OBJDIR)/, $(FILES:=.o))
HEADER		= FindAndReplace.hpp


all: $(NAME)

$(NAME): $(OBJ) $(HEADER)
	@$(CC) $(OBJ) -o $(NAME)
	@printf "Executable ready.\n"

$(OBJDIR)/%.o: %.cpp $(HEADER)
	@mkdir -p $(dir $@)
	@$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -rf $(OBJDIR) $(OBJ)
	@printf "Object files removed.\n"

fclean: clean
	rm -rf $(NAME)
	@printf "Executable removed.\n"

re: fclean all

.PHONY: all clean fclean re
