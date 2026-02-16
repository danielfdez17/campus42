
# * Colors and utils
GREEN = \033[0;32m
YELLOW = \033[0;33m
RED = \033[0;31m
RESET = \033[0m
OK = $(GREEN)[OK]$(RESET)
NO_PRINT = --no-print-directory

# * Program name
NAME = rush-02

# * Compilation
CC = cc
CFLAGS = -Wall -Wextra -Werror -fsanitize=address -g3

# * Removal
RM = rm -f

# * Includes
INCLUDES = -I inc/

# * Objects dir
OBJ_DIR = obj/

# * Sources files
RUSH02_DIR = src/
RUSH02_SRCS =	$(addprefix $(RUSH02_DIR), main.c)
SRCS = $(RUSH02_SRCS)

# * Creating object files
OBJS = $(patsubst $(RUSH02_DIR)%.c,$(OBJ_DIR)%.o,$(SRCS))

# * LIBFT
LIBFT_DIR = inc/libft/
LIBFT = inc/libft/libft.a

# ! RULES
# ? Links a .c (and .h if needed) to its .o file
$(OBJ_DIR)%.o: $(RUSH02_DIR)%.c
	@mkdir -p $(OBJ_DIR)
	@$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

# ? main program compilation
$(NAME): $(OBJS)
	@$(CC) $(CFLAGS) $(INCLUDES) $(OBJS) -o $(NAME)
	@echo "$(OK) $(GREEN)$(NAME)$(RESET)"

# ? Compiles the whole program/library
all: obj $(NAME)

obj:
	@mkdir -p $(OBJ_DIR)

# ? Removes the object files
clean:
	@$(RM) $(OBJS)
	@echo "$(OK) $(RED)Removed object files$(RESET)"

# ? Removes both object and executable files
fclean: clean
	@$(RM) $(NAME)
	@echo "$(OK) $(RED)Removed $(NAME)$(RESET)"

# ? Rebuilds the program/library
re: fclean all
	@echo "$(OK) $(YELLOW)Rebuilt $(NAME)$(RESET)"

# ! Automating / Debugging rules
run:
	clear
	@$(MAKE) $(NO_PRINT) re
	./$(NAME)

valgrind: all
	clear
	valgrind --leak-check=full --track-origins=yes -s ./$(NAME) infile "ls -l" "wc -l" outfile

debug:
	clear
	@$(MAKE) $(NO_PRINT) re
	gdb ./$(NAME)

norminette:
	clear
	norminette

# ? Protects all rules from files with same name
.PHONY: all obj clean fclean re run valgrind debug norminette

# ? Indicates the main rule to be executed when only 'make' is called
.GOAL: all
