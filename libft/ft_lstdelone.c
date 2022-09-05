/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugrene <hugrene@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 15:30:16 by hugrene           #+#    #+#             */
/*   Updated: 2022/09/05 15:30:17 by hugrene          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * Function: ft_lstdelone
 * --------------------
 * Takes as a parameter a node and frees the memory of the node’s
 * content using the function ’del’ given * as a parameter and free the node.
 * The memory of * ’next’ must not be freed.
 *
 * lst: The node to free.
 * del: The address of the function used to delete the content.
 */
void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst)
	{
		if (del)
			del(lst->content);
		free(lst);
	}
}
