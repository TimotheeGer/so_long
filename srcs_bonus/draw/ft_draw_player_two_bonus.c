/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_draw_player_two.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigerber <tigerber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 19:41:17 by tigerber          #+#    #+#             */
/*   Updated: 2021/10/26 20:15:51 by tigerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/so_long.h"

void	ft_draw_player_start(t_data *d, int x2, int y2)
{
	double	y;
	double	x;

	y = d->p.y;
	x = d->p.x;
	if (d->keyp == 0)
	{
		d->pl1.color = ((int *)d->pl1.tex)[d->pl1.y2 * 25 + d->pl1.x2];
		if (d->pl1.color > 0)
			my_mlx_pixel_put(&d->screen,
				(x * d->m.maps + 13 + (d->p.mvx * 2)) + x2,
				(y * d->m.maps + 13 + (d->p.mvy * 2)) + y2, d->pl1.color);
	}
}

void	ft_draw_player_back(t_data *d, int x2, int y2)
{
	double	y;
	double	x;

	y = d->p.y;
	x = d->p.x;
	if (d->keyp == 'w')
	{
		if (d->count % 2)
		{
			d->pl4.color = ((int *)d->pl4.tex)[d->pl1.y2 * 25 + d->pl1.x2];
			if (d->pl4.color > 0)
				my_mlx_pixel_put(&d->screen,
					(x * d->m.maps + 13 + (d->p.mvx * 2)) + x2,
					(y * d->m.maps + 13 + (d->p.mvy * 2)) + y2, d->pl4.color);
		}
		else
		{
			d->pl5.color = ((int *)d->pl5.tex)[d->pl1.y2 * 25 + d->pl1.x2];
			if (d->pl5.color > 0)
				my_mlx_pixel_put(&d->screen,
					(x * d->m.maps + 13 + (d->p.mvx * 2)) + x2,
					(y * d->m.maps + 13 + (d->p.mvy * 2)) + y2, d->pl5.color);
		}
	}
}

void	ft_draw_player_front(t_data *d, int x2, int y2)
{
	double	y;
	double	x;

	y = d->p.y;
	x = d->p.x;
	if (d->keyp == 's')
	{
		if (d->count % 2)
		{
			d->pl2.color = ((int *)d->pl2.tex)[d->pl1.y2 * 25 + d->pl1.x2];
			if (d->pl2.color > 0)
				my_mlx_pixel_put(&d->screen,
					(x * d->m.maps + 13 + (d->p.mvx * 2)) + x2,
					(y * d->m.maps + 13 + (d->p.mvy * 2)) + y2, d->pl2.color);
		}
		else
		{
			d->pl3.color = ((int *)d->pl3.tex)[d->pl1.y2 * 25 + d->pl1.x2];
			if (d->pl3.color > 0)
				my_mlx_pixel_put(&d->screen,
					(x * d->m.maps + 13 + (d->p.mvx * 2)) + x2,
					(y * d->m.maps + 13 + (d->p.mvy * 2)) + y2, d->pl3.color);
		}
	}	
}

void	ft_draw_player_right(t_data *d, int x2, int y2)
{
	double	y;
	double	x;

	y = d->p.y;
	x = d->p.x;
	if (d->keyp == 'd')
	{
		if (d->count % 2)
		{
			d->pl6.color = ((int *)d->pl6.tex)[d->pl1.y2 * 25 + d->pl1.x2];
			if (d->pl6.color > 0)
				my_mlx_pixel_put(&d->screen,
					(x * d->m.maps + 13 + (d->p.mvx * 2)) + x2,
					(y * d->m.maps + 13 + (d->p.mvy * 2)) + y2, d->pl6.color);
		}
		else
		{
			d->pl7.color = ((int *)d->pl7.tex)[d->pl1.y2 * 25 + d->pl1.x2];
			if (d->pl7.color > 0)
				my_mlx_pixel_put(&d->screen,
					(x * d->m.maps + 13 + (d->p.mvx * 2)) + x2,
					(y * d->m.maps + 13 + (d->p.mvy * 2)) + y2, d->pl7.color);
		}
	}	
}

void	ft_draw_player_left(t_data *d, int x2, int y2)
{
	double	y;
	double	x;

	y = d->p.y;
	x = d->p.x;
	if (d->keyp == 'a')
	{
		if (d->count % 2)
		{
			d->pl8.color = ((int *)d->pl8.tex)[d->pl1.y2 * 25 + d->pl1.x2];
			if (d->pl8.color > 0)
				my_mlx_pixel_put(&d->screen,
					(x * d->m.maps + 13 + (d->p.mvx * 2)) + x2,
					(y * d->m.maps + 13 + (d->p.mvy * 2)) + y2, d->pl8.color);
		}
		else
		{
			d->pl9.color = ((int *)d->pl9.tex)[d->pl1.y2 * 25 + d->pl1.x2];
			if (d->pl9.color > 0)
				my_mlx_pixel_put(&d->screen,
					(x * d->m.maps + 13 + (d->p.mvx * 2)) + x2,
					(y * d->m.maps + 13 + (d->p.mvy * 2)) + y2, d->pl9.color);
		}	
	}
}
