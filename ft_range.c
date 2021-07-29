/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorenius <jorenius@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 12:35:21 by jorenius          #+#    #+#             */
/*   Updated: 2021/07/15 16:55:46 by jorenius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int			*ft_range(int min, int max)
{
	int		*a;
	int		i;

	if (min >= max)
	{
		return (NULL);
	}
	else
		a = (int*)malloc(sizeof(int) * (max - min + 1));
	i = 0;
	while (min != max)
	{
		a[i++] = min;
		min += (min > max) ? -1 : 1;
	}
	a[i] = min;
	return (a);
}
