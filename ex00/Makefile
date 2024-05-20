# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jofilipe <jofilipe@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/17 18:25:28 by jofilipe          #+#    #+#              #
#    Updated: 2024/05/17 18:45:42 by jofilipe         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

RESET   = \033[0m
BLACK   = \033[1;30m
RED     = \033[1;31m
GREEN   = \033[1;32m
YELLOW  = \033[1;33m
BLUE    = \033[1;34m
PURPLE  = \033[1;35m
CYAN    = \033[1;36m
WHITE   = \033[1;37m

NAME = megaphone

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -g -std=c++98
RM = rm -rf

SRCS = Megaphone.cpp

OBJS = $(SRCS:%.cpp=%.o)

all: $(NAME)

$(NAME): $(OBJS)
		@$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)
		clear
		echo "   _____ _____  _____   ___   ___  ";
		echo "  / ____|  __ \|  __ \ / _ \ / _ \ ";
		echo " | |    | |__) | |__) | | | | | | |";
		echo " | |    |  ___/|  ___/| | | | | | |";
		echo " | |____| |    | |    | |_| | |_| |";
		echo "  \_____|_|    |_|     \___/ \___/ ";
		echo "                                   ";
		echo "                                   ";

clean:
	@$(RM) $(OBJS) $(NAME)

fclean: clean
	@$(RM) $(OBJS) $(NAME)

re: fclean all

.SILENT:
