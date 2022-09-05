/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugrene <hugrene@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 15:11:00 by hugrene           #+#    #+#             */
/*   Updated: 2022/09/05 15:11:01 by hugrene          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * Function: ft_lstiter
 * --------------------
 * Iterates the list ’lst’ and applies the function ’f’ on the content
 * of each node
 *
 * lst: The address of a pointer to a node.
 * f: The address of the function used to iterate on the list.
 */
void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst && f)
	{
		f(lst->content);
		lst = lst->next;
	}
}
