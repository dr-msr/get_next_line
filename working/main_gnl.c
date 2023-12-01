/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_gnl.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahim@42KL | drmsr <me@drmsr.dev>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 08:55:43 by mrahim@42KL |     #+#    #+#             */
/*   Updated: 2023/12/01 08:55:56 by mrahim@42KL |    ###   ########.KL       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <fcntl.h>
#include "get_next_line.h" 

int	main(void)
{
	int		fd;
	char	*buffer;
	int		line;

	fd = open("test.txt", O_RDONLY);
	line = 0;
	while (1)
	{
		buffer = get_next_line(fd);
		if (buffer == NULL)
			break;
		line++;
		printf("[%d]	%s\n", line, buffer);
		buffer = NULL;
	}
	return (0);
}
