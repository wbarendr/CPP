# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: wbarendr <wbarendr@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2020/10/01 16:55:53 by wbarendr      #+#    #+#                  #
#    Updated: 2020/10/01 16:55:55 by wbarendr      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = execute

CLANG = clang++

FLAGS = -Wall -Werror -Wextra -pedantic -std=c++98

SRCS = *.cpp

all: $(NAME)

$(NAME):
	@echo "A bit of [tree] installing if necessary..."
	@brew install tree
	@$(CLANG) $(FLAGS) -o $(NAME) $(SRCS)
	@echo "generated executable"

clean:
	rm -f *shrubbery
fclean: clean
	rm -f $(NAME)

re: fclean all
