# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jofilipe <jofilipe@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/10 17:19:51 by jofilipe          #+#    #+#              #
#    Updated: 2024/07/10 17:19:53 by jofilipe         ###   ########.fr        #
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

NAME = globalBank

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -g -std=c++98
RM = rm -rf

SRCS = tests.cpp \
		Account.cpp \

OBJS = $(SRCS:%.cpp=%.o)

all: $(NAME)

$(NAME): $(OBJS)
		@$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)
		clear
		echo "   _____ _____  _____   ___   ___    ________   _____ ___  ";
		echo "  / ____|  __ \|  __ \ / _ \ / _ \  |  ____\ \ / / _ \__ \ ";
		echo " | |    | |__) | |__) | | | | | | | | |__   \ V / | | | ) |";
		echo " | |    |  ___/|  ___/| | | | | | | |  __|   > <| | | |/ / ";
		echo " | |____| |    | |    | |_| | |_| | | |____ / . \ |_| / /_ ";
		echo "  \_____|_|    |_|     \___/ \___/  |______/_/ \_\___/____|";
		echo "                                                           ";
		echo "                                                           ";

clean:
	@$(RM) $(OBJS) $(NAME)

fclean: clean
	@$(RM) $(OBJS) $(NAME)

re: fclean all

.SILENT:
