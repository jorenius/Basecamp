/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_file.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorenius <jorenius@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 14:54:26 by jorenius          #+#    #+#             */
/*   Updated: 2021/07/29 12:50:23 by jorenius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>
#include <all.h>
#define BUF_SIZE 4096

char		*read_file(char *filename)
{
	int		fd;
	ssize_t	ret;
	ssize_t	fsize;
	char	*buf;

	fsize = bsq_get_file_size(filename) + 1;
	fd = open(filename, O_RDONLY | 755);
	if (fd == -1)
		return (error("", filename, "open() error\n"));
	buf = (char*)malloc(sizeof(*buf) * fsize);
	ret = read(fd, buf, fsize);
	if (ret == -1)
		return (error("", filename, "read() error\n"));
	buf[ret] = '\0';
	close(fd);
	return (buf);
}
