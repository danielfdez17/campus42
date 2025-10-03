# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: danfern3 <danfern3@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/03 07:42:17 by danfern3          #+#    #+#              #
#    Updated: 2025/10/03 13:52:46 by danfern3         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Library name
NAME = libft.a

# Source directory
SRC_DIR = srcs

# Bonus source directory
BONUS_SRC_DIR = _bonus

# Header directory
INC_DIR = includes

# Source files
SRCS = $(wildcard *.c)

# Bonus source files
BONUS_SRCS = $(wildcard *_bonus.c)

# Include files
INCS = $(wildcard *.h)

# Object files
OBJS = $(SRCS:.c=.o)

# Bonus object files
BONUS_OBJS = $(BONUS_SRCS:.c=.o)

# Compiler and flags
CCW = cc -Wall -Wextra -Werror

# Memory flags for leaks detection
SANITIZE = -fsanitize=address -g

# Removal
RM = rm -f

# Archiver
AR = ar -rcs

# Norminette
NORMINETTE = norminette

# Norminette for c files
NCFLAGS = -R CheckForbiddenSourceHeader

# Norminette for h files
NHFLAGS = -R CheckDefine

# Links a .c (and .h if needed) to its .o file
%.o: %.c
	$(CCW) -c $< -o $@ -I$(INC_DIR)

# Compiles the whole program/library
all: $(NAME)

$(NAME): $(OBJS) $(INCS)
	$(AR) $(NAME) $(OBJS)

# Compiles the bonus exercises
bonus: $(BONUS_OBJS) $(INCS)
	$(AR) $(NAME) $(BONUS_OBJS)

# Removes the object files
clean:
	$(RM) $(OBJS) $(BONUS_OBJS)

# Removes both object and executable files
fclean: clean
	$(RM) $(NAME)

# Rebuilds the program/library
re: fclean all

# Rebuilds the bonus program/library
rebonus: fclean bonus

# Executes norminette for every file
# norminette:
# 	echo Executing norminette for every file
# 	$(NORMINETTE) $(NCFLAGS) $(NHFLAGS) $(SRCS) $(HEADERS) $(BONUS_SRCS)

.PHONY: all clean fclean re rebonus bonus
