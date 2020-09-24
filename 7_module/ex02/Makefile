# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: wester <wester@student.codam.nl>             +#+                      #
#                                                    +#+                       #
#    Created: 2020/09/21 15:05:38 by wester        #+#    #+#                  #
#    Updated: 2020/09/24 10:05:51 by wester        ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

RD = "\x1b[31;01"
GR = "\x1b[32;01m"
YL = "\x1b[33;01m"
NO = "\x1b[0m"

NAME = Array

SRCS = main.cpp

FLAGS = -Wall -Wextra -Werror -std=c++03 -pedantic

CMPL = clang++

all: $(NAME)

$(NAME):
		@$(CMPL) $(FLAGS) $(SRCS) -o $(NAME)
		@echo $(GR)compiled $(NAME) succesfully$(NO)

clean:
		@rm -f $(NAME)
		@echo $(YL)removed executable$(NO)

fclean: clean

re: fclean all
