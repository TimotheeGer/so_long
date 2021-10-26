/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mov.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigerber <tigerber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 13:58:17 by tigerber          #+#    #+#             */
/*   Updated: 2021/10/26 18:30:56 by tigerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/so_long.h"

void	ft_print_game_over(void)
{
	write(1, "╔═══╦═══╦═╗╔═╦═══╗─╔═══╦╗──╔╦═══╦═══╗\n", 113);
	write(1, "║╔═╗║╔═╗║║╚╝║║╔══╝─║╔═╗║╚╗╔╝║╔══╣╔═╗║\n", 113);
	write(1, "║║─╚╣║─║║╔╗╔╗║╚══╗─║║─║╠╗║║╔╣╚══╣╚═╝║\n", 113);
	write(1, "║║╔═╣╚═╝║║║║║║╔═╦╩═╣║─║║║╚╝║║╔══╣╔╗╔╝\n", 113);
	write(1, "║╚╩═║╔═╗║║║║║║╚═╩╦═╣╚═╝║╚╗╔╝║╚══╣║║╚╗\n", 113);
	write(1, "╚═══╩╝─╚╩╝╚╝╚╩═══╝─╚═══╝─╚╝─╚═══╩╝╚═╝\n", 113);
}

void	move_front_back(int keycode, t_data *d)
{
	ft_mov_w(keycode, d);
	ft_mov_s(keycode, d);
	if (d->map[(int)d->p.y][(int)d->p.x] == 'C')
	{
		d->map[(int)d->p.y][(int)d->p.x] = '0';
		d->indic_c--;
	}
	if (ft_check_twist((int)d->p.y, (int)d->p.x, d))
	{
		d->dead = 1;
		d->keyp = 1;
		ft_destroy(d);
		exit (0);
	}
	if (d->map[(int)d->p.y][(int)d->p.x] == 'O' && d->indic_c == 0)
	{
		ft_destroy(d);
		exit (0);
	}
}

void	move_lateral(int keycode, t_data *d)
{	
	ft_mov_d(keycode, d);
	ft_mov_a(keycode, d);
	if (d->map[(int)d->p.y][(int)d->p.x] == 'C')
	{
		d->map[(int)d->p.y][(int)d->p.x] = '0';
		d->indic_c--;
	}
	if (ft_check_twist((int)d->p.y, (int)d->p.x, d))
	{
		d->dead = 1;
		d->keyp = 1;
		ft_destroy(d);
		exit (0);
	}
	if (d->map[(int)d->p.y][(int)d->p.x] == 'O' && d->indic_c == 0)
	{
		ft_destroy(d);
		exit (0);
	}
}

int	key_hook(int keycode, t_data *d)
{
	ft_escape(keycode, d, 0);
	move_front_back(keycode, d);
	move_lateral(keycode, d);
	ft_print_steps(keycode, d);
	return (0);
}
