/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_make_image.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigerber <tigerber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 14:29:36 by tigerber          #+#    #+#             */
/*   Updated: 2021/07/15 16:45:38 by tigerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"
# ifndef H
#  define H 320
# endif
# ifndef W
#  define W 832
# endif

void	ft_full_screen_color(t_data *d)
{
	int x = 0;
	int y = 0;
	int color = create_trgb(0, 84, 153, 199);
	while (y < d->m.size_y)
	{
		while (x < d->m.size_x)
		{
			my_mlx_pixel_put(&d->screen, x, y, color);
			x++;
		}
		x = 0;
		y++;
	}
}

int	ft_render_next_frame(t_data *d)
{
 	if (d->screen.img != NULL)
		mlx_destroy_image(d->mlx, d->screen.img);
	d->screen.img = mlx_new_image(d->mlx, d->m.size_x, d->m.size_y);
	d->screen.addr = mlx_get_data_addr(d->screen.img,
			&d->screen.bits_per_pixel,
			&d->screen.line_length,
			&d->screen.endian);
	ft_full_screen_color(d);
	ft_draw_map(d);
	ft_draw_player(d, 18);
	mlx_put_image_to_window(d->mlx, d->win, d->screen.img, 0, 0);   
	return (0);
}