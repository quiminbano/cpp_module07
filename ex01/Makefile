# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: corellan <corellan@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/18 09:55:49 by corellan          #+#    #+#              #
#    Updated: 2023/07/18 09:55:53 by corellan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = iter

SRC = main.cpp

OBJ = $(SRC:.cpp=.o)

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

RED = \033[0;31m

GREEN = \033[0;32m

YELLOW = \033[0;33m

NC = \033[0m

all: $(NAME)

$(NAME) : $(OBJ)
		@$(CC) $(FLAGS) $(OBJ) -o $(NAME)
		@echo "$(GREEN)The binary was created successfully$(NC)"

%.o: %.cpp
		@$(CC) $(FLAGS) -I. -c $< -o $@
		@echo "$(GREEN)Object file created.$(NC)"

clean:
		@rm -f $(OBJ)
		@echo "$(RED)Object files deleted$(NC)"

fclean: clean
		@rm -rf $(NAME)
		@echo "$(RED)The binary was deleted successfully$(NC)"

re: fclean all
		

