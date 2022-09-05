/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugrene <hugrene@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 15:26:29 by hugrene           #+#    #+#             */
/*   Updated: 2022/09/05 15:26:29 by hugrene          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (*((unsigned char *)s2 + i) != *((unsigned char *)s1 + i))
		{
			if (*((unsigned char *)s2 + i) - *((unsigned char *)s1 + i) != 0)
				return (*((unsigned char *)s1 + i)
					- *((unsigned char *)s2 + i));
			else
				return (0);
		}
		i++;
	}
	return (0);
}
