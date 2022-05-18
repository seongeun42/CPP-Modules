CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
NAME = weapon
SRCS = src/Weapon.cpp \
		src/HumanA.cpp \
		src/HumanB.cpp \
		src/main.cpp
OBJS = $(SRCS:.cpp=.o)
HEADER = -I./header/

FG_GREEN   = \e[32m
FG_LBLUE   = \e[94m
NO_COLOR   = \e[0m

all : $(NAME)
	
%.o : %.cpp
	@$(CXX) $(CXXFLAGS) -c -o $@ $< $(HEADER)
	@printf "weapon is making...\n"

$(NAME) : $(OBJS)
	@$(CXX) $(CXXFLAG) -o $@ $(OBJS)
	@printf "${FG_LBLUE}weapon make success!\n${NO_COLOR}"

clean :
	@rm -f $(OBJS)
	@printf "${FG_GREEN}clean!\n${NO_COLOR}"

fclean : clean
	@rm -f $(NAME)
	@printf "${FG_GREEN}fclean!\n${NO_COLOR}"

re : fclean all

.PHONY: all clean fclean re