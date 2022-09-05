/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugrene <hugrene@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 15:20:11 by hugrene           #+#    #+#             */
/*   Updated: 2022/09/05 15:20:12 by hugrene          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * Function: ft_lstadd_front
 * --------------------
 * Adds the node new at the beginning of the list.
 *
 * lst: The address of a pointer to the first link of a list.
 * new: The address of a pointer to the node to be added to the list.
 */
void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst && new)
		new->next = *lst;
	if (new)
		*lst = new;
}
