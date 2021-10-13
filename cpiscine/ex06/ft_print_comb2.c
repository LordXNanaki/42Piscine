/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfezzuog <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 20:11:02 by gfezzuog          #+#    #+#             */
/*   Updated: 2021/10/05 21:13:50 by gfezzuog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>

void	ft_putchar( int n1, int n2)
{
	char	d1;
	char	u1;
	char	d2;
	char	u2;

	d1 = n1 / 10 + 48;
	u1 = n1 % 10 + 48;
	d2 = n2 / 10 + 48;
	u2 = n2 % 10 + 48;
	if (n2 > n1 && n1 != n2)
	{
		write (1, &d1, 1);
		write (1, &u1, 1);
		write (1, &" ", 1);
		write (1, &d2, 1);
		write (1, &u2, 1);
		if (n1 != 98)
		{
			write (1, ", ", 2);
		}
	}
}

void	ft_print_comb2(void)
{
	int	n1;
	int	n2;

	n1 = 0;
	while (n1 <= 98)
	{
		n2 = 0;
		while (n2 <= 99)
		{
			ft_putchar (n1, n2);
			n2 = n2 + 1;
		}
		n1 = n1 + 1;
	}
}
