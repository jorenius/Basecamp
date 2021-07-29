/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorenius <jorenius@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 14:48:45 by jorenius          #+#    #+#             */
/*   Updated: 2021/07/20 08:36:15 by jorenius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int			*ft_map(int *tab, int length, int (*f)(int))
{
	int a;
	int *r;

	a = 0;
	if ((r = (int *)malloc(sizeof(int) * length)) == NULL)
		return (NULL);
	while (a < length)
	{
		r[a] = f(tab[a]);
		a++;
	}
	return (r);
}
