/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils_parse_three.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigerber <tigerber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 16:56:28 by tigerber          #+#    #+#             */
/*   Updated: 2021/10/26 17:20:59 by tigerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/so_long.h"

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

int	ft_count_size_line(char *map)
{
	int	i;

	i = 0;
	while (map[i])
	{
		i++;
	}
	return (i);
}

void	ft_size_map(t_data *d)
{
	d->m.size_y = ft_count_line_in_tab(d->map) * 25;
	d->m.size_x = ft_count_size_line(d->map[0]) * 25;
}

int	ft_check_line_space(t_data *d)
{
	int	j;
	int	i;

	j = 0;
	i = 0;
	while (d->map[j])
	{
		while (d->map[j][i])
		{
			if (d->map[j][i] == ' ' || d->map[j][i] == '\t')
				i++;
			else
				return (j);
		}
		i = 0;
		j++;
	}
	return (j);
}

int	ft_check_line_space_inverse(t_data *d)
{
	int	j;
	int	i;

	j = ft_count_line_in_tab(d->map) - 1;
	i = 0;
	while (j > 0)
	{
		while (d->map[j][i])
		{
			if (d->map[j][i] == ' ' || d->map[j][i] == '\t')
				i++;
			else
				return (j);
		}
		i = 0;
		j--;
	}
	return (j);
}
