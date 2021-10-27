/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils_draw_map_two.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigerber <tigerber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 18:35:56 by tigerber          #+#    #+#             */
/*   Updated: 2021/10/26 18:44:44 by tigerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/so_long.h"

void	ft_torn_sheet(t_data *d)
{	
	t_list_twist	*temp;

	temp = d->twist;
	while (temp)
	{
		ft_torn_sheet_one(d, temp);
		ft_torn_sheet_two(d, temp);
		temp = temp->next;
	}
}

void	ft_torn_sheet_one(t_data *d, t_list_twist *temp)
{
	if (d->map[temp->y][temp->x] == 'T' && d->time2++ == 7)
	{
		d->map[temp->y][temp->x] = 'Y';
		d->time2 = 0;
	}
	if (d->map[temp->y][temp->x] == 'Y' && d->time2++ == 7)
	{
		d->map[temp->y][temp->x] = 'U';
		d->time2 = 0;
	}
	if (d->map[temp->y][temp->x] == 'U' && d->time2++ == 7)
	{
		d->map[temp->y][temp->x] = 'I';
		d->time2 = 0;
	}
}

void	ft_torn_sheet_two(t_data *d, t_list_twist *temp)
{
	if (d->map[temp->y][temp->x] == 'I' && d->time2++ == 7)
	{
		d->map[temp->y][temp->x] = 'G';
		d->time2 = 0;
	}
	if (d->map[temp->y][temp->x] == 'G' && d->time2++ == 7)
	{
		d->map[temp->y][temp->x] = 'H';
		d->time2 = 0;
	}
	if (d->map[temp->y][temp->x] == 'H' && d->time2++ == 7)
	{
		d->map[temp->y][temp->x] = 'T';
		d->time2 = 0;
	}
}
