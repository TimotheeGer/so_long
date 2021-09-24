/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_draw.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigerber <tigerber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 14:16:59 by tigerber          #+#    #+#             */
/*   Updated: 2021/08/17 16:03:26 by tigerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/so_long.h"

# ifndef H
#  define H 300
# endif
# ifndef W
#  define W 600
# endif

void	ft_draw(t_data *d)
{
	printf("d->m.size_x = %d\n", d->m.size_x);
	printf("d->m.size_y = %d\n", d->m.size_y);
	d->mlx = mlx_init();
	d->win = mlx_new_window(d->mlx, d->m.size_x, d->m.size_y, "so_long");
	mlx_hook(d->win, 33, 1L << 17, ft_cross, d);
	mlx_hook(d->win, 2, 1L << 0, key_hook, d);
	mlx_hook(d->win, 3, 1L << 0, key_hook, d);
	
	mlx_loop_hook(d->mlx, ft_render_next_frame, d);
	mlx_loop(d->mlx);
}

void	ft_get_texture(t_data *d)
{
	d->tex.img = mlx_xpm_file_to_image(d->mlx, "./srcs/eau.xpm",
			&d->tex.width, &d->tex.heigth);
	d->tex.texture = (int *)mlx_get_data_addr(d->tex.img, &d->tex.bits_per_pixel,
			&d->tex.line_length, &d->tex.endian);
}

void	ft_test_texture(t_data *d)
{

	for(int y = 0; y < 25; ++y)
	for(int x = 0; x < 25; ++x)
	{
    	d->tex.color = d->tex.texture[(y * d->tex.line_length) + x];
		my_mlx_pixel_put(&d->screen, x, y, d->tex.color);
	}
}