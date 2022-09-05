/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugrene <hugrene@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 15:12:43 by hugrene           #+#    #+#             */
/*   Updated: 2022/09/05 15:12:44 by hugrene          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
static void	ft_putuchar(char c, unsigned int *len)
{
	write(1, &c, 1);
	*len += 1;
}
*/

static unsigned int	ft_scale(long nb, int len)
{
	unsigned int	res;

	res = 1;
	while ((nb / len) > 0)
	{
		nb = nb / len;
		res *= len;
	}
	return (res);
}

char	*ft_putunbr_base(unsigned int nbr, char *base)
{
	int				len_base;
	long			scale;
	char			*str;
	unsigned int	i;

	i = 0;
	len_base = ft_strlen(base);
	scale = ft_scale(nbr, ft_strlen(base));
	str = malloc(sizeof(char) * (scale + 1));
	while (scale > 0)
	{
		str[i] = base[nbr / scale];
		nbr %= scale;
		scale /= len_base;
		i++;
	}
	str[i] = '\0';
	return (str);
}
