/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq_input.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorenius <jorenius@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 13:02:06 by jorenius          #+#    #+#             */
/*   Updated: 2021/07/28 14:54:42 by jorenius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>
#include <all.h>
#define BUF_SIZE 4096

ssize_t		bsq_get_file_size(char *filename)
{
	int		fd;
	int		sifd;
	ssize_t	ret;
	ssize_t	fsize;
	char	*buf;

	fd = 0;
	sifd = 0;
	if (filename[0] == '-' && filename[1] == '\0')
		sifd = open("-", O_CREAT | O_TRUNC | O_RDWR);
	else
		fd = open(filename, O_RDONLY);
	fsize = 0;
	buf = (char *)malloc(sizeof(char) * (BUF_SIZE));
	while ((ret = read(fd, buf, BUF_SIZE)) > 0)
	{
		if (filename[0] == '-' && filename[1] == '\0')
			write(sifd, buf, ret);
		fsize += ret;
	}
	close(fd);
	close(sifd);
	free(buf);
	return (fsize);
}
