/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_quit_image.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigerber <tigerber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 14:41:08 by tigerber          #+#    #+#             */
/*   Updated: 2021/10/05 14:28:54 by tigerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/so_long.h"

void	ft_destroy(t_data *d)
{
	if (d->eau.img)
		mlx_destroy_image(d->mlx, d->eau.img);
	if (d->pierre.img)
		mlx_destroy_image(d->mlx, d->pierre.img);
	if (d->gate.img)
		mlx_destroy_image(d->mlx, d->gate.img);
	if (d->pomme.img)
		mlx_destroy_image(d->mlx, d->pomme.img);
	if (d->player1.img)
		mlx_destroy_image(d->mlx, d->player1.img);
	if (d->player2.img)
		mlx_destroy_image(d->mlx, d->player2.img);
	if (d->player3.img)
		mlx_destroy_image(d->mlx, d->player3.img);
	if (d->player4.img)
		mlx_destroy_image(d->mlx, d->player4.img);
	if (d->player5.img)
		mlx_destroy_image(d->mlx, d->player5.img);
	if (d->player6.img)
		mlx_destroy_image(d->mlx, d->player6.img);
	if (d->player7.img)
		mlx_destroy_image(d->mlx, d->player7.img);
	if (d->player8.img)
		mlx_destroy_image(d->mlx, d->player8.img);
	if (d->player9.img)
		mlx_destroy_image(d->mlx, d->player9.img);
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

int	ft_quit_image(t_data *d)
{
	write(2, "Error.\nError get image.\n", 24);
	ft_destroy(d);
	exit (0);
}
