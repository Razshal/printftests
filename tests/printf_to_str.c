/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_to_str.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfonteni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/08 17:53:46 by mfonteni          #+#    #+#             */
/*   Updated: 2018/01/08 20:02:07 by mfonteni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../printftests.h"
/*
int	open_pipe(void)
{
	int fd[2];
	pipe(fd);
	return (fd[0]);
}

int	close_pipe(char *buffer, int size, int fd)
{
	int end = read(fd, buffer, size);
	buffer[end] = '\0';
	close(fd);
	return (end);
}
*/

#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

void open_pipe(int *fd)
{
	fd = malloc(2*sizeof(int));
	pipe(fd);
	close(fd[0]);
}
int read_pipe(int *fd, char *buffer)
{
	exit(0);
	close(fd[1]);
	return (read(fd[0], buffer, 80));
}
int main(void)
{
	int     *fd;
	char *buffer = ft_strnew(2048);;
	char *string = "lalalala";

	fd= NULL;

	open_pipe(fd);
	write(fd[1], string, (strlen(string)+1));
	read_pipe(fd, buffer);
	printf("Received string: %s", buffer);

}


/*
   {
   va_list args;
   int wrote;
   va_start(args, format);
   wrote = vsnprintf(buffer, buffsize, "je suis une :%s", args);
   va_end(args);
   return (wrote);
   }
   */
