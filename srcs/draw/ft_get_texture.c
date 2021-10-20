/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_texture.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigerber <tigerber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 14:31:36 by tigerber          #+#    #+#             */
/*   Updated: 2021/10/20 20:24:16 by tigerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/so_long.h"

void	ft_get_texture(t_data *d)
{
	d->eau.img = mlx_xpm_file_to_image(d->mlx, "./texture/herbe.xpm",
			&d->eau.width, &d->eau.heigth);
	if(!(d->eau.img))
		ft_quit_image(d);
	d->eau.texture = mlx_get_data_addr(d->eau.img, &d->eau.bits_per_pixel,
			&d->eau.line_length, &d->eau.endian);
	d->pierre.img = mlx_xpm_file_to_image(d->mlx, "./texture/pierre3.xpm",
			&d->pierre.width, &d->pierre.heigth);
	if(!(d->pierre.img))
		ft_quit_image(d);
	d->pierre.texture = mlx_get_data_addr(d->pierre.img, &d->pierre.bits_per_pixel,
			&d->pierre.line_length, &d->pierre.endian);
	d->pomme.img = mlx_xpm_file_to_image(d->mlx, "./texture/pomme.xpm",
			&d->pomme.width, &d->pomme.heigth);
	if(!(d->pomme.img))
		ft_quit_image(d);
	d->pomme.texture = mlx_get_data_addr(d->pomme.img, &d->pomme.bits_per_pixel,
			&d->pomme.line_length, &d->pomme.endian);
	d->gate.img = mlx_xpm_file_to_image(d->mlx, "./texture/gate.xpm",
			&d->gate.width, &d->gate.heigth);
	if(!(d->gate.img))
		ft_quit_image(d);
	d->gate.texture = mlx_get_data_addr(d->gate.img, &d->gate.bits_per_pixel,
			&d->gate.line_length, &d->gate.endian);
		
		d->gate_open.img = mlx_xpm_file_to_image(d->mlx, "./texture/gate_open.xpm",
			&d->gate_open.width, &d->gate_open.heigth);
	if(!(d->gate_open.img))
		ft_quit_image(d);
	d->gate_open.texture = mlx_get_data_addr(d->gate_open.img, &d->gate_open.bits_per_pixel,
			&d->gate_open.line_length, &d->gate_open.endian);
}

void	ft_get_texture_player_one(t_data *d)
{
	d->player1.img = mlx_xpm_file_to_image(d->mlx, "./texture/player_front1.xpm",
			&d->player1.width, &d->player1.heigth);
	if(!(d->player1.img))
		ft_quit_image(d);
	d->player1.texture = mlx_get_data_addr(d->player1.img, &d->player1.bits_per_pixel,
			&d->player1.line_length, &d->player1.endian);
	d->player2.img = mlx_xpm_file_to_image(d->mlx, "./texture/player_front2.xpm",
			&d->player2.width, &d->player2.heigth);
	if(!(d->player2.img))
		ft_quit_image(d);
	d->player2.texture = mlx_get_data_addr(d->player2.img, &d->player2.bits_per_pixel,
			&d->player2.line_length, &d->player2.endian);
	d->player3.img = mlx_xpm_file_to_image(d->mlx, "./texture/player_front3.xpm",
			&d->player3.width, &d->player3.heigth);
	if(!(d->player3.img))
		ft_quit_image(d);
	d->player3.texture = mlx_get_data_addr(d->player3.img, &d->player3.bits_per_pixel,
			&d->player3.line_length, &d->player3.endian);
	d->player4.img = mlx_xpm_file_to_image(d->mlx, "./texture/player_back2.xpm",
			&d->player4.width, &d->player4.heigth);
	if(!(d->player4.img))
		ft_quit_image(d);
	d->player4.texture = mlx_get_data_addr(d->player4.img, &d->player4.bits_per_pixel,
			&d->player4.line_length, &d->player4.endian);
}

void	ft_get_texture_player_two(t_data *d)
{
    d->player5.img = mlx_xpm_file_to_image(d->mlx, "./texture/player_back3.xpm",
			&d->player5.width, &d->player5.heigth);
	if(!(d->player5.img))
		ft_quit_image(d);
	d->player5.texture = mlx_get_data_addr(d->player5.img, &d->player5.bits_per_pixel,
			&d->player5.line_length, &d->player5.endian);
	d->player6.img = mlx_xpm_file_to_image(d->mlx, "./texture/player_right2.xpm",
			&d->player6.width, &d->player6.heigth);
	if(!(d->player6.img))
		ft_quit_image(d);
	d->player6.texture = mlx_get_data_addr(d->player6.img, &d->player6.bits_per_pixel,
			&d->player6.line_length, &d->player6.endian);
	d->player7.img = mlx_xpm_file_to_image(d->mlx, "./texture/player_right3.xpm",
			&d->player7.width, &d->player7.heigth);
	if(!(d->player7.img))
		ft_quit_image(d);
	d->player7.texture = mlx_get_data_addr(d->player7.img, &d->player7.bits_per_pixel,
			&d->player7.line_length, &d->player7.endian);	
}

void	ft_get_texture_player_three(t_data *d)
{
    d->player8.img = mlx_xpm_file_to_image(d->mlx, "./texture/player_left2.xpm",
			&d->player8.width, &d->player8.heigth);
	if(!(d->player8.img))
		ft_quit_image(d);
	d->player8.texture = mlx_get_data_addr(d->player8.img, &d->player8.bits_per_pixel,
			&d->player8.line_length, &d->player8.endian);
    d->player9.img = mlx_xpm_file_to_image(d->mlx, "./texture/player_left3.xpm",
			&d->player9.width, &d->player9.heigth);
	if(!(d->player9.img))
		ft_quit_image(d);
	d->player9.texture = mlx_get_data_addr(d->player9.img, &d->player9.bits_per_pixel,
			&d->player9.line_length, &d->player9.endian);
}

void	ft_get_texture_explosion(t_data *d)
{
	d->explo1.img = mlx_xpm_file_to_image(d->mlx, "./texture/explo1.xpm",
			&d->explo1.width, &d->explo1.heigth);
	if(!(d->explo1.img))
		ft_quit_image(d);
	d->explo1.texture = mlx_get_data_addr(d->explo1.img, &d->explo1.bits_per_pixel,
			&d->explo1.line_length, &d->explo1.endian);
	
	d->explo2.img = mlx_xpm_file_to_image(d->mlx, "./texture/explo2.xpm",
			&d->explo2.width, &d->explo2.heigth);
	if(!(d->explo2.img))
		ft_quit_image(d);
	d->explo2.texture = mlx_get_data_addr(d->explo2.img, &d->explo2.bits_per_pixel,
			&d->explo2.line_length, &d->explo2.endian);
	
	d->explo3.img = mlx_xpm_file_to_image(d->mlx, "./texture/explo3.xpm",
			&d->explo3.width, &d->explo3.heigth);
	if(!(d->explo3.img))
		ft_quit_image(d);
	d->explo3.texture = mlx_get_data_addr(d->explo3.img, &d->explo3.bits_per_pixel,
			&d->explo3.line_length, &d->explo3.endian);
	
	d->explo4.img = mlx_xpm_file_to_image(d->mlx, "./texture/explo4.xpm",
			&d->explo4.width, &d->explo4.heigth);
	if(!(d->explo4.img))
		ft_quit_image(d);
	d->explo4.texture = mlx_get_data_addr(d->explo4.img, &d->explo4.bits_per_pixel,
			&d->explo4.line_length, &d->explo4.endian);
	
	d->explo5.img = mlx_xpm_file_to_image(d->mlx, "./texture/explo5.xpm",
			&d->explo5.width, &d->explo5.heigth);
	if(!(d->explo5.img))
		ft_quit_image(d);
	d->explo5.texture = mlx_get_data_addr(d->explo5.img, &d->explo5.bits_per_pixel,
			&d->explo5.line_length, &d->explo5.endian);

	d->explo6.img = mlx_xpm_file_to_image(d->mlx, "./texture/explo6.xpm",
			&d->explo6.width, &d->explo6.heigth);
	if(!(d->explo6.img))
		ft_quit_image(d);
	d->explo6.texture = mlx_get_data_addr(d->explo6.img, &d->explo6.bits_per_pixel,
			&d->explo6.line_length, &d->explo6.endian);	
}
