S		= srcs/

O		= objs/

I		= includes/

D		= deps/

NAME	= animals

SRCS	= main.cpp Animal.cpp Cat.cpp Dog.cpp Brain.cpp

CC		= c++

CFLAGS	+= -Wall -Wextra -Werror -std=c++98

LDFLAGS	+=

CFLAGS	+= -I$I

SRCS	:= $(foreach file,$(SRCS),$S$(file))
OBJS	= $(SRCS:$S%=$O%.o)
DEPS	= $(SRCS:$S%=$D%.d)

RM		= /bin/rm -rf

END=\033[0m
GRAY = \033[0;90m
RED = \033[0;91m
GREEN = \033[0;92m
YELLOW = \033[0;93m
BLUE = \033[0;94m
MAGENTA = \033[0;95m
CYAN = \033[0;96m
WHITE = \033[0;97m

.PHONY: all clean fclean re

all: $(NAME)

$O:
	@mkdir $@

$(OBJS): | $O

$(OBJS): $O%.o: $S%
	@echo "$(YELLOW)Compiling $^: $(END)"
	@$(CC) $(CFLAGS) -c $< -o $@
	@echo "$(GREEN)✓$(END)"

$D:
	@mkdir $@

$(DEPS): | $D

$(DEPS): $D%.d: $S%
	@$(CC) $(CFLAGS) -MM -MF $@ -MT "$O$*.o $@" $<

$(NAME): $(OBJS)
	@echo "$(MAGENTA)$(NAME) is compiled$(END)"
	@$(CC) $(LDFLAGS) $^ -o $@

clean:
	@echo "$(RED)Removing objs$(END)"
	@$(RM) $D $O

fclean: clean
	@echo "$(RED)Removed executable$(END)"
	@$(RM) $(NAME)

re: fclean all

-include $(DEPS)
