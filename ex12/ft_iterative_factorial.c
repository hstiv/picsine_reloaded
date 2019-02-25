/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hstiv <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 19:54:30 by hstiv             #+#    #+#             */
/*   Updated: 2018/11/23 18:07:26 by hstiv            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int a;
	int fact;

	a = 1;
	fact = 1;
	if (nb == 0)
		return (1);
	else if (nb > 0 && nb <= 12)
	{
		while (a <= nb)
		{
			fact = fact * a;
			a++;
		}
		return (fact);
	}
	else
		return (0);
}
