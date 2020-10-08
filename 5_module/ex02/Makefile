# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: wbarendr <wbarendr@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2020/10/01 16:47:29 by wbarendr      #+#    #+#                  #
#    Updated: 2020/10/08 13:07:29 by wbarendr      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

RD = "\x1b[31;01"
GR = "\x1b[32;01m"
YL = "\x1b[33;01m"
NO = "\x1b[0m"

NAME = execute

CLANG = clang++

FLAGS = -Wall -Werror -Wextra -pedantic -std=c++98

SRCS = *.cpp

all: $(NAME)

$(NAME):
	# @echo "A bit of [tree] installing if necessary..."
	# @brew install tree
	@$(CLANG) $(FLAGS) -o $(NAME) $(SRCS)
	@echo $(GR) "generated executable" $(NO)

clean:
	rm -f *shrubbery
fclean: clean
	rm -f $(NAME)

re: fclean all
