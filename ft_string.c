/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorenius <jorenius@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 13:22:28 by jorenius          #+#    #+#             */
/*   Updated: 2021/07/28 12:47:06 by jorenius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <all.h>

int		ft_putchar(char c)
{
	return (ft_putchar_to(1, c));
}

int		ft_putchar_to(int fd, char c)
{
	return (write(fd, &c, 1));
}

int		ft_puterror(int errn, char *str)
{
	ft_putstr_to(2, str);
	return (errn);
}

void	ft_putstr(char *str)
{
	ft_putstr_to(1, str);
	return ;
}

void	ft_putstr_to(int fd, char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar_to(fd, str[i]);
		i++;
	}
	return ;
}
