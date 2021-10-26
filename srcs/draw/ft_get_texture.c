/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_texture.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigerber <tigerber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 14:31:36 by tigerber          #+#    #+#             */
/*   Updated: 2021/10/26 19:34:30 by tigerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/so_long.h"

void	ft_get_texture(t_data *d)
{
	ft_get_tex_evironement(d);
	ft_get_tex_evironement_two(d);
	ft_get_tex_tornade(d);
	ft_get_tex_tornade_two(d);
}

void	ft_get_texture_player(t_data *d)
{
	ft_get_texture_player_one(d);
	ft_get_texture_player_two(d);
	ft_get_texture_player_three(d);
}

void	ft_get_texture_explosion(t_data *d)
{
	ft_get_texture_explosion_one(d);
	ft_get_texture_explosion_two(d);
}
