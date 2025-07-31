# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: danfern3 <danfern3@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/31 07:44:55 by danfern3          #+#    #+#              #
#    Updated: 2025/07/31 07:44:56 by danfern3         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Created name file
NAME = libft.a

# Source files directory
SRC_DIR = srcs

# Header files directory
INC_DIR = includes

# Source files
SRCS = $(SRC_DIR)/ft_putchar.c \
		$(SRC_DIR)/ft_swap.c \
		$(SRC_DIR)/ft_putstr.c \
		$(SRC_DIR)/ft_strlen.c \
		$(SRC_DIR)/ft_strcmp.c

# Header files
INCLUDES = $(INC_DIR)/ft.h

# Executable files
OBJS = $(SRCS:.c=.o)

# Compilation stage
CCW = cc 
CFLAGS = -Wall -Wextra -Werror

# Removal
RM = rm -f

# Archiver
AR = ar rcs

# Compiling .o files
%.o: %.c
	$(CC) $(CFLAGS) -I$(INC_DIR) -c $< -o $@

# Main rule: creates the static library
all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

# Removes executable files
clean:
# echo Removing executable files
	$(RM) $(OBJS)

# Removes both executable files and static library
fclean: clean
# echo Removing both executable and static library files
	$(RM) $(NAME)

# Rebuilds static library
re: fclean all
# echo Rebuilding static library