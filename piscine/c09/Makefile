NAME = libft.a

SRC_DIR = srcs
INC_DIR = includes

# Archivos fuente
SRCS = $(SRC_DIR)/ft_putchar.c \
       $(SRC_DIR)/ft_swap.c \
       $(SRC_DIR)/ft_putstr.c \
       $(SRC_DIR)/ft_strlen.c \
       $(SRC_DIR)/ft_strcmp.c

# Archivos ejecutables
OBJS = $(SRCS:.c=.o)

# Compilación
CC = cc
CFLAGS = -Wall -Wextra -Werror

# Archivador
AR = ar rcs

# Eliminación
RM = rm -f

# Regla para compilar archivos .o
%.o: %.c
	$(CC) $(CFLAGS) -I$(INC_DIR) -c $< -o $@

# Regla principal: creación de la librería estática
all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

# Se eliminan los ejecutables
clean:
	$(RM) $(OBJS)

# Se eliminan los ejecutables y la librería estática library
fclean: clean
	$(RM) $(NAME)

# Se reconstruye la librearía estática
re: fclean all
