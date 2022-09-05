/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugrene <hugrene@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 15:13:44 by hugrene           #+#    #+#             */
/*   Updated: 2022/09/05 15:13:46 by hugrene          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*ret;

	i = 0;
	ret = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
		{
			ret = ((char *)s + i);
		}
		i++;
	}
	if (s[i] == (char)c)
	{
		ret = ((char *)s + i);
	}
	return (ret);
}
