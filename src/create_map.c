/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_map.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugrene <hugrene@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 13:09:12 by hugrene           #+#    #+#             */
/*   Updated: 2022/05/25 13:09:13 by hugrene          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

char	**ft_fill_map(int height, int width, t_list *list)
{
	char	**map;
	int		i;

	map = malloc(sizeof(char *) * (height + 1));
	i = 0;
	while (list)
	{
		map[i] = malloc(sizeof(char) * (width + i));
		map[i] = list->content;
		list = list->next;
		i++;
	}
	map[i] = NULL;
	return (map);
}

t_map	ft_get_map(int fd)
{
	t_map	map;
	char	*line;
	t_list	*list;

	map.height = 0;
	line = get_next_line(fd);
	map.width = ft_strlen(line);
	list = ft_lstnew(line);
	while (line)
	{
		if ((int)ft_strlen(line) != map.width)
			ft_stop_prog("longueur de map non identique", 0);
		if (map.height != 0)
			ft_lstadd_back(&list, ft_lstnew(line));
		line = get_next_line(fd);
		map.height++;
	}
	map.tab = ft_fill_map(map.height, map.width, list);
	return (map);
}
