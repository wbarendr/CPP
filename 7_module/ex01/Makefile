# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: wester <wester@student.codam.nl>             +#+                      #
#                                                    +#+                       #
#    Created: 2020/09/21 14:27:33 by wester        #+#    #+#                  #
#    Updated: 2020/09/21 14:27:43 by wester        ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = iter

CLANG = clang++

FLAGS = -Wall -Werror -Wextra -pedantic -std=c++98

SRCS = iter.cpp

all: $(NAME)

$(NAME):
		@$(CLANG) $(FLAGS) -o $(NAME) $(SRCS)
		@echo "generated executable"

clean:
		rm -f $(NAME)

fclean: clean

re: fclean all