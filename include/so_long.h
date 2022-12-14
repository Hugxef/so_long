/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugrene <hugrene@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 12:17:03 by hugrene           #+#    #+#             */
/*   Updated: 2022/05/24 12:21:16 by hugrene          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H
# define BUFFER_SIZE 100
# define TILESIZE 48

# include "mlx.h"
# include <stdio.h>
# include <stdlib.h>
# include "../libft/libft.h"
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>

typedef struct s_img
{
	void	*ptr_img;
	char	*file;
	int		width;
	int		height;
}	t_img;

typedef struct s_items
{
	char	*name;
	int		pos_x;
	int		pos_y;
	t_img	img;
}	t_items;

typedef struct s_map
{
	char	**tab;
	int		width;
	int		height;
}	t_map;

typedef struct s_font
{
	t_items	nul;
	t_items	one;
	t_items	two;
	t_items	three;
	t_items	four;
	t_items	five;
	t_items	six;
	t_items	seven;
	t_items	eight;
	t_items	nine;
	t_items	lose;
	t_items	slash;
}	t_font;

typedef struct s_enemy
{
	t_items	enemy1;
	t_items	enemy2;
	t_items	enemy3;
}	t_enemy;

typedef struct s_data
{
	void	*mlx_ptr;
	void	*win_ptr;
	t_map	map;
	t_items	wall;
	t_items	sky;
	t_items	perso;
	t_items	collect;
	t_items	exit;
	t_items	end;
	t_items	lumens;
	t_font	font;
	t_enemy	enemy;
	int		count_move;
	int		count_collect;
	int		count_collect_tot;
	int		is_end;
}	t_data;

int		ft_open_map(char **argv);
void	ft_check_arg(int argc, char **argv);
void	ft_stop_prog(char *msg, int error);
char	**ft_fill_map(int height, int width, t_list *list);
t_map	ft_get_map(int fd);
void	ft_check_map(t_data *data);

void	ft_display_map(t_data *data);

void	ft_create_img_map(t_data *data);
void	ft_generate_enemy(t_data *data);
void	ft_init_perso(t_data *data);

/*  EVENMENT KEYBOARD  */

int		deal_key(int key, t_data *data);
int		ft_is_move_allow(t_data *data, int key);
int		ft_exit_game(t_data *data);
void	ft_check_case(t_data *data);

/*  INIT ITEM  */
void	ft_init_items(t_data *data);
void	ft_init_perso(t_data *data);
void	ft_init_dimension(t_data *data);
void	ft_init_wall(t_data *data);
void	ft_init_sky(t_data *data);
void	ft_init_collect(t_data *data);
void	ft_init_exit(t_data *data);
void	ft_init_end(t_data *data);
void	ft_init_lumens(t_data *data);
void	ft_init_enemy(t_data *data);

/*  FONT  */
void	ft_init_font(t_data *data);
void	ft_display_count_move(t_data *data);
void	ft_display_lumens(t_data *data);

void	ft_init_font_0_3(t_data *data);
void	ft_init_font_4_7(t_data *data);
void	ft_init_font_8_9(t_data *data);
void	ft_display_count_move_0_4(t_data *data, char c, int pos_x, int pos_y);
void	ft_display_count_move_5_9(t_data *data, char c, int pos_x, int pos_y);

#endif
