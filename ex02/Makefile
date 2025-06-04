# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aaghzal <aaghzal@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/06/04 07:56:37 by aaghzal           #+#    #+#              #
#    Updated: 2025/06/04 07:56:38 by aaghzal          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = array
BUILD_DIR = build/
CPP = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
SRC = main.cpp
OBJS = ${addprefix $(BUILD_DIR),$(SRC:.cpp=.o)}

all: $(BUILD_DIR) $(NAME)

$(NAME): $(OBJS)
		$(CPP) $(CPPFLAGS) $^ -o $@

$(BUILD_DIR)%.o: %.cpp Array.hpp
		$(CPP) $(CPPFLAGS) -c $< -o $@

$(BUILD_DIR):
		@mkdir -p $@

clean:
		@rm -rf $(BUILD_DIR)

fclean: clean
		@rm -f $(NAME)

re : fclean all

.PHONY: all clean fclean re
