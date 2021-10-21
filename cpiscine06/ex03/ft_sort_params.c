/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfezzuog <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 17:00:00 by gfezzuog          #+#    #+#             */
/*   Updated: 2021/10/20 17:41:16 by gfezzuog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(const char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		write(1, &str[c], 1);
		c++;
	}
	write(1, "\n", 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

void	ft_sort_tab(char *tab[], int size)
{	
	int		i;
	int		e;
	char	*swap;

	i = 1;
	while (i < size)
	{
		e = 1;
		while (e < size)
		{
			if (ft_strcmp(tab[i], tab[e]) < 0)
			{
				swap = tab[i];
				tab[i] = tab[e];
				tab[e] = swap;
			}
			e++;
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	n;

	if (argc > 1)
	{
		n = 1;
		ft_sort_tab(argv, argc);
		while (n < argc)
			ft_putstr(argv[n++]);
	}
	return (0);
}
