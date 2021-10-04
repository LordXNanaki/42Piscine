/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfezzuog <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 14:25:39 by gfezzuog          #+#    #+#             */
/*   Updated: 2021/10/04 16:40:58 by gfezzuog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_comb(void);
int	main()
{
	ft_print_comb();
}

void	ft_print_comb(void)
{
	char a;
	char b;
	char c;

	a = '0';
	b = '1';
	c = '2';

	while ( a <= '7' && b <= '8' && c <= '9') 
	{
		write (1, &a, 1);
		write (1, &b, 1);
		write (1, &c, 1);
		if ( a == '7' && b == '8' && c == '9') 
		{		
			write (1, "\n", 1);
		}
		else{
			write (1, ", ", 2);
		}
		if ( b == '8' && c == '9')
		{
			a++;
			b = a+1;
		}

		else if (c == '9')
		{
			b++;
			c = b+1;
		}
		else 
		{
			c++;
		}

	}	
}
