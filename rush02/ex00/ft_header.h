#ifndef FT_HEADER_H
# define FT_HEADER_H

# define SUCCESS 1
# define ERROR 2

void                    ft_put_error(char *str);
void                    ft_put_success(char *str);
unsigned long long      ft_atoull(char *str);
void 					ft_lltoa(long long nb, char *str);
void                    ft_putnbr(unsigned long long nbr);
void                    ft_split_number(long long nb);
void                    handle_single_arg(char *av);
void                    handle_two_args(char *av1, char *av2);
void                    read_file(long long nb, char *av);
void                    read_file_rec(long long nb, char *av);
char                    *ft_strstr(char *str, char *to_find);
void                    translate_hundreds(int nb);
int                     ft_strlen(char *str);

#endif