/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mov.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigerber <tigerber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 13:58:17 by tigerber          #+#    #+#             */
/*   Updated: 2021/10/22 18:39:29 by tigerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/so_long.h"

int		ft_check_0EC_mov(int y, int x, t_data *d)
{
	if (d->map[y][x] == '0' || d->map[y][x] == 'E' || d->map[y][x] == 'C'
		|| d->map[y][x] == '2' || d->map[y][x] == 'O' || d->map[y][x] == 'T'
		|| d->map[y][x] == 'Y' || d->map[y][x] == 'U' || d->map[y][x] == 'I'
		|| d->map[y][x] == 'G' || d->map[y][x] == 'H')
		return (1);
	return (0);
}

//########################################################################################################################
//########################################################################################################################
void	ft_put_steps(t_data *d)
{
	char *steps;

	steps = ft_itoa(d->count);
	// if (d->count == 0)
	// 	write(1 , "steps = 0", 10);
	if (d->str_steps)
	{
		free(d->str_steps);
		d->str_steps = NULL;
	}
	d->str_steps = ft_strjoin("steps = ", steps);
	free(steps);
	write(1 , d->str_steps, ft_strlen(d->str_steps));
	write(1 ,"\n", 1);
	//free str_step a la fin dans un ft_error ou quit
}

void	move_front_back(int keycode, t_data *d)
{
	if (keycode == 'w')
	{
		d->keyp = keycode;
		if (ft_check_0EC_mov((int)(d->p.y - 1), (int)d->p.x, d))
			d->p.y--;
		d->count++;
	}
	if (keycode == 'p' && d->keyp == 'w' && (d->map[(int)d->p.y - 1] != d->map[0]) && d->indic_p == 0)
	{
		d->explo_x = d->p.x;
		d->explo_y = d->p.y - 1;
		if (d->map[(int)d->p.y - 1][(int)d->p.x] == '1')
		{
			d->indic_p = 1;
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
	}
	if (keycode == 'p' && d->keyp == 's' && (d->map[(int)d->p.y + 1] != d->map[size - 1]) && d->indic_p == 0)
	{
		d->explo_x = d->p.x;
		d->explo_y = d->p.y + 1;
		if (d->map[(int)d->p.y + 1][(int)d->p.x] == '1')
		{
			d->indic_p = 1;
			d->map[(int)d->p.y + 1][(int)d->p.x] = '2';
		}	
	}
	if (d->map[(int)d->p.y][(int)d->p.x] == 'C')
		{
			d->map[(int)d->p.y][(int)d->p.x] = '0';
			d->indic_c--;
		}
	if (d->map[(int)d->p.y][(int)d->p.x] == 'T' || d->map[(int)d->p.y][(int)d->p.x] == 'I' || d->map[(int)d->p.y][(int)d->p.x] == 'Y'
			|| d->map[(int)d->p.y][(int)d->p.x] == 'U' || d->map[(int)d->p.y][(int)d->p.x] == 'G' || d->map[(int)d->p.y][(int)d->p.x] == 'H')
		{
			d->dead = 1;
			d->keyp = 1;
			ft_destroy(d);
			exit (0);
		}
	if (d->map[(int)d->p.y][(int)d->p.x] == 'O' && d->indic_c == 0)
		{
			ft_destroy(d);
			exit (0);
		}
}

//########################################################################################################################
//########################################################################################################################

void	move_lateral(int keycode, t_data *d)
{	
	int size = ft_count_size_line(d->map[(int)d->p.y]);
	if (keycode == 'd')
	{	
		d->keyp = keycode;
		if (ft_check_0EC_mov((int)(d->p.y), (int)d->p.x + 1, d))
			d->p.x++;
		d->count++;
	}
	if (keycode == 'p' && d->keyp == 'd' && (d->p.x + 1) != (size - 1) && d->indic_p == 0)
	{
		d->explo_x = d->p.x + 1;
		d->explo_y = d->p.y;
		if (d->map[(int)d->p.y][(int)d->p.x + 1] == '1')
		{
			d->indic_p = 1;
			d->map[(int)d->p.y][(int)d->p.x + 1] = '2';
		}
	}
	if (keycode == 'a')
	{	
		d->keyp = keycode;
		if (ft_check_0EC_mov((int)(d->p.y), (int)d->p.x - 1, d))
			d->p.x--;
		d->count++;
	}
	if (keycode == 'p' && d->keyp == 'a' && (d->p.x - 1) != 0 && d->indic_p == 0)
	{
		d->explo_x = d->p.x - 1;
		d->explo_y = d->p.y;
		if (d->map[(int)d->p.y][(int)d->p.x - 1] == '1')
		{
			d->indic_p = 1;
			d->map[(int)d->p.y][(int)d->p.x - 1] = '2';
		}
	}
	if (d->map[(int)d->p.y][(int)d->p.x] == 'C')
	{
		d->map[(int)d->p.y][(int)d->p.x] = '0';
		d->indic_c--;
	}
	if (d->map[(int)d->p.y][(int)d->p.x] == 'T' || d->map[(int)d->p.y][(int)d->p.x] == 'I' || d->map[(int)d->p.y][(int)d->p.x] == 'Y'
			|| d->map[(int)d->p.y][(int)d->p.x] == 'U' || d->map[(int)d->p.y][(int)d->p.x] == 'G' || d->map[(int)d->p.y][(int)d->p.x] == 'H')
	{
		d->dead = 1;
		d->keyp = 1;
		ft_destroy(d);
		exit (0);
	}
	if (d->map[(int)d->p.y][(int)d->p.x] == 'O' && d->indic_c == 0)
	{
		ft_destroy(d);
		exit (0);
	}
}

//########################################################################################################################
//########################################################################################################################

int	key_hook(int keycode, t_data *d)
{
	ft_escape(keycode, d, 0);
	move_front_back(keycode, d);
	move_lateral(keycode, d);
	ft_put_steps(d);
	return (0);
}