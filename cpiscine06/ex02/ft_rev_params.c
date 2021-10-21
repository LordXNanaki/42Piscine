/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfezzuog <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 16:09:32 by gfezzuog          #+#    #+#             */
/*   Updated: 2021/10/20 16:58:18 by gfezzuog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int ac, char **av)
{
	int	i;
	int	k;

	k = ac - 1;
	if (ac == 1)
		return (0);
	while (k > 0)
	{
		i = 0;
		while (av[k][i] != '\0')
		{
			ft_putchar(av[k][i]);
			i++;
		}
		write (1, "\n", 1);
		k--;
	}
}
