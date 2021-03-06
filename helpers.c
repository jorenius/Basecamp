/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq_helpers.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorenius <jorenius@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 13:20:48 by jorenius          #+#    #+#             */
/*   Updated: 2021/07/28 12:46:14 by jorenius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <all.h>

t_box		bsq_itoxy(int i, int columns)
{
	t_box nb;

	nb = bsq_new_box(0, 0, 1);
	nb.x = i % columns;
	nb.y = i / columns;
	return (nb);
}

t_box		bsq_new_box(int x, int y, int size)
{
	t_box nb;

	nb.x = x;
	nb.y = y;
	nb.size = size;
	return (nb);
}

t_map_info	bsq_new_map_info(int l, char e, char o, char f)
{
	t_map_info	nmi;

	nmi.lines = l;
	nmi.columns = -1;
	nmi.empty = e;
	nmi.obstacle = o;
	nmi.full = f;
	nmi.obstacles = (void *)0;
	nmi.last_obs = (void *)0;
	return (nmi);
}

t_obstacle	*bsq_new_obstacle(int x, int y)
{
	t_obstacle	*no;

	no = (t_obstacle *)malloc(sizeof(t_obstacle));
	no->x = x;
	no->y = y;
	no->next = (void *)0;
	return (no);
}

int			bsq_xytoi(int x, int y, int columns)
{
	return (x + y * columns);
}
