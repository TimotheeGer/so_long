/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_draw_map.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigerber <tigerber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 15:09:43 by tigerber          #+#    #+#             */
/*   Updated: 2021/10/20 20:24:40 by tigerber         ###   ########.fr       */
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
		if(d->map[d->m.y][d->m.x] == 'O')
		{
			d->gate_open.color = ((int *)d->gate_open.texture)[d->pierre.y2 * 25 + d->pierre.x2];
			if (d->gate_open.color > 0)
				my_mlx_pixel_put(&d->screen, x, y, d->gate_open.color);
		}
		
		// if(d->map[d->m.y][d->m.x] == '2')
		// {
		// 	d->explo1.color = ((int *)d->explo1.texture)[d->pierre.y2 * 25 + d->pierre.x2];
		// 	if (d->explo1.color > 0)
		// 		my_mlx_pixel_put(&d->screen, x, y, d->explo1.color);

		// 	d->map[d->m.y][d->m.x] = '3';
		// }
		
		
		// if(d->map[d->m.y][d->m.x] == '3')
		// {
		// 	d->explo2.color = ((int *)d->explo2.texture)[d->pierre.y2 * 25 + d->pierre.x2];
		// 	if (d->explo2.color > 0)
		// 		my_mlx_pixel_put(&d->screen, x, y, d->explo2.color);
		// 	int i = 100000000;
		// 	while (i)
		// 		i--;
		// 	d->map[d->m.y][d->m.x] = '4';
		// }
		
		// if(d->map[d->m.y][d->m.x] == '4')
		// {
		// 	d->explo3.color = ((int *)d->explo3.texture)[d->pierre.y2 * 25 + d->pierre.x2];
		// 	if (d->explo3.color > 0)
		// 		my_mlx_pixel_put(&d->screen, x, y, d->explo3.color);
		// 	sleep(1);
		// 	d->map[d->m.y][d->m.x] = '5';
		// }

		// if(d->map[d->m.y][d->m.x] == '5')
		// {
		// 	d->explo4.color = ((int *)d->explo4.texture)[d->pierre.y2 * 25 + d->pierre.x2];
		// 	if (d->explo4.color > 0)
		// 		my_mlx_pixel_put(&d->screen, x, y, d->explo4.color);
		// 	sleep(1);
			
		// 	d->map[d->m.y][d->m.x] = '6';
		// }

		// if(d->map[d->m.y][d->m.x] == '6')
		// {
		// 	d->explo5.color = ((int *)d->explo5.texture)[d->pierre.y2 * 25 + d->pierre.x2];
		// 	if (d->explo5.color > 0)
		// 		my_mlx_pixel_put(&d->screen, x, y, d->explo5.color);
		// 	sleep(1);
			
		// 	d->map[d->m.y][d->m.x] = '7';
		// }

		if(d->map[d->m.y][d->m.x] == '2')
		{
			d->explo6.color = ((int *)d->explo6.texture)[d->pierre.y2 * 25 + d->pierre.x2];
			if (d->explo6.color > 0)
				my_mlx_pixel_put(&d->screen, x, y, d->explo6.color);
			// // sleep(1);
			
			// d->map[d->m.y][d->m.x] = '8';
		}

		// if(d->map[d->m.y][d->m.x] == '2')
		// {
		// 	d->explo7.color = ((int *)d->explo7.texture)[d->pierre.y2 * 25 + d->pierre.x2];
		// 	if (d->explo7.color > 0)
		// 		my_mlx_pixel_put(&d->screen, x, y, d->explo7.color);
		// 	// d->map[d->m.y][d->m.x] = '4';
		// }
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
	if (d->indic_c == 0)
		d->map[(int)d->e.y][(int)d->e.x] = 'O';
		
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
