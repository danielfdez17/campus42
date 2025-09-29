# Library name
NAME = libft.a

# Source directory
SRC_DIR = srcs

# Bonus source directory
BONUS_SRC_DIR = bonus_srcs

# Header directory
INC_DIR = includes

# Source files
SRCS = $(wildcard $(SRC_DIR)/*.c)
BONUS_SRCS = $(wildcard $(BONUS_SRC_DIR)/*.c)

# Include files
INCS = $(wildcard $(INC_DIR)/*.h)

# Object files
OBJS = $(SRCS:.c=.o)

# Bonus object files
BONUS_OBJS = $(BONUS_SRCS:.c=.o)

# Compiler and flags
CCW = gcc -Wall -Wextra -Werror

# Memory flags for leaks detection
SANITIZE = -fsanitize=address -g

# Removal
RM = rm -f

# Archiver
AR = ar -rcs

%.o: %.c
	$(CCW) -c $< -o $@ -I$(INC_DIR)

all: $(NAME)

$(NAME): $(OBJS) $(INCS)
	$(AR) $(NAME) $(OBJS)

bonus: $(BONUS_OBJS) $(INCS)
	$(AR) $(NAME) $(BONUS_OBJS)

clean:
	$(RM) $(OBJS) $(BONUS_OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

rebonus: fclean bonus

so:
	$(CCW) -nostartfiles -fPIC $(SRCS)
	gcc -nostartfiles -shared -o libft.so $(OBJS)

.PHONY: all clean fclean re rebonus bonus
