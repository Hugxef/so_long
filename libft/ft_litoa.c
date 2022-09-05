/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_litoa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugrene <hugrene@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 15:29:47 by hugrene           #+#    #+#             */
/*   Updated: 2022/09/05 15:29:48 by hugrene          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	ft_litoa_len(long int n)
{
	unsigned int	len;

	if (n == 0)
		return (1);
	len = 0;
	while (n)
	{
		len++;
		n /= 10;
	}
	return (len);
}

static void	sub(unsigned int sign, char *str, unsigned int *i, long int *n)
{
	if (sign)
		*(str + (*i)--) = ((*n % 10) * -1) + '0';
	else
		*(str + (*i)--) = (*n % 10) + '0';
	*n /= 10;
}

char	*ft_litoa(long int n)
{
	char			*str;
	unsigned int	i;
	unsigned int	sign;

	sign = 0;
	if (n < 0)
		sign = 1;
	str = malloc(sizeof(char) * (ft_litoa_len(n) + 1 + sign));
	str[ft_litoa_len(n) + sign] = '\0';
	i = ft_litoa_len(n) + sign - 1;
	if (n == 0)
		str[i--] = '0';
	while (n)
		sub(sign, str, &i, &n);
	if (sign)
		str[i] = '-';
	return (str);
}
