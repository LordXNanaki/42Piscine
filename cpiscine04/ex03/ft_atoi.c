/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfezzuog <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 15:48:12 by gfezzuog          #+#    #+#             */
/*   Updated: 2021/10/20 15:48:14 by gfezzuog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(char *str)
{
	int	i;
	int	s;
	int	number;

	s = 1;
	i = 0;
	number = 0;
	if (str != '\0')
	{
		while ((str[i] > 8 && str[i] < 14) || str[i] == 32)
			i++;
		while (str[i] == '-' || str[i] == '+')
		{
			if (str[i++] == '-')
				s *= -1;
		}
		while (str[i] > 47 && str[i] < 58)
		{
			number = number * 10 + (str[i] - 48);
			i++;
		}
		return (number * s);
	}
	return (0);
}
