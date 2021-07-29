/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorenius <jorenius@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 08:18:54 by jorenius          #+#    #+#             */
/*   Updated: 2021/07/20 16:11:50 by jorenius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_count_if(char **tab, int (*f)(char*));

int		ft_number_a(char *argc)
{
	int i;

	i = 0;
	while (argc[i] != '\0')
	{
		if (argc[i] == 'i')
		{
			return(1);
		}
		i++;
	}
	return (0);
}

int		main(int argc, char **argv)

{

	if (argc > 0)
	{
		printf("%i\n", ft_count_if(argv, &ft_number_a));
	}
	return(0);
}