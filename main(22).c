/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorenius <jorenius@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 13:03:03 by jorenius          #+#    #+#             */
/*   Updated: 2021/07/28 15:21:23 by jorenius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <all.h>

int		bsq(char *map)
{
	t_map_info	mi;
	t_box		biggest;

	mi = parse(&map);
	if (mi.lines == 0)
		return (ft_puterror(1, "map error\n"));
	biggest = find(map, &mi);
	print_square(map, &biggest, &mi);
	return (0);
}

int		main(int argc, char **argv)
{
	char		*str;
	int			i;

	if (argc < 2)
		return (bsq(read_file("-")));
	i = 0;
	while (++i < argc)
	{
		if (i != 1)
			ft_putstr("\n");
		if (argv[i][0] == '-' && argv[i][1] == '\0')
			str = read_file("-");
		else
			str = read_file(argv[i]);
		bsq(str);
	}
	return (0);
}
