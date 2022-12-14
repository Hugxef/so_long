/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   font_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugrene <hugrene@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 13:09:41 by hugrene           #+#    #+#             */
/*   Updated: 2022/05/25 13:09:42 by hugrene          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

void	ft_init_font_0_3(t_data *data)
{
	data->font.nul.img.file = "img/font/nul.png";
	data->font.nul.img.width = TILESIZE;
	data->font.nul.img.height = TILESIZE;
	data->font.nul.img.ptr_img = mlx_png_file_to_image(data->mlx_ptr, \
	data->font.nul.img.file, &data->font.nul.img.width, \
	&data->font.nul.img.height);
	data->font.one.img.file = "img/font/one.png";
	data->font.one.img.width = TILESIZE;
	data->font.one.img.height = TILESIZE;
	data->font.one.img.ptr_img = mlx_png_file_to_image(data->mlx_ptr, \
	data->font.one.img.file, &data->font.one.img.width, \
	&data->font.one.img.height);
	data->font.two.img.file = "img/font/two.png";
	data->font.two.img.width = TILESIZE;
	data->font.two.img.height = TILESIZE;
	data->font.two.img.ptr_img = mlx_png_file_to_image(data->mlx_ptr, \
	data->font.two.img.file, &data->font.two.img.width, \
	&data->font.two.img.height);
	data->font.three.img.file = "img/font/three.png";
	data->font.three.img.width = TILESIZE;
	data->font.three.img.height = TILESIZE;
	data->font.three.img.ptr_img = mlx_png_file_to_image(data->mlx_ptr, \
	data->font.three.img.file, \
	&data->font.three.img.width, &data->font.three.img.height);
}

void	ft_init_font_4_7(t_data *data)
{
	data->font.four.img.file = "img/font/four.png";
	data->font.four.img.width = TILESIZE;
	data->font.four.img.height = TILESIZE;
	data->font.four.img.ptr_img = mlx_png_file_to_image(data->mlx_ptr, \
	data->font.four.img.file, \
	&data->font.four.img.width, &data->font.four.img.height);
	data->font.five.img.file = "img/font/five.png";
	data->font.five.img.width = TILESIZE;
	data->font.five.img.height = TILESIZE;
	data->font.five.img.ptr_img = mlx_png_file_to_image(data->mlx_ptr, \
	data->font.five.img.file, &data->font.five.img.width, \
	&data->font.five.img.height);
	data->font.six.img.file = "img/font/six.png";
	data->font.six.img.width = TILESIZE;
	data->font.six.img.height = TILESIZE;
	data->font.six.img.ptr_img = mlx_png_file_to_image(data->mlx_ptr, \
	data->font.six.img.file, &data->font.six.img.width, \
	&data->font.six.img.height);
	data->font.seven.img.file = "img/font/seven.png";
	data->font.seven.img.width = TILESIZE;
	data->font.seven.img.height = TILESIZE;
	data->font.seven.img.ptr_img = mlx_png_file_to_image(data->mlx_ptr, \
	data->font.seven.img.file, &data->font.seven.img.width, \
	&data->font.seven.img.height);
}

void	ft_init_font_8_9(t_data *data)
{
	data->font.eight.img.file = "img/font/eight.png";
	data->font.eight.img.width = TILESIZE;
	data->font.eight.img.height = TILESIZE;
	data->font.eight.img.ptr_img = mlx_png_file_to_image(data->mlx_ptr, \
	data->font.eight.img.file, &data->font.eight.img.width, \
	&data->font.eight.img.height);
	data->font.nine.img.file = "img/font/nine.png";
	data->font.nine.img.width = TILESIZE;
	data->font.nine.img.height = TILESIZE;
	data->font.nine.img.ptr_img = mlx_png_file_to_image(data->mlx_ptr, \
	data->font.nine.img.file, &data->font.nine.img.width, \
	&data->font.nine.img.height);
}

void	ft_display_count_move_0_4(t_data *data, char c, int pos_x, int pos_y)
{
	if (c == '0')
		mlx_put_image_to_window(data->mlx_ptr, data->win_ptr, \
		data->font.nul.img.ptr_img, pos_x, pos_y);
	if (c == '1')
		mlx_put_image_to_window(data->mlx_ptr, data->win_ptr, \
		data->font.one.img.ptr_img, pos_x, pos_y);
	if (c == '2')
		mlx_put_image_to_window(data->mlx_ptr, data->win_ptr, \
		data->font.two.img.ptr_img, pos_x, pos_y);
	if (c == '3')
		mlx_put_image_to_window(data->mlx_ptr, data->win_ptr, \
		data->font.three.img.ptr_img, pos_x, pos_y);
	if (c == '4')
		mlx_put_image_to_window(data->mlx_ptr, data->win_ptr, \
		data->font.four.img.ptr_img, pos_x, pos_y);
}

void	ft_display_count_move_5_9(t_data *data, char c, int pos_x, int pos_y)
{
	if (c == '5')
		mlx_put_image_to_window(data->mlx_ptr, data->win_ptr, \
		data->font.five.img.ptr_img, pos_x, pos_y);
	if (c == '6')
		mlx_put_image_to_window(data->mlx_ptr, data->win_ptr, \
		data->font.six.img.ptr_img, pos_x, pos_y);
	if (c == '7')
		mlx_put_image_to_window(data->mlx_ptr, data->win_ptr, \
		data->font.seven.img.ptr_img, pos_x, pos_y);
	if (c == '8')
		mlx_put_image_to_window(data->mlx_ptr, data->win_ptr, \
		data->font.eight.img.ptr_img, pos_x, pos_y);
	if (c == '9')
		mlx_put_image_to_window(data->mlx_ptr, data->win_ptr, \
		data->font.nine.img.ptr_img, pos_x, pos_y);
}
