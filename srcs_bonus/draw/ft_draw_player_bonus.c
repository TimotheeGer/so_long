/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_draw_player.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigerber <tigerber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 16:26:33 by tigerber          #+#    #+#             */
/*   Updated: 2021/10/26 20:15:51 by tigerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/so_long.h"

void	ft_draw_player(t_data *d, int size)
{
	int	x2;
	int	y2;

	x2 = -size;
	y2 = -size;
	d->pl1.x2 = 0;
	d->pl1.y2 = 0;
	while (y2 <= size - 2)
	{
		while (x2 <= size - 2)
		{
			ft_draw_player_start(d, x2, y2);
			ft_draw_player_back(d, x2, y2);
			ft_draw_player_front(d, x2, y2);
			ft_draw_player_right(d, x2, y2);
			ft_draw_player_left(d, x2, y2);
			x2++;
			d->pl1.x2++;
		}
		x2 = -size;
		d->pl1.x2 = 0;
		y2++;
		d->pl1.y2++;
	}
}
