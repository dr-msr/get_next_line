/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahim@42KL | drmsr <me@drmsr.dev>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 08:53:47 by mrahim@42KL |     #+#    #+#             */
/*   Updated: 2023/12/01 08:53:49 by mrahim@42KL |    ###   ########.KL       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include "get_next_line.h" 

char	*get_next_line(int fd)
{
	int		raw_read;
	char	*buffer;

	buffer = ft_calloc(3 + 1, sizeof(char));
	if (buffer == 0)
		return (NULL);
	raw_read = read(fd, buffer, 3);
	if (raw_read <= 0)
		return (NULL);
	return (buffer);
}