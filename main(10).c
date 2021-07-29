/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorenius <jorenius@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 08:18:54 by jorenius          #+#    #+#             */
/*   Updated: 2021/07/20 08:33:51 by jorenius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

int		main(void)

{
	void (*f)(char);
	char i;

	i = 'J';
	f = &ft_putchar;
	f(i);
	ft_putchar('\n');
	return(0);

}