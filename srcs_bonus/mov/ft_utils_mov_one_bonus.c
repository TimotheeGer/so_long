/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils_mov_one.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigerber <tigerber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 14:30:52 by tigerber          #+#    #+#             */
/*   Updated: 2021/10/26 17:29:32 by tigerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/so_long.h"

void	ft_mov_w(int keycode, t_data *d)
{
	if (keycode == 'w')
	{
		d->keyp = keycode;
		if (ft_check_oec_mov((int)(d->p.y - 1), (int)d->p.x, d))
			d->p.y--;
		d->count++;
	}
	if (keycode == 'p' && d->keyp == 'w'
		&& (d->map[(int)d->p.y - 1] != d->map[0]) && d->indic_p == 0)
	{
		d->explo_x = d->p.x;
		d->explo_y = d->p.y - 1;
		if (d->map[(int)d->p.y - 1][(int)d->p.x] == '1')
		{
			d->indic_p = 1;
			d->map[(int)d->p.y - 1][(int)d->p.x] = '2';
		}	
	}	
}

void	ft_mov_s(int keycode, t_data *d)
{
	int	size;

	size = ft_count_line_in_tab(d->map);
	if (keycode == 's')
	{
		d->keyp = keycode;
		if (ft_check_oec_mov((int)(d->p.y + 1), (int)d->p.x, d))
			d->p.y++;
		d->count++;
	}
	if (keycode == 'p' && d->keyp == 's'
		&& (d->map[(int)d->p.y + 1] != d->map[size - 1]) && d->indic_p == 0)
	{
		d->explo_x = d->p.x;
		d->explo_y = d->p.y + 1;
		if (d->map[(int)d->p.y + 1][(int)d->p.x] == '1')
		{
			d->indic_p = 1;
			d->map[(int)d->p.y + 1][(int)d->p.x] = '2';
		}	
	}	
}

void	ft_mov_d(int keycode, t_data *d)
{
	int	size;

	size = ft_count_size_line(d->map[(int)d->p.y]);
	if (keycode == 'd')
	{	
		d->keyp = keycode;
		if (ft_check_oec_mov((int)(d->p.y), (int)d->p.x + 1, d))
			d->p.x++;
		d->count++;
	}
	if (keycode == 'p' && d->keyp == 'd'
		&& (d->p.x + 1) != (size - 1) && d->indic_p == 0)
	{
		d->explo_x = d->p.x + 1;
		d->explo_y = d->p.y;
		if (d->map[(int)d->p.y][(int)d->p.x + 1] == '1')
		{
			d->indic_p = 1;
			d->map[(int)d->p.y][(int)d->p.x + 1] = '2';
		}
	}
}

void	ft_mov_a(int keycode, t_data *d)
{
	if (keycode == 'a')
	{	
		d->keyp = keycode;
		if (ft_check_oec_mov((int)(d->p.y), (int)d->p.x - 1, d))
			d->p.x--;
		d->count++;
	}
	if (keycode == 'p' && d->keyp == 'a'
		&& (d->p.x - 1) != 0 && d->indic_p == 0)
	{
		d->explo_x = d->p.x - 1;
		d->explo_y = d->p.y;
		if (d->map[(int)d->p.y][(int)d->p.x - 1] == '1')
		{
			d->indic_p = 1;
			d->map[(int)d->p.y][(int)d->p.x - 1] = '2';
		}
	}
}
