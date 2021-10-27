/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_texture_two.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigerber <tigerber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 19:08:11 by tigerber          #+#    #+#             */
/*   Updated: 2021/10/26 19:37:49 by tigerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/so_long.h"

void	ft_get_tex_evironement(t_data *d)
{
	d->eau.img = mlx_xpm_file_to_image(d->mlx, "./tex/herbe.xpm",
			&d->eau.width, &d->eau.heigth);
	if (!(d->eau.img))
		ft_quit_image(d);
	d->eau.tex = mlx_get_data_addr(d->eau.img, &d->eau.b_p_pixel,
			&d->eau.line_length, &d->eau.endian);
	d->roc.img = mlx_xpm_file_to_image(d->mlx, "./tex/pierre3.xpm",
			&d->roc.width, &d->roc.heigth);
	if (!(d->roc.img))
		ft_quit_image(d);
	d->roc.tex = mlx_get_data_addr(d->roc.img, &d->roc.b_p_pixel,
			&d->roc.line_length, &d->roc.endian);
	d->pomme.img = mlx_xpm_file_to_image(d->mlx, "./tex/pomme.xpm",
			&d->pomme.width, &d->pomme.heigth);
	if (!(d->pomme.img))
		ft_quit_image(d);
	d->pomme.tex = mlx_get_data_addr(d->pomme.img, &d->pomme.b_p_pixel,
			&d->pomme.line_length, &d->pomme.endian);
}

void	ft_get_tex_evironement_two(t_data *d)
{
	d->gate.img = mlx_xpm_file_to_image(d->mlx, "./tex/gate.xpm",
			&d->gate.width, &d->gate.heigth);
	if (!(d->gate.img))
		ft_quit_image(d);
	d->gate.tex = mlx_get_data_addr(d->gate.img, &d->gate.b_p_pixel,
			&d->gate.line_length, &d->gate.endian);
	d->gate_o.img = mlx_xpm_file_to_image(d->mlx, "./tex/gate_open.xpm",
			&d->gate_o.width, &d->gate_o.heigth);
	if (!(d->gate_o.img))
		ft_quit_image(d);
	d->gate_o.tex = mlx_get_data_addr(d->gate_o.img, &d->gate_o.b_p_pixel,
			&d->gate_o.line_length, &d->gate_o.endian);
	d->box.img = mlx_xpm_file_to_image(d->mlx, "./tex/box.xpm",
			&d->box.width, &d->box.heigth);
	if (!(d->box.img))
		ft_quit_image(d);
	d->box.tex = mlx_get_data_addr(d->box.img, &d->box.b_p_pixel,
			&d->box.line_length, &d->box.endian);
}

void	ft_get_tex_tornade(t_data *d)
{
	d->torn.img = mlx_xpm_file_to_image(d->mlx, "./tex/tornade.xpm",
			&d->torn.width, &d->torn.heigth);
	if (!(d->torn.img))
		ft_quit_image(d);
	d->torn.tex = mlx_get_data_addr(d->torn.img, &d->torn.b_p_pixel,
			&d->torn.line_length, &d->torn.endian);
	d->torn1.img = mlx_xpm_file_to_image(d->mlx, "./tex/tornade1.xpm",
			&d->torn1.width, &d->torn1.heigth);
	if (!(d->torn1.img))
		ft_quit_image(d);
	d->torn1.tex = mlx_get_data_addr(d->torn1.img, &d->torn1.b_p_pixel,
			&d->torn1.line_length, &d->torn1.endian);
	d->torn2.img = mlx_xpm_file_to_image(d->mlx, "./tex/tornade2.xpm",
			&d->torn2.width, &d->torn2.heigth);
	if (!(d->torn2.img))
		ft_quit_image(d);
	d->torn2.tex = mlx_get_data_addr(d->torn2.img, &d->torn2.b_p_pixel,
			&d->torn2.line_length, &d->torn2.endian);
}

void	ft_get_tex_tornade_two(t_data *d)
{
	d->torn3.img = mlx_xpm_file_to_image(d->mlx, "./tex/tornade3.xpm",
			&d->torn3.width, &d->torn3.heigth);
	if (!(d->torn3.img))
		ft_quit_image(d);
	d->torn3.tex = mlx_get_data_addr(d->torn3.img, &d->torn3.b_p_pixel,
			&d->torn3.line_length, &d->torn3.endian);
	d->torn4.img = mlx_xpm_file_to_image(d->mlx, "./tex/tornade4.xpm",
			&d->torn4.width, &d->torn4.heigth);
	if (!(d->torn4.img))
		ft_quit_image(d);
	d->torn4.tex = mlx_get_data_addr(d->torn4.img, &d->torn4.b_p_pixel,
			&d->torn4.line_length, &d->torn4.endian);
	d->torn5.img = mlx_xpm_file_to_image(d->mlx, "./tex/tornade5.xpm",
			&d->torn5.width, &d->torn5.heigth);
	if (!(d->torn5.img))
		ft_quit_image(d);
	d->torn5.tex = mlx_get_data_addr(d->torn5.img, &d->torn5.b_p_pixel,
			&d->torn5.line_length, &d->torn5.endian);
}
