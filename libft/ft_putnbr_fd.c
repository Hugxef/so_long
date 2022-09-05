/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugrene <hugrene@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 15:27:11 by hugrene           #+#    #+#             */
/*   Updated: 2022/09/05 15:27:12 by hugrene          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_pow(int n)
{
	unsigned int	i;

	i = 1;
	while (n / 10)
	{
		n /= 10;
		i *= 10;
	}
	return (i);
}

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	len;
	char			c;

	len = ft_pow(n);
	if (n == -2147483648)
		write(fd, "-2147483648", 11);
	else
	{
		if (n < 0)
		{
			write (fd, "-", 1);
			n *= -1;
		}
		while (len)
		{
			c = (n / len) + '0';
			write(fd, &c, 1);
			n %= len;
			len /= 10;
		}
	}
}
