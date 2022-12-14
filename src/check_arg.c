/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_arg.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugrene <hugrene@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 13:08:31 by hugrene           #+#    #+#             */
/*   Updated: 2022/05/25 13:08:32 by hugrene          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

void	ft_stop_prog(char *msg, int error)
{
	ft_printf("Error: %s\n", msg);
	exit(error);
}

int	ft_open_map(char **argv)
{
	int	fd;

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
		ft_stop_prog("Impossible d'ouvrir la map", 1);
	return (fd);
}

void	ft_check_arg(int argc, char **argv)
{
	char	*ext;

	if (argc != 2)
		ft_stop_prog("Nombre d'arguments invalide", 0);
	ext = ft_split(argv[1], '.')[1];
	if (ext && (ft_strncmp(ext, "ber", 3) || ft_strlen(ext) != 3))
		ft_stop_prog("Extension de la carte invalide", 0);
}

int	ft_exit_game(t_data *data)
{
	mlx_destroy_window(data->mlx_ptr, data->win_ptr);
	free(data->mlx_ptr);
	exit(0);
	return (0);
}
