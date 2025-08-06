/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_header.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orhernan <orhernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 15:04:09 by danfern3          #+#    #+#             */
/*   Updated: 2025/07/30 18:01:35 by orhernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_HEADER_H
# define FT_HEADER_H

# define SUCCESS 1
# define STDOUT 1
# define ERROR 2
# define MAX_BUFFER 1024

typedef struct s_square
{
	int	x;
	int	y;
	int	size;
}	t_square;

typedef struct s_matrix
{
	int		rows;
	int		cols;
	char	**matrix;
	char	empty;
	char	obstacle;
	char	fill;
}	t_matrix;

void		ft_putstr(char *str, int console);
void		ft_put_error(char *str);
int			ft_atoi(char *str);
int			ft_strlen(char *str);
t_matrix	*read_file(char *str);
t_matrix	*is_valid_matrix(char *buffer);
void		process_matrix(char *file_name);
char		*read_index_line(int index, char *buffer);
char		*ft_strdup(char *src);
void		ft_putmatrix(t_matrix *s_matrix);
void		free_mem(t_matrix *matrix);
void		update_matrix(t_matrix *matrix, t_square biggest_square);
int			search_obstacles(struct s_square square, \
			struct s_matrix matrix, int x, int y);
t_matrix	*get_matrix_info(char *first_line);
void		search_square(t_matrix *matrix);
void		stdin_to_file(char *filename);

#endif
