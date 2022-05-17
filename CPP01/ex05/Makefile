CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
NAME = harl
SRCS = src/Harl.cpp \
		src/main.cpp
OBJS = $(SRCS:.cpp=.o)
HEADER = -I./header/

FG_GREEN   = \e[32m
FG_LBLUE   = \e[94m
NO_COLOR   = \e[0m

all : $(NAME)
	
%.o : %.cpp
	@$(CC) $(CFLAGS) -c -o $@ $< $(HEADER)
	@printf "harl is making...\n"

$(NAME) : $(OBJS)
	@$(CC) $(CFLAG) -o $@ $(OBJS)
	@printf "${FG_LBLUE}harl make success!\n${NO_COLOR}"

clean :
	@rm -f $(OBJS)
	@printf "${FG_GREEN}clean!\n${NO_COLOR}"

fclean : clean
	@rm -f $(NAME)
	@printf "${FG_GREEN}fclean!\n${NO_COLOR}"

re : fclean all

.PHONY: all clean fclean re