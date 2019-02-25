/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hstiv <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 15:38:33 by hstiv             #+#    #+#             */
/*   Updated: 2018/11/24 16:01:46 by hstiv            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_putchar(char c);

void		ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int			ft_strcmp(char *s1, char *s2)
{
	while (*s1 != '\0')
	{
		if (*s1++ - *s2++ != 0)
			return (*(s1 - 1) - *(s2 - 1));
	}
	return (*s1 - *s2);
}

void		ft_sort_params(int argc, char **argv)
{
	int		i;
	int		j;
	char	*sort;

	i = 0;
	while (argc > i++)
	{
		j = 0;
		while (argc > j++)
		{
			if (ft_strcmp(argv[i], argv[j]) < 0)
			{
				sort = argv[i];
				argv[i] = argv[j];
				argv[j] = sort;
			}
		}
	}
}

int			main(int argc, char **argv)
{
	int		i;

	i = 0;
	if (argc > 1)
	{
		ft_sort_params(argc - 1, argv);
		while (i++ < (argc - 1))
		{
			ft_putstr(argv[i]);
			ft_putchar('\n');
		}
	}
	return (0);
}
