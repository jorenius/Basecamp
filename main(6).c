/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorenius <jorenius@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/21 14:47:53 by jorenius          #+#    #+#             */
/*   Updated: 2021/07/21 16:50:51 by jorenius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data);

int		main(void)
{
	t_list	elem1, elem2, elem3, *begin;

	begin = &elem1;
	elem1.next = &elem2;
	elem2.next = &elem3;
	elem3.next = 0;

	elem1.data = "sun";
	elem2.data = "moon";
	elem3.data = "sky";

	ft_list_push_back(&begin, "earth");
	while (begin)
	{
		printf("%s\n", begin->data);
		begin = begin->next;
	}
}
