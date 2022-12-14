/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugrene <hugrene@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 15:26:01 by hugrene           #+#    #+#             */
/*   Updated: 2022/09/05 15:26:06 by hugrene          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * Function: ft_lstmap
 * --------------------
 * Iterates the list ’lst’ and applies the function ’f’ on the content of
 * each node. Creates a new list resulting of the successive applications of
 * the function ’f’.
 * The ’del’ function is used to delete the content of a node if needed.
 *
 * lst: The address of a pointer to a node.
 * f: The address of the function used to iterate on the list.
 * del: The address of the function used to delete the content of a node
 * if needed.
 * 
 * Return: The new list.
 */
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*node;

	new_lst = NULL;
	while (lst && f)
	{
		node = ft_lstnew(f(lst->content));
		if (!node)
		{
			ft_lstclear(&new_lst, del);
			return (NULL);
		}
		ft_lstadd_back(&new_lst, node);
		lst = lst->next;
	}
	return (new_lst);
}
