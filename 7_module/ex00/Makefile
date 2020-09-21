# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: wester <wester@student.codam.nl>             +#+                      #
#                                                    +#+                       #
#    Created: 2020/09/21 11:32:40 by wester        #+#    #+#                  #
#    Updated: 2020/09/21 13:15:21 by wester        ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = whatever

CLANG = clang++

FLAGS = -Wall -Werror -Wextra -pedantic -std=c++98

SRCS = whatever.cpp

all: $(NAME)

$(NAME):
		@$(CLANG) $(FLAGS) -o $(NAME) $(SRCS)
		@echo "generated executable"

clean:
		rm -f $(NAME)

fclean: clean

re: fclean all