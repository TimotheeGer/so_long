/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_draw.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigerber <tigerber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 14:16:59 by tigerber          #+#    #+#             */
/*   Updated: 2021/08/17 16:03:26 by tigerber         ###   ########.fr       */
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
		printf("erreur image");;
	d->eau.texture = mlx_get_data_addr(d->eau.img, &d->eau.bits_per_pixel,
			&d->eau.line_length, &d->eau.endian);

	d->pierre.img = mlx_xpm_file_to_image(d->mlx, "./texture/pierre3.xpm",
			&d->pierre.width, &d->pierre.heigth);
	if(!(d->pierre.img))
		printf("erreur image");;
	d->pierre.texture = mlx_get_data_addr(d->pierre.img, &d->pierre.bits_per_pixel,
			&d->pierre.line_length, &d->pierre.endian);

	d->pomme.img = mlx_xpm_file_to_image(d->mlx, "./texture/pomme.xpm",
			&d->pomme.width, &d->pomme.heigth);
	if(!(d->pomme.img))
		printf("erreur image");;
	d->pomme.texture = mlx_get_data_addr(d->pomme.img, &d->pomme.bits_per_pixel,
			&d->pomme.line_length, &d->pomme.endian);

	d->gate.img = mlx_xpm_file_to_image(d->mlx, "./texture/gate.xpm",
			&d->gate.width, &d->gate.heigth);
	if(!(d->gate.img))
		printf("erreur image");;
	d->gate.texture = mlx_get_data_addr(d->gate.img, &d->gate.bits_per_pixel,
			&d->gate.line_length, &d->gate.endian);
}

void	ft_test_texture(t_data *d)
{
	ft_get_texture(d);
	// for(int y = 0; y < 25; ++y)
	// for(int x = 0; x < 25; ++x)
	// {
    // 	d->eau.color = ((int *)d->eau.texture)[y * 25 + x];
    // 	// d->eau.color = *((int *)d->eau.texture + ((y * 25) + x));
	// 	my_mlx_pixel_put(&d->screen, x, y, d->eau.color);
	// }
}