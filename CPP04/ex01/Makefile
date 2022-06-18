# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: seongele <seongele@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/15 00:39:39 by seongele          #+#    #+#              #
#    Updated: 2022/06/18 12:27:43 by seongele         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
NAME = brain
SRCS = src/Animal.cpp \
		src/Dog.cpp \
		src/Cat.cpp \
		src/Brain.cpp \
		src/WrongAnimal.cpp \
		src/WrongCat.cpp \
		src/main.cpp
OBJS = $(SRCS:.cpp=.o)
HEADER = -I./header/

FG_GREEN   = \e[32m
FG_LBLUE   = \e[94m
NO_COLOR   = \e[0m

all : $(NAME)
	
%.o : %.cpp
	@$(CXX) $(CXXFLAGS) -c -o $@ $< $(HEADER)
	@printf "brain is making...\n"

$(NAME) : $(OBJS)
	@$(CXX) $(CXXFLAG) -o $@ $(OBJS)
	@printf "${FG_LBLUE}brain make success!\n${NO_COLOR}"

clean :
	@rm -f $(OBJS)
	@printf "${FG_GREEN}clean!\n${NO_COLOR}"

fclean : clean
	@rm -f $(NAME)
	@printf "${FG_GREEN}fclean!\n${NO_COLOR}"

re : fclean all

.PHONY: all clean fclean re