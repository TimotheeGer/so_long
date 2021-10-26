/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_draw_map_two.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigerber <tigerber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 17:35:36 by tigerber          #+#    #+#             */
/*   Updated: 2021/10/26 20:20:11 by tigerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/so_long.h"

void	ft_print_texture_pierre_colect(t_data *d, int x, int y)
{
	if (d->map[d->m.y][d->m.x] == '1')
	{
		d->roc.color = ((int *)d->roc.tex)[d->roc.y2 * 25 + d->roc.x2];
		if (d->roc.color > 0)
			my_mlx_pixel_put(&d->screen, x, y, d->roc.color);
	}
	if (d->map[d->m.y][d->m.x] == 'C')
	{
		d->pomme.color = ((int *)d->pomme.tex)[d->roc.y2 * 25 + d->roc.x2];
		if (d->pomme.color > 0)
			my_mlx_pixel_put(&d->screen, x, y, d->pomme.color);
	}
}

void	ft_print_texture_gate_and_open(t_data *d, int x, int y)
{
	if (d->map[d->m.y][d->m.x] == 'E')
	{
		d->gate.color = ((int *)d->gate.tex)[d->roc.y2 * 25 + d->roc.x2];
		if (d->gate.color > 0)
			my_mlx_pixel_put(&d->screen, x, y, d->gate.color);
		if (d->indic_c == 0)
			d->map[d->m.y][d->m.x] = 'O';
	}
	if (d->map[d->m.y][d->m.x] == 'O')
	{
		d->gate_o.color = ((int *)d->gate_o.tex)[d->roc.y2 * 25 + d->roc.x2];
		if (d->gate_o.color > 0)
			my_mlx_pixel_put(&d->screen, x, y, d->gate_o.color);
	}
}

void	ft_print_explo_part_one(t_data *d, int x, int y)
{
	if (d->map[d->m.y][d->m.x] == '2')
	{
		d->explo1.color = ((int *)d->explo1.tex)[d->roc.y2 * 25 + d->roc.x2];
		if (d->explo1.color > 0)
			my_mlx_pixel_put(&d->screen, x, y, d->explo1.color);
	}
	if (d->map[d->m.y][d->m.x] == '3')
	{
		d->explo2.color = ((int *)d->explo2.tex)[d->roc.y2 * 25 + d->roc.x2];
		if (d->explo2.color > 0)
			my_mlx_pixel_put(&d->screen, x, y, d->explo2.color);
	}
	if (d->map[d->m.y][d->m.x] == '4')
	{
		d->explo3.color = ((int *)d->explo3.tex)[d->roc.y2 * 25 + d->roc.x2];
		if (d->explo3.color > 0)
			my_mlx_pixel_put(&d->screen, x, y, d->explo3.color);
	}
	if (d->map[d->m.y][d->m.x] == '5')
	{
		d->explo4.color = ((int *)d->explo4.tex)[d->roc.y2 * 25 + d->roc.x2];
		if (d->explo4.color > 0)
			my_mlx_pixel_put(&d->screen, x, y, d->explo4.color);
	}
}

void	ft_print_explo_part_two(t_data *d, int x, int y)
{
	if (d->map[d->m.y][d->m.x] == '6')
	{
		d->explo5.color = ((int *)d->explo5.tex)[d->roc.y2 * 25 + d->roc.x2];
		if (d->explo5.color > 0)
			my_mlx_pixel_put(&d->screen, x, y, d->explo5.color);
	}
	if (d->map[d->m.y][d->m.x] == '7')
	{
		d->explo6.color = ((int *)d->explo6.tex)[d->roc.y2 * 25 + d->roc.x2];
		if (d->explo6.color > 0)
			my_mlx_pixel_put(&d->screen, x, y, d->explo6.color);
	}
	if (d->map[d->m.y][d->m.x] == '8')
	{
		d->explo7.color = ((int *)d->explo7.tex)[d->roc.y2 * 25 + d->roc.x2];
		if (d->explo7.color > 0)
			my_mlx_pixel_put(&d->screen, x, y, d->explo7.color);
	}
}
