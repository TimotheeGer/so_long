/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_draw_map_three.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigerber <tigerber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 17:57:57 by tigerber          #+#    #+#             */
/*   Updated: 2021/10/26 20:21:34 by tigerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/so_long.h"

void	ft_print_torn_part_one(t_data *d, int x, int y)
{
	if (d->map[d->m.y][d->m.x] == 'T')
	{
		d->torn.color = ((int *)d->torn.tex)[d->roc.y2 * 25 + d->roc.x2];
		if (d->torn.color > 0)
			my_mlx_pixel_put(&d->screen, x, y, d->torn.color);
	}
	if (d->map[d->m.y][d->m.x] == 'Y')
	{
		d->torn1.color = ((int *)d->torn1.tex)[d->roc.y2 * 25 + d->roc.x2];
		if (d->torn1.color > 0)
			my_mlx_pixel_put(&d->screen, x, y, d->torn1.color);
	}
	if (d->map[d->m.y][d->m.x] == 'U')
	{
		d->torn2.color = ((int *)d->torn2.tex)[d->roc.y2 * 25 + d->roc.x2];
		if (d->torn2.color > 0)
			my_mlx_pixel_put(&d->screen, x, y, d->torn2.color);
	}
}

void	ft_print_torn_part_two(t_data *d, int x, int y)
{
	if (d->map[d->m.y][d->m.x] == 'I')
	{
		d->torn3.color = ((int *)d->torn3.tex)[d->roc.y2 * 25 + d->roc.x2];
		if (d->torn3.color > 0)
			my_mlx_pixel_put(&d->screen, x, y, d->torn3.color);
	}
	if (d->map[d->m.y][d->m.x] == 'G')
	{
		d->torn4.color = ((int *)d->torn4.tex)[d->roc.y2 * 25 + d->roc.x2];
		if (d->torn4.color > 0)
			my_mlx_pixel_put(&d->screen, x, y, d->torn4.color);
	}
	if (d->map[d->m.y][d->m.x] == 'H')
	{
		d->torn5.color = ((int *)d->torn5.tex)[d->roc.y2 * 25 + d->roc.x2];
		if (d->torn5.color > 0)
			my_mlx_pixel_put(&d->screen, x, y, d->torn5.color);
	}
}
