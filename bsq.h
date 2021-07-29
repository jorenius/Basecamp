/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorenius <jorenius@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 12:56:30 by jorenius          #+#    #+#             */
/*   Updated: 2021/07/28 15:25:42 by jorenius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_H
# define BSQ_H
# include <sys/types.h>

typedef struct	s_obstacle
{
	int					x;
	int					y;
	struct s_obstacle	*next;
}				t_obstacle;

typedef struct	s_map_info
{
	int					lines;
	int					columns;
	char				empty;
	char				obstacle;
	char				full;
	struct s_obstacle	*obstacles;
	struct s_obstacle	*last_obs;
}				t_map_info;

typedef struct	s_box
{
	int x;
	int y;
	int size;
}				t_box;

void			bsq_add_obstacle(t_map_info *mi, int i);
t_box			find(char *map, t_map_info *mi);
void			bsq_expand_box(t_box *cb, t_map_info *mi);
ssize_t			bsq_get_file_size(char *filename);
t_map_info		bsq_get_map_info(char **input);
int				bsq_has_obstacle(t_box *cs, t_map_info *mi);
t_box			bsq_itoxy(int i, int columns);
t_box			bsq_new_box(int x, int y, int size);
t_map_info		bsq_new_map_info(int l, char e, char o, char f);
t_obstacle		*bsq_new_obstacle(int x, int y);
t_map_info		parse(char **input);
void			print_square(char *map, t_box *biggest, t_map_info *mi);
char			*read_file(char *filename);
char			*error(char *value, char *filename, char *str);
int				bsq_xytoi(int x, int y, int columns);

#endif
