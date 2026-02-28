# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ejakob <ejakob@student.42vienna.com>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/02/28 10:32:32 by ejakob            #+#    #+#              #
#    Updated: 2026/02/28 10:32:35 by ejakob           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = first_orthodox_canonical_form
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
