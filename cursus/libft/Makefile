# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: danfern3 <danfern3@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/03 07:42:17 by danfern3          #+#    #+#              #
#    Updated: 2025/10/03 07:48:50 by danfern3         ###   ########.fr        #
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

# Norminette
NORMINETTE = norminette

# Norminette for c files
NCFLAGS = -R CheckForbiddenSourceHeader

# Norminette for h files
NHFLAGS = -R CheckDefine

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

norminette:
	echo Executing norminette for every file
	$(NORMINETTE) $(NCFLAGS) $(NHFLAGS) $(SRCS) $(HEADERS) $(BONUS_SRCS)

.PHONY: all clean fclean re rebonus bonus
