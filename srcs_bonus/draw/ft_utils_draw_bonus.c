/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils_draw.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigerber <tigerber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 15:00:52 by tigerber          #+#    #+#             */
/*   Updated: 2021/10/26 19:31:29 by tigerber         ###   ########.fr       */
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

int	create_trgb(int t, int r, int g, int b)
{
	return (t << 24 | r << 16 | g << 8 | b);
}

void	my_mlx_pixel_put(t_img *img, int x, int y, int color)
{
	char	*dst;

	dst = img->addr + (y * img->line_length + x * (img->b_p_pixel / 8));
	*(unsigned int *)dst = color;
}
