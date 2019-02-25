/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hstiv <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 15:40:41 by hstiv             #+#    #+#             */
/*   Updated: 2018/12/31 13:49:28 by hstiv            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char		*ft_strdup(char *src)
{
	int		r;
	int		len;
	char	*dest;

	r = 0;
	len = 0;
	while (src[len] != '\0')
		len++;
	dest = (char *)malloc(sizeof(*dest) * (len + 1));
	while (r <= len)
	{
		dest[r] = src[r];
		r++;
	}
	return (dest);
}
