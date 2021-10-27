/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_draw_map.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigerber <tigerber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 15:09:43 by tigerber          #+#    #+#             */
/*   Updated: 2021/10/26 20:18:27 by tigerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/so_long.h"

void	p_map(t_data *d, int x, int y, int max)
{
	d->roc.y2 = 0;
	while (y < max)
	{
		ft_print_texture_pierre_colect(d, x, y);
		ft_print_texture_gate_and_open(d, x, y);
		ft_print_explo_part_one(d, x, y);
		ft_print_explo_part_two(d, x, y);
		ft_print_torn_part_one(d, x, y);
		ft_print_torn_part_two(d, x, y);
		y++;
		d->roc.y2++;
	}
}

void	ft_draw_map(t_data *d)
{
	ft_init_map(d);
	ft_explosion(d);
	ft_torn_sheet(d);
	while (d->map[d->m.y])
	{
		while (d->map[d->m.y][d->m.x])
		{
			d->m.xo = d->m.x * d->m.maps;
			d->m.yo = d->m.y * d->m.maps;
			d->m.xa = 0 + d->m.xo + 1;
			d->roc.x2 = 0;
			while (d->m.xa < d->m.maps + d->m.xo)
			{
				if (d->map[d->m.y][d->m.x] != '0')
					p_map(d, d->m.xa, 0 + d->m.yo + 1, d->m.maps + d->m.yo - 1);
				d->m.xa++;
				d->roc.x2++;
			}
			d->m.x++;
		}
		d->m.x = 0;
		d->m.y++;
	}
}
