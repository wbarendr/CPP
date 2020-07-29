# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: wbarendr <wbarendr@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2020/07/29 14:31:44 by wbarendr      #+#    #+#                  #
#    Updated: 2020/07/29 14:45:33 by wbarendr      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = replace

SRCS = replace.cpp

FLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME):
	@echo "making executable"
	@clang++ $(FLAGS) -o $(NAME) $(SRCS)

clean:
	@rm -f $(NAME)
	@echo "removed executable"

fclean: clean
	@rm -f new_text.txt
	@echo "removed new created file, if existed"
	
re: fclean all
	

test: all
	./$(NAME) text.txt robijn "Wessa B"