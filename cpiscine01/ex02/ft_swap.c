/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfezzuog <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 18:35:11 by gfezzuog          #+#    #+#             */
/*   Updated: 2021/10/07 20:47:58 by gfezzuog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include	<unistd.h>

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}
