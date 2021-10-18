/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfezzuog <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 17:19:42 by gfezzuog          #+#    #+#             */
/*   Updated: 2021/10/16 17:24:39 by gfezzuog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

void	ft_putvet(int vet[], int n)
{
	int	c;

	c = 0;
	while (c < n)
	{
		ft_putchar(vet[c] + '0');
		c++;
	}
}

int	ft_get_index(int combn[], int n)
{
	int	c;
	int	max;

	c = 0;
	max = 10 - n;
	while (c < n)
	{
		if (combn[c] == max)
			return (c - 1);
		if (c == (n - 1) && combn[c] < max)
			return (c);
		c++;
		max++;
	}
	return (-1);
}

void	ft_increment(int vet[], int n, int index)
{
	int	c;

	c = index + 1;
	vet[index]++;
	while (c <= n)
	{
		vet[c] = vet[c - 1] + 1;
		c++;
	}
}

void	ft_print_combn(int n)
{
	int	combn[10];
	int	c;
	int	pos_index;

	c = 0;
	while (c < n)
	{
		combn[c] = c;
		c++;
	}
	while (ft_get_index(combn, n) != -1)
	{
		pos_index = ft_get_index(combn, n);
		ft_putvet(combn, n);
		ft_increment(combn, n, pos_index);
		write(1, ", ", 2);
	}
	ft_putvet(combn, n);
}
