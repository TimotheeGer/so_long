/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_destroy_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigerber <tigerber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 18:45:38 by tigerber          #+#    #+#             */
/*   Updated: 2021/10/27 16:45:46 by tigerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/so_long.h"

void	ft_destroy_evironement(t_data *d)
{
	if (d->eau.img)
		mlx_destroy_image(d->mlx, d->eau.img);
	if (d->roc.img)
		mlx_destroy_image(d->mlx, d->roc.img);
	if (d->gate.img)
		mlx_destroy_image(d->mlx, d->gate.img);
	if (d->gate_o.img)
		mlx_destroy_image(d->mlx, d->gate_o.img);
	if (d->pomme.img)
		mlx_destroy_image(d->mlx, d->pomme.img);
	if (d->box.img)
		mlx_destroy_image(d->mlx, d->box.img);
}

void	ft_destroy_players(t_data *d)
{
	if (d->pl1.img)
		mlx_destroy_image(d->mlx, d->pl1.img);
	if (d->pl2.img)
		mlx_destroy_image(d->mlx, d->pl2.img);
	if (d->pl3.img)
		mlx_destroy_image(d->mlx, d->pl3.img);
	if (d->pl4.img)
		mlx_destroy_image(d->mlx, d->pl4.img);
	if (d->pl5.img)
		mlx_destroy_image(d->mlx, d->pl5.img);
	if (d->pl6.img)
		mlx_destroy_image(d->mlx, d->pl6.img);
	if (d->pl7.img)
		mlx_destroy_image(d->mlx, d->pl7.img);
	if (d->pl8.img)
		mlx_destroy_image(d->mlx, d->pl8.img);
	if (d->pl9.img)
		mlx_destroy_image(d->mlx, d->pl9.img);
}

void	ft_destroy_tornade(t_data *d)
{
	if (d->torn.img)
		mlx_destroy_image(d->mlx, d->torn.img);
	if (d->torn1.img)
		mlx_destroy_image(d->mlx, d->torn1.img);
	if (d->torn2.img)
		mlx_destroy_image(d->mlx, d->torn2.img);
	if (d->torn3.img)
		mlx_destroy_image(d->mlx, d->torn3.img);
	if (d->torn4.img)
		mlx_destroy_image(d->mlx, d->torn4.img);
	if (d->torn5.img)
		mlx_destroy_image(d->mlx, d->torn5.img);
}

void	ft_destroy_explo(t_data *d)
{
	if (d->explo1.img)
		mlx_destroy_image(d->mlx, d->explo1.img);
	if (d->explo2.img)
		mlx_destroy_image(d->mlx, d->explo2.img);
	if (d->explo3.img)
		mlx_destroy_image(d->mlx, d->explo3.img);
	if (d->explo4.img)
		mlx_destroy_image(d->mlx, d->explo4.img);
	if (d->explo5.img)
		mlx_destroy_image(d->mlx, d->explo5.img);
	if (d->explo6.img)
		mlx_destroy_image(d->mlx, d->explo6.img);
	if (d->explo7.img)
		mlx_destroy_image(d->mlx, d->explo7.img);
}

void	ft_print_gameover_dead(t_data *d)
{
	if (d->dead)
		ft_print_dead();
	else
		ft_print_game_over();
}
