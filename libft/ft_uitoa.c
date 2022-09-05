/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uitoa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugrene <hugrene@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 15:23:36 by hugrene           #+#    #+#             */
/*   Updated: 2022/09/05 15:23:36 by hugrene          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	ft_uitoa_len(unsigned int n)
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

char	*ft_uitoa(unsigned int n)
{
	char				*str;
	unsigned long int	i;

	str = malloc(sizeof(char) * (ft_uitoa_len(n) + 1));
	str[ft_uitoa_len(n)] = '\0';
	i = ft_uitoa_len(n) - 1;
	if (n == 0)
		str[i--] = '0';
	while (n)
	{
		str[i--] = (n % 10) + '0';
		n /= 10;
	}
	return (str);
}
