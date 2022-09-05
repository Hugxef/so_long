/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugrene <hugrene@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 15:10:24 by hugrene           #+#    #+#             */
/*   Updated: 2022/09/05 15:10:26 by hugrene          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * Function: ft_lstadd_back
 * --------------------
 * Adds the node new at the end of the list.
 *
 * lst: The address of a pointer to the first link of a list.
 * new: The address of a pointer to the node to be added to the list.
 */
void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tmp;

	if (lst && new)
	{
		tmp = *lst;
		if (*lst)
		{
			while (tmp->next)
				tmp = tmp->next;
			tmp->next = new;
		}
		else
			*lst = new;
	}
}
