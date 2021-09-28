/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_make_image.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigerber <tigerber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 14:29:36 by tigerber          #+#    #+#             */
/*   Updated: 2021/08/17 13:51:59 by tigerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/so_long.h"

# ifndef H
#  define H 300
# endif
# ifndef W
#  define W 600
# endif

void	ft_full_screen_color(t_data *d)
{
	int x = 0;
	int y = 0;
	int y2 = 0; 
	int x2 = 0;
	ft_get_texture(d);
	while (y < d->m.size_y)
	{
		while (x < d->m.size_x)
		{
			if(x2 == 25)
				x2 = 0;
    		d->eau.color = ((int *)d->eau.texture)[y2 * 25 + x2];
			my_mlx_pixel_put(&d->screen, x, y, d->eau.color);
			x++;
			x2++;
		}
		if (y2 == 25)
			y2 = 0;
		x = 0;
		y++;
		y2++;
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
	ft_draw_player(d, 12);
	// ft_test_texture(d);
	mlx_put_image_to_window(d->mlx, d->win, d->screen.img, 0, 0);   
	return (0);
}