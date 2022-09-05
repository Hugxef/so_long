/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugrene <hugrene@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 15:30:30 by hugrene           #+#    #+#             */
/*   Updated: 2022/09/05 15:30:30 by hugrene          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * Function: ft_lstnew
 * --------------------
 * Allocates (with malloc(3)) and returns a new node.
 * The member variable ’content’ is initialized with the value of the
 * parameter ’content’. The variable ’next’ is initialized to NULL.
 *
 * content: The content to create the node with.
 * 
 * Return: The new node.
 */
t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->next = NULL;
	new->content = content;
	return (new);
}
