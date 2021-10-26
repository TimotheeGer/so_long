/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils_parse_two.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigerber <tigerber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 13:56:09 by tigerber          #+#    #+#             */
/*   Updated: 2021/10/26 17:22:01 by tigerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/so_long.h"

void	ft_checkaround(int y, int x, t_data *d)
{
	if ((d->map[y - 1][x - 1] == ' ' || d->map[y - 1][x - 1] == '\0'))
		ft_quit(2, "Error\nThe map is open, a 1 is missing.\n", d);
	if ((d->map[y - 1][x] == ' ' || d->map[y - 1][x] == '\0'))
		ft_quit(2, "Error\nThe map is open, a 1 is missing.\n", d);
	if ((d->map[y - 1][x + 1] == ' ' || d->map[y - 1][x + 1] == '\0'))
		ft_quit(2, "Error\nThe map is open, a 1 is missing.\n", d);
	if ((d->map[y][x - 1] == ' ' || d->map[y][x - 1] == '\0'))
		ft_quit(2, "Error\nThe map is open, a 1 is missing.\n", d);
	if ((d->map[y][x + 1] == ' ' || d->map[y][x + 1] == '\0'))
		ft_quit(2, "Error\nThe map is open, a 1 is missing.\n", d);
	if ((d->map[y + 1][x - 1] == ' ' || d->map[y + 1][x - 1] == '\0'))
		ft_quit(2, "Error\nThe map is open, a 1 is missing.\n", d);
	if ((d->map[y + 1][x] == ' ' || d->map[y + 1][x] == '\0'))
		ft_quit(2, "Error\nThe map is open, a 1 is missing.\n", d);
	if ((d->map[y + 1][x + 1] == ' ' || d->map[y + 1][x + 1] == '\0'))
		ft_quit(2, "Error\nThe map is open, a 1 is missing.\n", d);
}

void	ft_get_collect(int y, int x, t_data *d)
{	
	ft_lstadd_collect(&d->c, ft_new_collect(x, y));
}

void	ft_get_twist(int y, int x, t_data *d)
{
	ft_lstadd_twist(&d->twist, ft_new_twist(x, y));
}

void	ft_get_position(int y, int x, char c, t_data *d)
{
	if (c == 'P' && d->p.indicateur == 1)
		ft_quit(2, "Error.\nto much Player.\n", d);
	if (c == 'P')
	{
		d->p.indicateur = 1;
		d->p.x = x;
		d->p.y = y;
		d->map[y][x] = '0';
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
	if (c == 'T')
	{
		ft_get_twist(y, x, d);
	}
}

void	ft_check_p_e_c(t_data *d)
{
	if (d->indic_c == 0)
		ft_quit(2, "Error.\nYou need Collect.\n", d);
	if (d->e.indicateur == 0)
		ft_quit(2, "Error.\nYou need Exit.\n", d);
	if (d->p.indicateur == 0)
		ft_quit(2, "Error.\nYou need Player.\n", d);
}
