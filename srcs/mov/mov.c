/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mov.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigerber <tigerber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 13:58:17 by tigerber          #+#    #+#             */
/*   Updated: 2021/08/19 17:08:35 by tigerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/so_long.h"

int		ft_check_0EC_mov(int y, int x, t_data *d)
{
	if (d->map[y][x] == '0' || d->map[y][x] == 'E' || d->map[y][x] == 'C')
		return (1);
	return (0);
}

void	move_front_back(int keycode, t_data *d)
{
	// double mouv;
	
	// mouv = 0.1;
	if (keycode == 'w')
	{
		if (ft_check_0EC_mov((int)(d->p.y - 1), (int)d->p.x, d))
			d->p.y --;
		// printf("py w = %f\n", d->p.y);
		// printf("px w = %f\n", d->p.x);
	}
	if (keycode == 's')
	{
		if (ft_check_0EC_mov((int)(d->p.y + 1), (int)d->p.x, d))
			d->p.y ++;
		// printf("py s = %f\n", d->p.y);
		// printf("px s = %f\n", d->p.x);	
	}
	if (d->map[(int)d->p.y][(int)d->p.x] == 'E')
		{
			ft_destroy(d);
			exit (0);
		}
	if (d->map[(int)d->p.y][(int)d->p.x] == 'C')
		d->map[(int)d->p.y][(int)d->p.x] = '0';
}
void	move_lateral(int keycode, t_data *d)
{	
	// double mouv;
	
	// mouv = 0.1;
	if (keycode == 'd')
	{
		if (ft_check_0EC_mov((int)(d->p.y), (int)d->p.x + 1, d))
			d->p.x ++;
		// printf("py = %f\n", d->p.y);
		// printf("px = %f\n", d->p.x);
	}
	if (keycode == 'a')
	{
		if (ft_check_0EC_mov((int)(d->p.y), (int)d->p.x - 1, d))
			d->p.x --;
		// printf("py = %f\n", d->p.y);
		// printf("px = %f\n", d->p.x);
	}
	if (d->map[(int)d->p.y][(int)d->p.x] == 'E')
	{
		ft_destroy(d);
		exit (0);
	}
	if (d->map[(int)d->p.y][(int)d->p.x] == 'C')
	{
		d->map[(int)d->p.y][(int)d->p.x] = '0';
	}
}

int	key_hook(int keycode, t_data *d)
{
	ft_escape(keycode, d, 0);
	move_front_back(keycode, d);
	move_lateral(keycode, d);
	return (0);
}