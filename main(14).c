/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorenius <jorenius@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 14:45:04 by jorenius          #+#    #+#             */
/*   Updated: 2021/07/14 15:17:05 by jorenius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int		ft_strcmp(char *s1, char *s2);

void	ft_putchar(char a);
int		main()
{
	char s1[10] = "abc";
	char s2[10] = "abc";

	
	printf("%d" , ft_strcmp(s1, s2));
	return (0);
}
