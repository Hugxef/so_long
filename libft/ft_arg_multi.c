/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arg_multi.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugrene <hugrene@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 15:16:15 by hugrene           #+#    #+#             */
/*   Updated: 2022/09/05 15:16:15 by hugrene          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_arg_multi(const char *str, int i)
{
	int		j;
	char	*nbr;

	j = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		i++;
		j++;
	}
	nbr = malloc(sizeof(char) * (j + 1));
	i -= j;
	j = 0;
	while (str[i] >= '0' && str[i] <= '9')
		nbr[j++] = str[i++];
	nbr[j] = '\0';
	return (nbr);
}
