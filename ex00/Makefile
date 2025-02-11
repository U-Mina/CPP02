# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ewu <ewu@student.42heilbronn.de>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/11 13:44:07 by ewu               #+#    #+#              #
#    Updated: 2025/02/11 13:44:10 by ewu              ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= fixed
C++		= c++
CFLAG	= -Wall -Werror -Wextra -std=c++98
SRC		= main.cpp Fixed.cpp
OBJ		= $(SRC:.cpp=.o)

all:$(NAME)

$(NAME):$(OBJ)
	$(C++) $(CFLAG) -o $(NAME) $(OBJ)

clean:
	rm -f $(NAME)

fclean: clean
	rm -f $(OBJ)

re: fclean all

.PHONY: re all clean fclean