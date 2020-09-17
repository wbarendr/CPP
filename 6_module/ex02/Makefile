# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: wester <wester@student.codam.nl>             +#+                      #
#                                                    +#+                       #
#    Created: 2020/09/17 11:26:52 by wester        #+#    #+#                  #
#    Updated: 2020/09/17 11:35:22 by wester        ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = identify

CLANG = clang++

FLAGS = -Wall -Werror -Wextra -pedantic -std=c++98

SRCS = main.cpp

all: $(NAME)

$(NAME):
	@$(CLANG) $(FLAGS) -o $(NAME) $(SRCS)
	@echo "generated executable"

clean:
	rm -f $(NAME)

fclean: clean

re: fclean all
