/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugrene <hugrene@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 15:28:22 by hugrene           #+#    #+#             */
/*   Updated: 2022/09/05 15:28:23 by hugrene          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*str;
	unsigned int	i;

	if (!s)
		return (NULL);
	str = malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	str[0] = '\0';
	if (start >= ft_strlen(s) + 1)
		return (str);
	i = start;
	while (len && s[i])
	{
		str[i - start] = s[i];
		len--;
		i++;
	}
	str[i - start] = '\0';
	return (str);
}
