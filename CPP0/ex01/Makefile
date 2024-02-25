# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ama10362 <ama10362@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/20 22:47:11 by ama10362          #+#    #+#              #
#    Updated: 2024/02/24 17:43:56 by ama10362         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		= c++
FLAGS	= -Wall -Wextra -Werror -std=c++98


NAME		= myPhone
FILES		= main Contact PhoneBook

OBJDIR		= .build

SRC			= $(FILES:=.cpp)
OBJ			= $(addprefix $(OBJDIR)/, $(FILES:=.o))
HEADER		= Contact.hpp PhoneBook.hpp


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
