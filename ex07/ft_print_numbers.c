/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hstiv <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/19 22:41:00 by hstiv             #+#    #+#             */
/*   Updated: 2018/11/22 22:37:33 by hstiv            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_putchar(char c);

void		ft_print_numbers(void)
{
	char	c;

	c = '0';
	while (c != '9' + 1)
	{
		ft_putchar(c);
		c++;
	}
}
