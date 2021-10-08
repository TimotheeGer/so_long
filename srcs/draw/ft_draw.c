/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_draw.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigerber <tigerber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 14:16:59 by tigerber          #+#    #+#             */
/*   Updated: 2021/10/08 19:21:46 by tigerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/so_long.h"

# ifndef H
#  define H 300
# endif
# ifndef W
#  define W 600
# endif

void	ft_draw(t_data *d)
{
	d->mlx = mlx_init();
	d->win = mlx_new_window(d->mlx, d->m.size_x, d->m.size_y, "so_long");
	ft_get_texture(d);
	ft_get_texture_player_one(d);
	ft_get_texture_player_two(d);
	ft_get_texture_player_three(d);
	ft_get_texture_explosion(d);
	printf("allo12\n");
	mlx_hook(d->win, 33, 1L << 17, ft_cross, d);
	mlx_hook(d->win, 2, 1L << 0, key_hook, d);
	mlx_hook(d->win, 3, 1L << 0, key_hook, d);
	mlx_loop_hook(d->mlx, ft_render_next_frame, d);
	mlx_loop(d->mlx);
}
