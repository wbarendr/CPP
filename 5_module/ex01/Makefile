# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: wbarendr <wbarendr@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2020/10/01 16:58:11 by wbarendr      #+#    #+#                  #
#    Updated: 2020/10/01 16:58:27 by wbarendr      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = execute

CLANG = clang++

FLAGS = -Wall -Werror -Wextra -pedantic -std=c++98

SRCS = *.cpp

all: $(NAME)

$(NAME):
	@$(CLANG) $(FLAGS) -o $(NAME) $(SRCS)
	@echo "generated executable"

clean:
	rm -f $(NAME)

fclean: clean

re: fclean all
