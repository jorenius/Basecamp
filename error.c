/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorenius <jorenius@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 14:29:29 by jorenius          #+#    #+#             */
/*   Updated: 2021/07/28 15:20:18 by jorenius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>
#include <all.h>
#define BUF_SIZE 4096

char		*error(char *value, char *filename, char *str)
{
	ft_puterror(1, filename);
	ft_puterror(1, ": ");
	ft_puterror(1, str);
	return (value);
}
