/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_square.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorenius <jorenius@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 13:21:54 by jorenius          #+#    #+#             */
/*   Updated: 2021/07/28 15:24:28 by jorenius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <all.h>

void	print_square(char *map, t_box *biggest, t_map_info *mi)
{
	int i;
	int	x;
	int y;
	int current;

	x = biggest->x;
	while (x < (biggest->x) + (biggest->size))
	{
		y = biggest->y;
		while (y < (biggest->y) + (biggest->size))
		{
			current = bsq_xytoi(x, y, (mi->columns) + 1);
			map[current] = mi->full;
			y++;
		}
		x++;
	}
	i = 0;
	while (map[i] != '\0')
	{
		ft_putchar(map[i++]);
	}
	return ;
}
