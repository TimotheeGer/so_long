/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_map.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigerber <tigerber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 15:11:10 by tigerber          #+#    #+#             */
/*   Updated: 2021/07/13 15:58:26 by tigerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_checkaround_zero(int y, int x, t_data *d)
{
	if ((d->map[y - 1][x - 1] == ' ' || d->map[y - 1][x - 1] == '\0'))
		ft_quit(0, "Error\nThe map is open, a 1 is missing.\n", d);
	if ((d->map[y - 1][x] == ' ' || d->map[y - 1][x] == '\0'))
		ft_quit(0, "Error\nThe map is open, a 1 is missing.\n", d);
	if ((d->map[y - 1][x + 1] == ' ' || d->map[y - 1][x + 1] == '\0'))
		ft_quit(0, "Error\nThe map is open, a 1 is missing.\n", d);
	if ((d->map[y][x - 1] == ' ' || d->map[y][x - 1] == '\0'))
		ft_quit(0, "Error\nThe map is open, a 1 is missing.\n", d);
	if ((d->map[y][x + 1] == ' ' || d->map[y][x + 1] == '\0'))
		ft_quit(0, "Error\nThe map is open, a 1 is missing.\n", d);
	if ((d->map[y + 1][x - 1] == ' ' || d->map[y + 1][x - 1] == '\0'))
		ft_quit(0, "Error\nThe map is open, a 1 is missing.\n", d);
	if ((d->map[y + 1][x] == ' ' || d->map[y + 1][x] == '\0'))
		ft_quit(0, "Error\nThe map is open, a 1 is missing.\n", d);
	if ((d->map[y + 1][x + 1] == ' ' || d->map[y + 1][x + 1] == '\0'))
		ft_quit(0, "Error\nThe map is open, a 1 is missing.\n", d);
}

void    ft_check_is_rectangle(t_data *d)
{
	int i;

	i = 0;
	while (d->map[i])
	{
		if (ft_strlen(d->map[i]) != ft_strlen(d->map[0]))
			ft_quit(2, "Error\nMap is not rectangle\n", d);
		i++;
	}
	return ;
}

void	ft_check_is_close(t_data *d)
{
	if (ft_check_str(d->map[0], '1'))
		ft_quit(2, "Error\nMap open\n", d);
	if (ft_check_str(d->map[ft_count_line_in_tab(d->map) - 1], '1'))
		ft_quit(2, "Error\nMap open\n", d);
}

void    ft_parse_map(t_data *d)
{
	ft_check_is_rectangle(d);
	ft_check_is_close(d);
}

//checker le premier et dernier char entre la premiere et derniere ligne si c bien un 1