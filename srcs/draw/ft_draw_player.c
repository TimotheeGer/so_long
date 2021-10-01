/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_draw_player.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigerber <tigerber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 16:26:33 by tigerber          #+#    #+#             */
/*   Updated: 2021/10/01 17:49:16 by tigerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/so_long.h"

void	ft_draw_player(t_data *d, int size)
{
	double y = d->p.y;
	double x = d->p.x;
	int	x2;
	int	y2;
	int x3 = 0;
	int y3 = 0;

	x2 = -size;
	y2 = -size;
	while (y2 <= size -2)
	{
		while (x2 <= size -2)
		{
			if (d->keyp == 0)
			{
				d->player1.color = ((int *)d->player1.texture)[y3 * 25 + x3];
				if (d->player1.color > 0)
					my_mlx_pixel_put(&d->screen, (x * d->m.maps + 13 + (d->p.mvx * 2)) + x2,
					(y * d->m.maps + 13 + (d->p.mvy * 2)) + y2, d->player1.color);
			}
			if (d->keyp == 'w')
			{
				if (d->count % 2)
				{
					d->player4.color = ((int *)d->player4.texture)[y3 * 25 + x3];
					if (d->player4.color > 0)
						my_mlx_pixel_put(&d->screen, (x * d->m.maps + 13 + (d->p.mvx * 2)) + x2,
						(y * d->m.maps + 13 + (d->p.mvy * 2)) + y2, d->player4.color);
				}
				else
				{
					d->player5.color = ((int *)d->player5.texture)[y3 * 25 + x3];
					if (d->player5.color > 0)
						my_mlx_pixel_put(&d->screen, (x * d->m.maps + 13 + (d->p.mvx * 2)) + x2,
						(y * d->m.maps + 13 + (d->p.mvy * 2)) + y2, d->player5.color);
				}
			}
			if (d->keyp == 's')
			{
				if (d->count % 2)
				{
					d->player2.color = ((int *)d->player2.texture)[y3 * 25 + x3];
					if (d->player2.color > 0)
						my_mlx_pixel_put(&d->screen, (x * d->m.maps + 13 + (d->p.mvx * 2)) + x2,
						(y * d->m.maps + 13 + (d->p.mvy * 2)) + y2, d->player2.color);
				}
				else
				{
					d->player3.color = ((int *)d->player3.texture)[y3 * 25 + x3];
					if (d->player3.color > 0)
						my_mlx_pixel_put(&d->screen, (x * d->m.maps + 13 + (d->p.mvx * 2)) + x2,
						(y * d->m.maps + 13 + (d->p.mvy * 2)) + y2, d->player3.color);
				}
			}
			if (d->keyp == 'd')
			{
				if (d->count % 2)
				{
					d->player6.color = ((int *)d->player6.texture)[y3 * 25 + x3];
					if (d->player6.color > 0)
						my_mlx_pixel_put(&d->screen, (x * d->m.maps + 13 + (d->p.mvx * 2)) + x2,
						(y * d->m.maps + 13 + (d->p.mvy * 2)) + y2, d->player6.color);
				}
				else
				{
					d->player7.color = ((int *)d->player7.texture)[y3 * 25 + x3];
					if (d->player7.color > 0)
						my_mlx_pixel_put(&d->screen, (x * d->m.maps + 13 + (d->p.mvx * 2)) + x2,
						(y * d->m.maps + 13 + (d->p.mvy * 2)) + y2, d->player7.color);
				}
			}
			if (d->keyp == 'a')
			{
				if (d->count % 2)
				{
					d->player8.color = ((int *)d->player8.texture)[y3 * 25 + x3];
					if (d->player8.color > 0)
						my_mlx_pixel_put(&d->screen, (x * d->m.maps + 13 + (d->p.mvx * 2)) + x2,
						(y * d->m.maps + 13 + (d->p.mvy * 2)) + y2, d->player8.color);
				}
				else
				{
					d->player9.color = ((int *)d->player9.texture)[y3 * 25 + x3];
					if (d->player9.color > 0)
						my_mlx_pixel_put(&d->screen, (x * d->m.maps + 13 + (d->p.mvx * 2)) + x2,
						(y * d->m.maps + 13 + (d->p.mvy * 2)) + y2, d->player9.color);
				}	
			}
			x2++;
			x3++;
		}
		x2 = -size;
		x3 = 0;
		y2++;
		y3++;
	}
}