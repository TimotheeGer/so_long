/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_draw.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigerber <tigerber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 14:16:59 by tigerber          #+#    #+#             */
/*   Updated: 2021/10/26 19:18:53 by tigerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/so_long.h"

void	ft_draw(t_data *d)
{
	d->mlx = mlx_init();
	d->win = mlx_new_window(d->mlx, d->m.size_x, d->m.size_y, "so_long");
	ft_get_texture(d);
	ft_get_texture_player(d);
	ft_get_texture_explosion(d);
	mlx_hook(d->win, 33, 1L << 17, ft_cross, d);
	mlx_hook(d->win, 2, 1L << 0, key_hook, d);
	mlx_hook(d->win, 3, 1L << 0, key_hook, d);
	mlx_loop_hook(d->mlx, ft_render_next_frame, d);
	mlx_loop(d->mlx);
}
