/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils_parse_two.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigerber <tigerber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 13:56:09 by tigerber          #+#    #+#             */
/*   Updated: 2021/07/15 16:12:55 by tigerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_check_is_one_first_last(t_data *d)
{
	int	x;
	int	y;

	x = 0;
	y = 1;
	while (y < ft_count_line_in_tab(d->map))
	{
		if (d->map[y][x] != '1' || d->map[y][ft_strlen(d->map[y]) - 1] != '1')
			ft_quit(2, "Error\nMap is open3.\n", d);
		y++;
	}
}

void	ft_get_collect(int y, int x, t_data *d)
{	
	ft_lstadd_collect(&d->c, ft_new_collect(x, y));
}

void	ft_get_position(int y, int x, char c, t_data *d)
{
	if (c == 'P')
	{
		d->p.indicateur = 1;
		d->p.x = x;
		d->p.y = y;
	}
	if (c == 'E')
	{
		d->e.indicateur = 1;
		d->e.x = x;
		d->e.y = y;
	}
	if (c == 'C')
	{
		ft_get_collect(y, x, d);
		d->indic_c += 1;
	}
}

int	ft_count_size_line(char *map)
{
	int i;

	i = 0;
	while (map[i])
	{
		i++;
	}
	return (i);
}

void	ft_size_map(t_data *d)
{
	d->m.size_y = ft_count_line_in_tab(d->map) * 40;
	d->m.size_x = ft_count_size_line(d->map[0]) * 40;
}