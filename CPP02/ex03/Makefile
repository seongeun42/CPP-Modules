# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: seongele <seongele@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/18 15:57:58 by seongele          #+#    #+#              #
#    Updated: 2022/07/06 17:24:03 by seongele         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
NAME = BSP
SRCS = src/Fixed.cpp \
		src/Point.cpp \
		src/bsp.cpp \
		src/main.cpp
OBJS = $(SRCS:.cpp=.o)
HEADER = -I./header/

FG_GREEN   = \e[32m
FG_LBLUE   = \e[94m
NO_COLOR   = \e[0m

all : $(NAME)
	
%.o : %.cpp
	@$(CXX) $(CXXFLAGS) -c -o $@ $< $(HEADER)
	@printf "BSP is making...\n"

$(NAME) : $(OBJS)
	@$(CXX) $(CXXFLAGS) -o $@ $(OBJS)
	@printf "${FG_LBLUE}BSP make success!\n${NO_COLOR}"

clean :
	@rm -f $(OBJS)
	@printf "${FG_GREEN}clean!\n${NO_COLOR}"

fclean : clean
	@rm -f $(NAME)
	@printf "${FG_GREEN}fclean!\n${NO_COLOR}"

re : fclean all

.PHONY: all clean fclean re