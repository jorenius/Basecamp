/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorenius <jorenius@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 08:18:54 by jorenius          #+#    #+#             */
/*   Updated: 2021/07/21 14:14:28 by jorenius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>

t_list	*ft_create_elem(void *data);

int    main(void)
{
	
    char *created = "CORRECT";
    printf("this is %s\n", ft_create_elem(created)->data);
    return (0);
}