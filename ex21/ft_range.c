/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hstiv <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 15:49:08 by hstiv             #+#    #+#             */
/*   Updated: 2018/12/31 13:49:37 by hstiv            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int	*nb;
	int	i;

	if (min >= max)
		return (0);
	nb = (int *)malloc(sizeof(*nb) * (max - min));
	i = 0;
	while (min < max)
	{
		nb[i] = min;
		min++;
		i++;
	}
	return (nb);
}
