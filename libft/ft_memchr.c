/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugrene <hugrene@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 15:20:48 by hugrene           #+#    #+#             */
/*   Updated: 2022/09/05 15:20:49 by hugrene          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int n, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size)
	{
		if (*((unsigned char *)s + i) == (unsigned char)n)
			return ((unsigned char *)s + i);
		i++;
	}
	return (0);
}
