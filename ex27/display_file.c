/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   open.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hstiv <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/01 14:51:13 by hstiv             #+#    #+#             */
/*   Updated: 2018/11/22 20:51:16 by hstiv            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <unistd.h>

#define BUF_SIZE 4096

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

void		ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int			ty_ga(char *dog)
{
	int		fd;
	int		ret;
	char	buf[BUF_SIZE + 1];

	fd = open(dog, O_RDONLY);
	if (fd == -1)
		return (1);
	if (fd == 0)
		return (1);
	ret = read(fd, buf, BUF_SIZE);
	buf[ret] = '\0';
	ft_putstr(buf);
	if (close(fd) == -1)
	{
		return (1);
	}
	return (0);
}

int			main(int argc, char **argv)
{
	if (argc == 2)
	{
		ty_ga(argv[1]);
		return (0);
	}
	else if (argc == 1)
	{
		write(1, "File name missing.\n", 19);
		return (1);
	}
	else
	{
		write(1, "Too many arguments.\n", 20);
		return (1);
	}
	return (0);
}
