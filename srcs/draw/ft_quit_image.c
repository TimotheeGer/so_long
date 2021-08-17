/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_quit_image.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigerber <tigerber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 14:41:08 by tigerber          #+#    #+#             */
/*   Updated: 2021/08/17 14:12:00 by tigerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/so_long.h"

void	ft_destroy(t_data *d)
{
	if (d->screen.img)
		mlx_destroy_image(d->mlx, d->screen.img);
	if (d->win)
		mlx_destroy_window(d->mlx, d->win);
	if (d->mlx)
	{
		mlx_destroy_display(d->mlx);
		free(d->mlx);
	}
	if (d->c)
		ft_lstclear_collect(d->c);
	if (d->begin)
		ft_lstclear(&d->begin, free);
	if (d->map)
		ft_free_tab(d->map);
}

int	ft_escape(int keycode, t_data *d, int a)
{
	(void)a;
	if (keycode == 65307)
	{
		ft_destroy(d);
		exit(0);
	}
	return (0);
}

int	ft_cross(t_data *d)
{
	ft_destroy(d);
	exit (0);
}
