# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ama10362 <ama10362@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/24 17:45:01 by ama10362          #+#    #+#              #
#    Updated: 2024/02/25 12:22:22 by ama10362         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		= c++
FLAGS	= -Wall -Wextra -Werror -std=c++98


NAME		= GlobalBanksters
FILES		= tests Account

OBJDIR		= .build

SRC			= $(FILES:=.cpp)
OBJ			= $(addprefix $(OBJDIR)/, $(FILES:=.o))
HEADER		= Account.hpp


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
