# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: wbarendr <wbarendr@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2020/07/27 12:37:20 by wbarendr      #+#    #+#                  #
#    Updated: 2020/07/27 20:12:09 by wbarendr      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = phonebook

SRCS = main.cpp

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	@echo "making executable"
	@clang++ $(FLAGS) -o $(NAME) $(SRCS)

clean:
	@rm -f $(NAME)
	@echo "removed all"

fclean: clean

re: fclean all
