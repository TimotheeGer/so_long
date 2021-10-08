/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_map.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigerber <tigerber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 15:11:10 by tigerber          #+#    #+#             */
/*   Updated: 2021/10/08 16:59:27 by tigerber         ###   ########.fr       */
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

void	print_map(t_data *d)
{
	int i = 0;
	while(d->map[i])
	{
		printf("map = %s\n", d->map[i]);
		i++;
	}
	return ;	
}

int    ft_check_line_space(t_data *d)
{
    int j = 0;
    int i = 0;

    while (d->map[j])
    {
        while(d->map[j][i])
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

int    ft_check_line_space_inverse(t_data *d)
{
    int j = ft_count_line_in_tab(d->map) - 1;
    int i = 0;

    while (j > 0)
    {
        while(d->map[j][i])
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


void	ft_check_is_rectangle(t_data *d)
{
	int	i;

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
		ft_quit(2, "Error\nMap open1\n", d);
	if (ft_check_str(d->map[ft_count_line_in_tab(d->map) - 1], '1'))
		ft_quit(2, "Error\nMap open2\n", d);
	ft_check_is_one_first_last(d);
}

void	ft_check_map_dont_forget_one_and_get_pos(t_data *d)
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	while (d->map[y])
	{
		while (d->map[y][x])
		{
			if (ft_checkis_OCPE(d->map[y][x]))
			{
				ft_checkaround(y, x, d);
				ft_get_position(y, x, d->map[y][x], d);
			}
			x++;
		}
		x = 0;
		y++;
	}
}

void	ft_get_new_map(t_data *d)
{
	int	i;
	int j;
	int k;
	char **temp;
	

	k = 0;
	i = ft_check_line_space(d);
	j = ft_check_line_space_inverse(d) + 1;
	temp = d->map;
	d->map = malloc(sizeof(char*) * ((j - i) + 1));
	ft_check_malloc(&d->map, d);
	while (i < j)
	{
		d->map[k] = ft_strdup(temp[i]);
		ft_check_malloc(&d->map[k], d);
		k++;
		i++;
	}
	d->map[k] = NULL;
	ft_free_tab(temp);
	printf("==========newmap========\n");
	print_map(d);
}

void	ft_parse_map(t_data *d)
{
	print_map(d);

	ft_get_new_map(d);
	ft_check_is_rectangle(d);
	ft_check_is_close(d);
	ft_check_map_dont_forget_one_and_get_pos(d);
	ft_size_map(d);
}
