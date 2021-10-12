/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfezzuog <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 10:39:46 by gfezzuog          #+#    #+#             */
/*   Updated: 2021/10/11 10:41:20 by gfezzuog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	e;
	int	c;

	i = 0;
	e = i + 1;
	c = 0;
	while (i <= size)
	{
		while (e <= size)
		{
			if (tab[i] > tab[e])
			{
				c = tab[i];
				tab[i] = tab[e];
				tab[e] = c;
			}
			e++;
		}
		i++;
		e = i + 1;
	}
}
