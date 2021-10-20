/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mov.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigerber <tigerber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 13:58:17 by tigerber          #+#    #+#             */
/*   Updated: 2021/10/20 20:25:10 by tigerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/so_long.h"

int		ft_check_0EC_mov(int y, int x, t_data *d)
{
	if (d->map[y][x] == '0' || d->map[y][x] == 'E' || d->map[y][x] == 'C' || d->map[y][x] == '2' || d->map[y][x] == 'O')
		return (1);
	return (0);
}

void	move_front_back(int keycode, t_data *d)
{
	printf("keyp = %c et keycode = %c\n", (char)d->keyp, (char)keycode);
	if (keycode == 'w')
	{
		d->keyp = keycode;
		if (ft_check_0EC_mov((int)(d->p.y - 1), (int)d->p.x, d))
			d->p.y--;
		d->count++;
		printf("count = %d\n C = %d\n", d->count, d->indic_c);
	}
	if (keycode == 'p' && d->keyp == 'w' && (d->map[(int)d->p.y - 1] != d->map[0]))
	{
		printf("P is OK\n");
		if (d->map[(int)d->p.y - 1][(int)d->p.x] == '1' )
		{
			d->map[(int)d->p.y - 1][(int)d->p.x] = '2';
		}
	}
	int size = ft_count_line_in_tab(d->map);
	if (keycode == 's')
	{
		d->keyp = keycode;
		if (ft_check_0EC_mov((int)(d->p.y + 1), (int)d->p.x, d))
			d->p.y++;
		d->count++;
		printf("count = %d\n C = %d\n", d->count, d->indic_c);
	}
	if (keycode == 'p' && d->keyp == 's' && (d->map[(int)d->p.y + 1] != d->map[size - 1]))
	{
		printf("P is OK\n");

		if (d->map[(int)d->p.y + 1][(int)d->p.x] == '1' )
		{
			d->map[(int)d->p.y + 1][(int)d->p.x] = '2';
		}
	}
	if (d->map[(int)d->p.y][(int)d->p.x] == 'C')
		{
			d->map[(int)d->p.y][(int)d->p.x] = '0';
			d->indic_c--;
		}
	if (d->map[(int)d->p.y][(int)d->p.x] == 'O' && d->indic_c == 0)
		{
			ft_destroy(d);
			exit (0);
		}
}

void	move_lateral(int keycode, t_data *d)
{	
	int size = ft_count_size_line(d->map[(int)d->p.y]);
	printf("size = %d\n", size);
	printf("d->p.x = %f\n", d->p.x);

	if (keycode == 'd')
	{	
		d->keyp = keycode;
		if (ft_check_0EC_mov((int)(d->p.y), (int)d->p.x + 1, d))
			d->p.x++;
		d->count++;
		printf("count = %d\n C = %d\n", d->count, d->indic_c);
	}
	if (keycode == 'p' && d->keyp == 'd' && (d->p.x + 1) != (size - 1))
	{
		printf("P is OK\n");
		if (d->map[(int)d->p.y][(int)d->p.x + 1] == '1')
		{
			d->map[(int)d->p.y][(int)d->p.x + 1] = '2';
		}
	}
	if (keycode == 'a')
	{	
		d->keyp = keycode;
		if (ft_check_0EC_mov((int)(d->p.y), (int)d->p.x - 1, d))
			d->p.x--;
		d->count++;
		printf("count = %d\n C = %d\n", d->count, d->indic_c);
	}
	if (keycode == 'p' && d->keyp == 'a' && (d->p.x - 1) != 0)
	{
		printf("P is OK\n");

		if (d->map[(int)d->p.y][(int)d->p.x - 1] == '1')
		{
			d->map[(int)d->p.y][(int)d->p.x - 1] = '2';
		}
	}
	if (d->map[(int)d->p.y][(int)d->p.x] == 'C')
	{
		d->map[(int)d->p.y][(int)d->p.x] = '0';
		d->indic_c--;
	}
	if (d->map[(int)d->p.y][(int)d->p.x] == 'O' && d->indic_c == 0)
	{
		ft_destroy(d);
		exit (0);
	}
}

int	key_hook(int keycode, t_data *d)
{
	
	ft_escape(keycode, d, 0);
	move_front_back(keycode, d);
	move_lateral(keycode, d);
	return (0);
}