/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_draw.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigerber <tigerber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 14:16:59 by tigerber          #+#    #+#             */
/*   Updated: 2021/10/01 17:45:03 by tigerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/so_long.h"

# ifndef H
#  define H 300
# endif
# ifndef W
#  define W 600
# endif

void	ft_draw(t_data *d)
{
	d->mlx = mlx_init();
	d->win = mlx_new_window(d->mlx, d->m.size_x, d->m.size_y, "so_long");
	ft_get_texture(d);
	ft_get_texture_player(d);
	mlx_hook(d->win, 33, 1L << 17, ft_cross, d);
	mlx_hook(d->win, 2, 1L << 0, key_hook, d);
	mlx_hook(d->win, 3, 1L << 0, key_hook, d);
	
	mlx_loop_hook(d->mlx, ft_render_next_frame, d);
	mlx_loop(d->mlx);
}

void	ft_get_texture(t_data *d)
{
	d->eau.img = mlx_xpm_file_to_image(d->mlx, "./texture/herbe.xpm",
			&d->eau.width, &d->eau.heigth);
	if(!(d->eau.img))
		printf("erreur image");
	d->eau.texture = mlx_get_data_addr(d->eau.img, &d->eau.bits_per_pixel,
			&d->eau.line_length, &d->eau.endian);

	d->pierre.img = mlx_xpm_file_to_image(d->mlx, "./texture/pierre3.xpm",
			&d->pierre.width, &d->pierre.heigth);
	if(!(d->pierre.img))
		printf("erreur image");
	d->pierre.texture = mlx_get_data_addr(d->pierre.img, &d->pierre.bits_per_pixel,
			&d->pierre.line_length, &d->pierre.endian);

	d->pomme.img = mlx_xpm_file_to_image(d->mlx, "./texture/pomme.xpm",
			&d->pomme.width, &d->pomme.heigth);
	if(!(d->pomme.img))
		printf("erreur image");
	d->pomme.texture = mlx_get_data_addr(d->pomme.img, &d->pomme.bits_per_pixel,
			&d->pomme.line_length, &d->pomme.endian);

	d->gate.img = mlx_xpm_file_to_image(d->mlx, "./texture/gate.xpm",
			&d->gate.width, &d->gate.heigth);
	if(!(d->gate.img))
		printf("erreur image");
	d->gate.texture = mlx_get_data_addr(d->gate.img, &d->gate.bits_per_pixel,
			&d->gate.line_length, &d->gate.endian);
}

void	ft_get_texture_player(t_data *d)
{
	d->player1.img = mlx_xpm_file_to_image(d->mlx, "./texture/player_front1.xpm",
			&d->player1.width, &d->player1.heigth);
	if(!(d->player1.img))
		printf("erreur image");
	d->player1.texture = mlx_get_data_addr(d->player1.img, &d->player1.bits_per_pixel,
			&d->player1.line_length, &d->player1.endian);
	
	d->player2.img = mlx_xpm_file_to_image(d->mlx, "./texture/player_front2.xpm",
			&d->player2.width, &d->player2.heigth);
	if(!(d->player2.img))
		printf("erreur image");
	d->player2.texture = mlx_get_data_addr(d->player2.img, &d->player2.bits_per_pixel,
			&d->player2.line_length, &d->player2.endian);
	
	d->player3.img = mlx_xpm_file_to_image(d->mlx, "./texture/player_front3.xpm",
			&d->player3.width, &d->player3.heigth);
	if(!(d->player3.img))
		printf("erreur image");
	d->player3.texture = mlx_get_data_addr(d->player3.img, &d->player3.bits_per_pixel,
			&d->player3.line_length, &d->player3.endian);

	d->player4.img = mlx_xpm_file_to_image(d->mlx, "./texture/player_back2.xpm",
			&d->player4.width, &d->player4.heigth);
	if(!(d->player4.img))
		printf("erreur image");
	d->player4.texture = mlx_get_data_addr(d->player4.img, &d->player4.bits_per_pixel,
			&d->player4.line_length, &d->player4.endian);

	d->player5.img = mlx_xpm_file_to_image(d->mlx, "./texture/player_back3.xpm",
			&d->player5.width, &d->player5.heigth);
	if(!(d->player5.img))
		printf("erreur image");
	d->player5.texture = mlx_get_data_addr(d->player5.img, &d->player5.bits_per_pixel,
			&d->player5.line_length, &d->player5.endian);

	d->player6.img = mlx_xpm_file_to_image(d->mlx, "./texture/player_right2.xpm",
			&d->player6.width, &d->player6.heigth);
	if(!(d->player6.img))
		printf("erreur image");
	d->player6.texture = mlx_get_data_addr(d->player6.img, &d->player6.bits_per_pixel,
			&d->player6.line_length, &d->player6.endian);

	d->player7.img = mlx_xpm_file_to_image(d->mlx, "./texture/player_right3.xpm",
			&d->player7.width, &d->player7.heigth);
	if(!(d->player7.img))
		printf("erreur image");
	d->player7.texture = mlx_get_data_addr(d->player7.img, &d->player7.bits_per_pixel,
			&d->player7.line_length, &d->player7.endian);

	d->player8.img = mlx_xpm_file_to_image(d->mlx, "./texture/player_left2.xpm",
			&d->player8.width, &d->player8.heigth);
	if(!(d->player8.img))
		printf("erreur image");
	d->player8.texture = mlx_get_data_addr(d->player8.img, &d->player8.bits_per_pixel,
			&d->player8.line_length, &d->player8.endian);

	d->player9.img = mlx_xpm_file_to_image(d->mlx, "./texture/player_left3.xpm",
			&d->player9.width, &d->player9.heigth);
	if(!(d->player9.img))
		printf("erreur image");
	d->player9.texture = mlx_get_data_addr(d->player9.img, &d->player9.bits_per_pixel,
			&d->player9.line_length, &d->player9.endian);
}