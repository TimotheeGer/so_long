/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_make_image.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigerber <tigerber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 14:29:36 by tigerber          #+#    #+#             */
/*   Updated: 2021/10/26 19:28:50 by tigerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/so_long.h"

void	ft_full_screen_color(t_data *d)
{
	int	x;
	int	y;

	y = 0;
	x = 0;
	d->eau.y2 = 0;
	d->eau.x2 = 0;
	while (y < d->m.size_y)
	{
		while (x < d->m.size_x)
		{
			if (d->eau.x2 == 25)
				d->eau.x2 = 0;
			d->eau.color = ((int *)d->eau.tex)[d->eau.y2 * 25 + d->eau.x2];
			my_mlx_pixel_put(&d->screen, x, y, d->eau.color);
			x++;
			d->eau.x2++;
		}
		if (d->eau.y2 == 24)
			d->eau.y2 = 0;
		x = 0;
		y++;
		d->eau.y2++;
	}
}

void	ft_put_box(t_data *d)
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	while (y < 25)
	{
		while (x < 200)
		{	
			d->box.color = ((int *)d->box.tex)[y * 200 + x];
			if (d->box.color > 0)
				my_mlx_pixel_put(&d->screen, x, y, d->box.color);
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
			&d->screen.b_p_pixel,
			&d->screen.line_length,
			&d->screen.endian);
	ft_full_screen_color(d);
	ft_draw_map(d);
	ft_draw_player(d, 12);
	// BONUS
	// ft_put_box(d);
	mlx_put_image_to_window(d->mlx, d->win, d->screen.img, 0, 0);
	// BONUS
	// ft_put_steps(d);
	// mlx_string_put(d->mlx, d->win, 15, 17, 0x000000, d->str_steps);  
	return (0);
}
