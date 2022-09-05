/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugrene <hugrene@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 15:25:41 by hugrene           #+#    #+#             */
/*   Updated: 2022/09/05 15:25:42 by hugrene          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * Function: ft_lstclear
 * --------------------
 * Deletes and frees the given node and every successor of that node,
 * using the function ’del’ and free(3).
 * Finally, the pointer to the list must be set to NULL.
 *
 * lst: The address of a pointer to a node.
 * del: The address of the function used to delete the content of the node.
 */
void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;

	while (lst && *lst)
	{
		tmp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = tmp;
	}
}
