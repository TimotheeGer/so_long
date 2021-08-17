/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mov.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigerber <tigerber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 13:58:17 by tigerber          #+#    #+#             */
/*   Updated: 2021/08/17 16:17:40 by tigerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/so_long.h"

void	move_front_back(int keycode, t_data *d)
{
	if (keycode == 'w')
	{
		if (d->map[(int)d->p.y - 1][(int)d->p.x] == '0' || d->map[(int)d->p.y - 1][(int)d->p.x] == 'E')
			d->p.y--;
		if (d->map[(int)d->p.y][(int)d->p.x] == 'E')
		{
			ft_destroy(d);
			exit (0);
		}
		
		
	}
	if (keycode == 's')
	{
		if (d->map[(int)d->p.y + 1][(int)d->p.x] == '0')
			d->p.y++;
		printf("py = %d\n", d->p.y);
		printf("px = %d\n", d->p.x);
		
	}
	
}

void	move_lateral(int keycode, t_data *d)
{
	if (keycode == 'd')
	{
		if (d->map[(int)d->p.y][(int)d->p.x + 1] == '0')
			d->p.x++;
		printf("py = %d\n", d->p.y);
		printf("px = %d\n", d->p.x);
	}
	if (keycode == 'a')
	{
		if (d->map[(int)d->p.y][(int)d->p.x - 1] == '0')
			d->p.x--;
		printf("py = %d\n", d->p.y);
		printf("px = %d\n", d->p.x);
	}
}

int	key_hook(int keycode, t_data *d)
{
	ft_escape(keycode, d, 0);
	move_front_back(keycode, d);
	move_lateral(keycode, d);
	return (0);
}