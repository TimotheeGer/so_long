/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_texture_three.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigerber <tigerber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 19:20:52 by tigerber          #+#    #+#             */
/*   Updated: 2021/10/26 20:15:51 by tigerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/so_long.h"

void	ft_get_texture_player_one(t_data *d)
{
	d->pl1.img = mlx_xpm_file_to_image(d->mlx, "./tex/player_front1.xpm",
			&d->pl1.width, &d->pl1.heigth);
	if (!(d->pl1.img))
		ft_quit_image(d);
	d->pl1.tex = mlx_get_data_addr(d->pl1.img, &d->pl1.b_p_pixel,
			&d->pl1.line_length, &d->pl1.endian);
	d->pl2.img = mlx_xpm_file_to_image(d->mlx, "./tex/player_front2.xpm",
			&d->pl2.width, &d->pl2.heigth);
	if (!(d->pl2.img))
		ft_quit_image(d);
	d->pl2.tex = mlx_get_data_addr(d->pl2.img, &d->pl2.b_p_pixel,
			&d->pl2.line_length, &d->pl2.endian);
	d->pl3.img = mlx_xpm_file_to_image(d->mlx, "./tex/player_front3.xpm",
			&d->pl3.width, &d->pl3.heigth);
	if (!(d->pl3.img))
		ft_quit_image(d);
	d->pl3.tex = mlx_get_data_addr(d->pl3.img, &d->pl3.b_p_pixel,
			&d->pl3.line_length, &d->pl3.endian);
	d->pl4.img = mlx_xpm_file_to_image(d->mlx, "./tex/player_back2.xpm",
			&d->pl4.width, &d->pl4.heigth);
	if (!(d->pl4.img))
		ft_quit_image(d);
	d->pl4.tex = mlx_get_data_addr(d->pl4.img, &d->pl4.b_p_pixel,
			&d->pl4.line_length, &d->pl4.endian);
}

void	ft_get_texture_player_two(t_data *d)
{
	d->pl5.img = mlx_xpm_file_to_image(d->mlx, "./tex/player_back3.xpm",
			&d->pl5.width, &d->pl5.heigth);
	if (!(d->pl5.img))
		ft_quit_image(d);
	d->pl5.tex = mlx_get_data_addr(d->pl5.img, &d->pl5.b_p_pixel,
			&d->pl5.line_length, &d->pl5.endian);
	d->pl6.img = mlx_xpm_file_to_image(d->mlx, "./tex/player_right2.xpm",
			&d->pl6.width, &d->pl6.heigth);
	if (!(d->pl6.img))
		ft_quit_image(d);
	d->pl6.tex = mlx_get_data_addr(d->pl6.img, &d->pl6.b_p_pixel,
			&d->pl6.line_length, &d->pl6.endian);
	d->pl7.img = mlx_xpm_file_to_image(d->mlx, "./tex/player_right3.xpm",
			&d->pl7.width, &d->pl7.heigth);
	if (!(d->pl7.img))
		ft_quit_image(d);
	d->pl7.tex = mlx_get_data_addr(d->pl7.img, &d->pl7.b_p_pixel,
			&d->pl7.line_length, &d->pl7.endian);
}

void	ft_get_texture_player_three(t_data *d)
{
	d->pl8.img = mlx_xpm_file_to_image(d->mlx, "./tex/player_left2.xpm",
			&d->pl8.width, &d->pl8.heigth);
	if (!(d->pl8.img))
		ft_quit_image(d);
	d->pl8.tex = mlx_get_data_addr(d->pl8.img, &d->pl8.b_p_pixel,
			&d->pl8.line_length, &d->pl8.endian);
	d->pl9.img = mlx_xpm_file_to_image(d->mlx, "./tex/player_left3.xpm",
			&d->pl9.width, &d->pl9.heigth);
	if (!(d->pl9.img))
		ft_quit_image(d);
	d->pl9.tex = mlx_get_data_addr(d->pl9.img, &d->pl9.b_p_pixel,
			&d->pl9.line_length, &d->pl9.endian);
}

void	ft_get_texture_explosion_one(t_data *d)
{
	d->explo1.img = mlx_xpm_file_to_image(d->mlx, "./tex/explo1.xpm",
			&d->explo1.width, &d->explo1.heigth);
	if (!(d->explo1.img))
		ft_quit_image(d);
	d->explo1.tex = mlx_get_data_addr(d->explo1.img, &d->explo1.b_p_pixel,
			&d->explo1.line_length, &d->explo1.endian);
	d->explo2.img = mlx_xpm_file_to_image(d->mlx, "./tex/explo2.xpm",
			&d->explo2.width, &d->explo2.heigth);
	if (!(d->explo2.img))
		ft_quit_image(d);
	d->explo2.tex = mlx_get_data_addr(d->explo2.img, &d->explo2.b_p_pixel,
			&d->explo2.line_length, &d->explo2.endian);
	d->explo3.img = mlx_xpm_file_to_image(d->mlx, "./tex/explo3.xpm",
			&d->explo3.width, &d->explo3.heigth);
	if (!(d->explo3.img))
		ft_quit_image(d);
	d->explo3.tex = mlx_get_data_addr(d->explo3.img, &d->explo3.b_p_pixel,
			&d->explo3.line_length, &d->explo3.endian);
	d->explo4.img = mlx_xpm_file_to_image(d->mlx, "./tex/explo4.xpm",
			&d->explo4.width, &d->explo4.heigth);
	if (!(d->explo4.img))
		ft_quit_image(d);
	d->explo4.tex = mlx_get_data_addr(d->explo4.img, &d->explo4.b_p_pixel,
			&d->explo4.line_length, &d->explo4.endian);
}

void	ft_get_texture_explosion_two(t_data *d)
{
	d->explo5.img = mlx_xpm_file_to_image(d->mlx, "./tex/explo5.xpm",
			&d->explo5.width, &d->explo5.heigth);
	if (!(d->explo5.img))
		ft_quit_image(d);
	d->explo5.tex = mlx_get_data_addr(d->explo5.img, &d->explo5.b_p_pixel,
			&d->explo5.line_length, &d->explo5.endian);
	d->explo6.img = mlx_xpm_file_to_image(d->mlx, "./tex/explo6.xpm",
			&d->explo6.width, &d->explo6.heigth);
	if (!(d->explo6.img))
		ft_quit_image(d);
	d->explo6.tex = mlx_get_data_addr(d->explo6.img, &d->explo6.b_p_pixel,
			&d->explo6.line_length, &d->explo6.endian);
	d->explo7.img = mlx_xpm_file_to_image(d->mlx, "./tex/explo7.xpm",
			&d->explo7.width, &d->explo7.heigth);
	if (!(d->explo7.img))
		ft_quit_image(d);
	d->explo7.tex = mlx_get_data_addr(d->explo7.img, &d->explo7.b_p_pixel,
			&d->explo7.line_length, &d->explo7.endian);
}
