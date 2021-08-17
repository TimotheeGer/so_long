/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_draw_player.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigerber <tigerber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 16:26:33 by tigerber          #+#    #+#             */
/*   Updated: 2021/08/17 15:20:50 by tigerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/so_long.h"

void	ft_draw_player(t_data *d, int size)
{
	int y = d->p.y;
	int x = d->p.x;
	int	x2;
	int	y2;

	x2 = -size;
	y2 = -size;
	while (y2 <= size -2)
	{
		while (x2 <= size -2)
		{
			my_mlx_pixel_put(&d->screen, (x * d->m.maps + 13 + (d->p.mvx * 2)) + x2,
				(y * d->m.maps + 13 + (d->p.mvy * 2)) + y2, 0XFFFF00);
			x2++;
		}
		x2 = -size;
		y2++;
	}
}