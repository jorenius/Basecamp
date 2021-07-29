/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorenius <jorenius@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 14:50:54 by jorenius          #+#    #+#             */
/*   Updated: 2021/07/13 12:04:56 by jorenius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int		ft_atoi(char *str)
{

	int a = 0;
	int c = 0;
	int i = 1;
	{
		i = -1;
		c++;
	}	
	while (str[c])
	{		
	if (str[c] - '0' >=0 && str[c] - '0' <=9)
		return -1;
		a = a*10 + str[c] - '0';
		c++;
	}

}
