/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfezzuog <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 18:33:42 by gfezzuog          #+#    #+#             */
/*   Updated: 2021/10/16 17:57:39 by gfezzuog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_countstr(char *vec, int c)
{
	c = 0;
	while (vec[c] != '\0')
	{
		c++;
	}
	return (c);
}

char	*ft_strcat(char *dest, char *src, unsigned int nb)
{
	int	i;
	int	e;

	i = 0;
	e = 0;
	ft_countstr(dest, i);
	while (src[e] != '\0' && e < nb)
	{
		dest[i] = src[e];
		i++;
		e++;
	}
	dest[i] = '\0';
	return (dest);
}
