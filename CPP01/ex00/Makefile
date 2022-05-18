CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
NAME = zombie
SRCS = src/Zombie.cpp \
		src/newZombie.cpp \
		src/randomChump.cpp \
		src/main.cpp
OBJS = $(SRCS:.cpp=.o)
HEADER = -I./header/

FG_GREEN   = \e[32m
FG_LBLUE   = \e[94m
NO_COLOR   = \e[0m

all : $(NAME)
	
%.o : %.cpp
	@$(CXX) $(CXXFLAGS) -c -o $@ $< $(HEADER)
	@printf "zombie is making...\n"

$(NAME) : $(OBJS)
	@$(CXX) $(CFLAG) -o $@ $(OBJS)
	@printf "${FG_LBLUE}zombie make success!\n${NO_COLOR}"

clean :
	@rm -f $(OBJS)
	@printf "${FG_GREEN}clean!\n${NO_COLOR}"

fclean : clean
	@rm -f $(NAME)
	@printf "${FG_GREEN}fclean!\n${NO_COLOR}"

re : fclean all

.PHONY: all clean fclean re