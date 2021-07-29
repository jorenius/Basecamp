/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drossi <drossi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 07:57:11 by drossi            #+#    #+#             */
/*   Updated: 2021/07/11 15:23:08 by drossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush_print_line(int width, char edge, char fill)
{
	int index_width;

	index_width = 0;
	while (++index_width <= width)
	{
		if (index_width == 1 || index_width == width)
		{
			ft_putchar(edge);
		}
		else
		{
			ft_putchar(fill);
		}
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int index_height;

	if (x == 0 || y == 0)
	{
		ft_putchar('\n');
		return ;
	}
	index_height = 0;
	while (++index_height <= y)
	{
		if (index_height == 1 || index_height == y)
		{
			rush_print_line(x, 'o', '-');
		}
		else
		{
			rush_print_line(x, '|', ' ');
		}
	}
}
