/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugrene <hugrene@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 15:01:37 by hugrene           #+#    #+#             */
/*   Updated: 2022/09/05 15:01:38 by hugrene          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ret;
	size_t	i;

	i = 0;
	ret = malloc(count * size);
	if (ret == NULL)
	{
		free(ret);
		exit (1);
	}
	while (i < count * size)
		*((char *)ret + i++) = 0;
	return ((void *)ret);
}
