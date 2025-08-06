# Executable name
NAME = rush-02

# Compile and flags
CC = cc
CFLAGS = -Wall -Wextra -Werror

# Source and header files
SRCS = *.c
HEADERS = *.h

# Removal command and flags
RM = rm
RMFLAGS = -rf -R

# Norminette
NORMINETTE = norminette

# Norminette for c files
NCFLAGS = -R CheckForbiddenSourceHeader

# Norminette for h files
NHFLAGS = -R CheckDefine

# Compilation command
fclean: 
	echo Compiling every .c and .h file into $(NAME)
	$(CC) $(SRCS) $(CFLAGS) -o $(NAME)
	
remove:
	echo Removing executable file $(NAME)
	$(RM) $(RMFLAGS) $(NAME)

norminette-c:
	echo Executing norminette for source files
	$(NORMINETTE) $(NCFLAGS) $(SRCS)
	
norminette-h:
	echo Executing norminette for header files
	$(NORMINETTE) $(NHFLAGS) $(HEADERS)

norminette:
	echo Executing norminette for every file
	$(NORMINETTE) $(NCFLAGS) $(NHFLAGS) $(SRCS) $(HEADERS)