/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfezzuog <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 15:20:13 by gfezzuog          #+#    #+#             */
/*   Updated: 2021/10/12 16:15:52 by gfezzuog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int ft_strlen(int c, char *vec)
{
    c = 0;
    while (vec[c] != '\0')
    {
        c++;

    }
    return (c);
}

unsigned int ft_strlcpy(char *dest, char *src, unsigned  int size)
{
	int i;
	int e;

	i = 0;
	e = 0;
	ft_strlen(i, dest);

	while (e != '\0')
	{
		if (i < size - 1)
		{
			dest[i] = src[e];
			e++;
			i++;
		}
		else
		{
			dest[i] = '\0';
			break;
		}
	}
	ft_strlen(e, src);
	return(e);
}

int	main()
{
	char dest[] = "ciao";
	char src;
	unsigned int size;
	ft_strlcpy(dest, src, size);
	write(1, &e, 1);

	return 0;
}
