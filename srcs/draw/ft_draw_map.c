/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_draw_map.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigerber <tigerber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 15:09:43 by tigerber          #+#    #+#             */
/*   Updated: 2021/07/15 16:23:36 by tigerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	p_map(t_data *d, int x, int y, int max)
{
	while (y < max)
	{
		my_mlx_pixel_put(&d->screen, x, y, d->m.color);
		y++;
	}
}

void	ft_init_map(t_data *d)
{
	d->m.x = 0;
	d->m.y = 0;
	d->m.xo = 0;
	d->m.xa = 0;
	d->m.color = 0x0000FF;
	d->m.maps = 40;
}

void	ft_draw_map(t_data *d)
{
	ft_init_map(d);
	while (d->map[d->m.y])
	{
		while (d->map[d->m.y][d->m.x])
		{
			if(d->map[d->m.y][d->m.x] == '1')
				d->m.color = 0xFFFFFF;
			else if (d->map[d->m.y][d->m.x] == 'E')
				d->m.color = 0x000000;
			else if (d->map[d->m.y][d->m.x] == 'C')
				d->m.color = 0x00FF00;
			else
				d->m.color = create_trgb(0, 84, 153, 199);
			d->m.xo = d->m.x * d->m.maps;
			d->m.yo = d->m.y * d->m.maps;
			d->m.xa = 0 + d->m.xo + 1;
			while (d->m.xa < d->m.maps + d->m.xo - 1)
			{
				p_map(d, d->m.xa, 0 + d->m.yo + 1, d->m.maps + d->m.yo - 1);
				d->m.xa++;
			}
			d->m.x++;
		}
		d->m.x = 0;
		d->m.y++;
	}
}
