#ifndef RUSH02_H
# define RUSH02_H

# include <stdlib.h>
# include <stdbool.h>
# include <unistd.h>

#include "utils.h"

unsigned long long	ft_atoull(const char* ptr);
bool				convert_value(char *value);
bool				read_and_convert(char *file, char *value);
#endif // RUSH02_H