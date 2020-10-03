# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: Wester <Wester@student.codam.nl>             +#+                      #
#                                                    +#+                       #
#    Created: 2020/09/11 10:03:09 by Wester        #+#    #+#                  #
#    Updated: 2020/10/02 22:13:35 by wester        ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

RD = "\x1b[31;01"
GR = "\x1b[32;01m"
YL = "\x1b[33;01m"
NO = "\x1b[0m"

NAME = convert

SRCS = convert_string.cpp

FLAGS = -Wall -Wextra -Werror -std=c++03 -pedantic

CMPL = clang++

all: $(NAME)

$(NAME):
	@$(CMPL) $(FLAGS) -o $(NAME) $(SRCS)
	@echo $(GR)compiled $(NAME) succesfully$(NO)
	
clean:
	@rm -f $(NAME)
	@echo $(YL)removed executable$(NO)
	
fclean: clean

re: fclean all
