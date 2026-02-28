# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ejakob <ejakob@student.42vienna.com>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/02/28 11:02:31 by ejakob            #+#    #+#              #
#    Updated: 2026/02/28 11:02:32 by ejakob           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = now_were_talking
CXX = c++
CXXFLAGS = -Wall -Werror -Wextra -std=c++98
DEPFLAGS = -MMD -MP

SRC = main.cpp Fixed.cpp
OBJ = $(SRC:.cpp=.o)
DEP = $(OBJ:.o=.d)

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(DEPFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp
	@$(CXX) $(CXXFLAGS) $(DEPFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)
	@rm -f $(DEP)

fclean: clean
	rm -f $(NAME)

re: fclean all

-include $(DEP)

.PHONY: all clean fclean re
