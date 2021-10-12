/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfezzuog <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 14:25:39 by gfezzuog          #+#    #+#             */
/*   Updated: 2021/10/11 17:20:18 by gfezzuog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_control(char a, char b, char c)
{
	write (1, &a, 1);
	write (1, &b, 1);
	write (1, &c, 1);
	if (a == '7' && b == '8' && c == '9')
	{		
		write (1, "", 1);
	}
	else
	{
		write (1, ", ", 2);
	}
}

void	controll(char a, char b, char c)
{
	while (a <= '7' && b <= '8' && c <= '9')
	{
		ft_print_control(a, b, c);
		if (c < '9')
		{
			c++;
		}
		else if (b == '8' && c == '9' )
		{
			a++;
			b = a + 1;
			c = b + 1;
		}
		else if (c == '9')
		{
			b++;
			c = b + 1;
		}	
	}
}

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = '0';
	b = '1';
	c = '2';
	controll(a, b, c);
}
