/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugrene <hugrene@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 15:11:39 by hugrene           #+#    #+#             */
/*   Updated: 2022/09/05 15:11:40 by hugrene          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*temp;

	temp = (char *)src;
	i = 0;
	if (dst == NULL && src == NULL)
		return (NULL);
	if (src > dst)
	{
		while (i < len)
		{
			*((char *)dst + i) = temp[i];
			i++;
		}
	}
	else
	{
		while (len)
		{
			*((char *)dst + len - 1) = temp[len - 1];
			len--;
		}
	}
	return (dst);
}
