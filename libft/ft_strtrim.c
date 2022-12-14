/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugrene <hugrene@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 15:23:25 by hugrene           #+#    #+#             */
/*   Updated: 2022/09/05 15:23:25 by hugrene          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_trim(char c, const char *set)
{
	unsigned int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

static char	*cut_str(char const *str, unsigned int begin, unsigned int end)
{
	char			*tmp;
	unsigned int	i;

	if (str == NULL)
		return (NULL);
	tmp = malloc(sizeof(char) * (end - begin + 2));
	if (tmp == NULL)
		return (NULL);
	i = begin;
	while (str[i] && i <= end)
	{
		tmp[i - begin] = str[i];
		i++;
	}
	tmp[i - begin] = '\0';
	return (tmp);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char			*str;
	unsigned int	i;
	unsigned int	i_depart;
	unsigned int	i_final;

	if (!set)
		return ((char *)s1);
	if (s1 == NULL)
		return (NULL);
	if (ft_strlen(s1) == 0)
		return (cut_str(s1, 0, 0));
	i = 0;
	while (s1[i] && check_trim(s1[i], set))
		i++;
	i_depart = i;
	i = ft_strlen(s1) - 1;
	while (i > 0 && check_trim(s1[i], set))
		i--;
	i_final = i;
	str = cut_str(s1, i_depart, i_final);
	return (str);
}
