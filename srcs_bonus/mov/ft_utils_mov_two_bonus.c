/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils_mov_two.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigerber <tigerber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 14:56:39 by tigerber          #+#    #+#             */
/*   Updated: 2021/10/26 17:31:36 by tigerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/so_long.h"

int	ft_check_oec_mov(int y, int x, t_data *d)
{
	if (d->map[y][x] == '0' || d->map[y][x] == 'E' || d->map[y][x] == 'C'
		|| d->map[y][x] == '2' || d->map[y][x] == 'O' || d->map[y][x] == 'T'
		|| d->map[y][x] == 'Y' || d->map[y][x] == 'U' || d->map[y][x] == 'I'
		|| d->map[y][x] == 'G' || d->map[y][x] == 'H')
		return (1);
	return (0);
}

int	ft_check_twist(int y, int x, t_data *d)
{
	if (d->map[y][x] == 'T' || d->map[y][x] == 'I' || d->map[y][x] == 'Y'
		|| d->map[y][x] == 'U' || d->map[y][x] == 'G' || d->map[y][x] == 'H')
		return (1);
	return (0);
}

void	ft_print_steps(int key, t_data *d)
{
	if (key == 'w' || key == 's' || key == 'a' || key == 'd')
	{
		ft_put_steps(d);
		write(1, d->str_steps, ft_strlen(d->str_steps));
		write(1, "\n", 1);
	}
}

void	ft_put_steps(t_data *d)
{
	char	*steps;

	steps = ft_itoa(d->count);
	if (d->str_steps)
	{
		free(d->str_steps);
		d->str_steps = NULL;
	}
	d->str_steps = ft_strjoin("steps = ", steps);
	free(steps);
}
