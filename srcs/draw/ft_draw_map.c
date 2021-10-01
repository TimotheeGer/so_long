/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_draw_map.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigerber <tigerber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 15:09:43 by tigerber          #+#    #+#             */
/*   Updated: 2021/10/01 14:40:51 by tigerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/so_long.h"

void	p_map(t_data *d, int x, int y, int max)
{
	d->pierre.y2 = 0;
	while (y < max)
	{
		if(d->map[d->m.y][d->m.x] == '1')
		{
			d->pierre.color = ((int *)d->pierre.texture)[d->pierre.y2 * 25 + d->pierre.x2];
			if (d->pierre.color > 0)
				my_mlx_pixel_put(&d->screen, x, y, d->pierre.color);
		}
		if(d->map[d->m.y][d->m.x] == 'C')
		{
			d->pomme.color = ((int *)d->pomme.texture)[d->pierre.y2 * 25 + d->pierre.x2];
			if (d->pomme.color > 0)
				my_mlx_pixel_put(&d->screen, x, y, d->pomme.color);
		}
		if(d->map[d->m.y][d->m.x] == 'E')
		{
			d->gate.color = ((int *)d->gate.texture)[d->pierre.y2 * 25 + d->pierre.x2];
			if (d->gate.color > 0)
				my_mlx_pixel_put(&d->screen, x, y, d->gate.color);
		}
		y++;
		d->pierre.y2++;
	}
}

void	ft_init_map(t_data *d)
{
	d->m.x = 0;
	d->m.y = 0;
	d->m.xo = 0;
	d->m.xa = 0;
	d->m.color = 0x0000FF;
	d->m.maps = 25;
}

void	ft_draw_map(t_data *d)
{
	ft_init_map(d);
	while (d->map[d->m.y])
	{
		while (d->map[d->m.y][d->m.x])
		{
			d->m.xo = d->m.x * d->m.maps;
			d->m.yo = d->m.y * d->m.maps;
			d->m.xa = 0 + d->m.xo + 1;
			d->pierre.x2 = 0;
			while (d->m.xa < d->m.maps + d->m.xo)
			{
				if (d->map[d->m.y][d->m.x] != '0')
				p_map(d, d->m.xa, 0 + d->m.yo + 1, d->m.maps + d->m.yo - 1);
				d->m.xa++;
				d->pierre.x2++;
			}
			d->m.x++;
		}
		d->m.x = 0;
		d->m.y++;
	}
}
