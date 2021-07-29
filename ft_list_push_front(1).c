/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorenius <jorenius@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/21 16:01:19 by jorenius          #+#    #+#             */
/*   Updated: 2021/07/21 20:20:37 by jorenius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list	*front;

	front = *begin_list;
	if (*begin_list)
	{
		front = ft_create_elem(data);
		front->next = *begin_list;
		*begin_list = front;
	}
	else
		*begin_list = ft_create_elem(data);
}
