/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils_draw_map.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigerber <tigerber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 13:43:25 by tigerber          #+#    #+#             */
/*   Updated: 2021/10/21 14:03:32 by tigerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/so_long.h"

void	ft_init_map(t_data *d)
{
	d->m.x = 0;
	d->m.y = 0;
	d->m.xo = 0;
	d->m.xa = 0;
	d->m.color = 0x0000FF;
	d->m.maps = 25;
}

void	ft_explosion(t_data *d)
{
	ft_explosion_part_one(d);
	ft_explosion_part_two(d);
}

void	ft_explosion_part_one(t_data *d)
{
	if (d->map[d->explo_y][d->explo_x] == '2' && d->time++ == 7)
	{
		d->map[d->explo_y][d->explo_x] = '3';
		d->time = 0;
	}
	if (d->map[d->explo_y][d->explo_x] == '3' && d->time++ == 7)
	{
		d->map[d->explo_y][d->explo_x] = '4';
		d->time = 0;
	}
	if (d->map[d->explo_y][d->explo_x] == '4' && d->time++ == 7)
	{
		d->map[d->explo_y][d->explo_x] = '5';
		d->time = 0;
	}
	if (d->map[d->explo_y][d->explo_x] == '5' && d->time++ == 7)
	{
		d->map[d->explo_y][d->explo_x] = '6';
		d->time = 0;
	}
}

void	ft_explosion_part_two(t_data *d)
{
	if (d->map[d->explo_y][d->explo_x] == '6' && d->time++ == 7)
	{
		d->map[d->explo_y][d->explo_x] = '7';
		d->time = 0;
	}
	if (d->map[d->explo_y][d->explo_x] == '7' && d->time++ == 7)
	{
		d->map[d->explo_y][d->explo_x] = '8';
		d->time = 0;
	}
	if (d->map[d->explo_y][d->explo_x] == '8' && d->time++ == 7)
	{
		d->map[d->explo_y][d->explo_x] = '0';
		d->time = 0;
		d->indic_p = 0;
	}
}