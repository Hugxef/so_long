/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugrene <hugrene@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 15:22:02 by hugrene           #+#    #+#             */
/*   Updated: 2022/09/05 15:22:05 by hugrene          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*str;
	unsigned int	i;
	unsigned int	s1_len;

	if (!s1)
		return ((char *)s2);
	if (!s2)
		return ((char *)s1);
	s1_len = ft_strlen(s1);
	str = malloc(sizeof(char) * (s1_len + ft_strlen(s2) + 1));
	if (str == NULL)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	while (s2[i - s1_len])
	{
		str[i] = s2[i - s1_len];
		i++;
	}
	str[i] = '\0';
	return (str);
}
