# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: wbarendr <wbarendr@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2020/07/29 14:31:44 by wbarendr      #+#    #+#                  #
#    Updated: 2020/09/30 21:45:32 by wester        ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = replace

SRCS = replace.cpp

FLAGS = -Wall -Werror -Wextra -pedantic -std=c++98

all: $(NAME)

$(NAME):
	@echo "making executable"
	@clang++ $(FLAGS) -o $(NAME) $(SRCS)

clean:
	@rm -f $(NAME)
	@echo "removed executable"

fclean: clean
	@rm -f FILENAME.replace
	@echo "removed new created file, if existed"
	
re: fclean all
	

test: all
	./$(NAME) text.txt robijn "Wessa B"