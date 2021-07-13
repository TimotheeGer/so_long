/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_map.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigerber <tigerber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 13:45:38 by tigerber          #+#    #+#             */
/*   Updated: 2021/07/13 15:07:18 by tigerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void    ft_get_in_lst(t_data *d)
{
    while (get_next_line(d->fd, &d->line))
	{
		ft_lstadd_back(&d->lst, ft_lstnew(ft_strdup(d->line)));
		free(d->line);
	}
	ft_lstadd_back(&d->lst, ft_lstnew(ft_strdup(d->line)));
	free(d->line);
	d->begin = d->lst;
    return ;
}

void	ft_put_in_tab(t_data *d)
{
	int i;
	t_list *temp;

	i = 0;
	temp = d->lst;
	d->map = malloc(sizeof(char*) * (ft_count_line_in_lst(d->lst) + 1));
	ft_check_malloc(&d->map, d);
	while (temp)
	{
		d->map[i] = ft_strdup(temp->content);
		ft_check_malloc(&d->map[i], d);
		temp = temp->next;
		i++;
	}
	d->map[i] = NULL;
}

void    ft_get_map(t_data *d)
{
	ft_get_in_lst(d);
	ft_put_in_tab(d);
    return ;
}