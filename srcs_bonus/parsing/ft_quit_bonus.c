/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_quit.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigerber <tigerber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 13:25:42 by tigerber          #+#    #+#             */
/*   Updated: 2021/10/26 16:09:33 by tigerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/so_long.h"

void	ft_free_tab(char **strs)
{
	int	i;

	i = 0;
	while (strs[i])
	{
		free(strs[i]);
		i++;
	}
	free(strs);
	strs = NULL;
}

int	ft_quit(int a, char *str, t_data *d)
{
	(void)d;
	if (a == 1)
	{
		write(2, str, ft_strlen(str));
		exit(0);
	}
	if (a == 2)
	{
		write(2, str, ft_strlen(str));
		ft_lstclear(&d->begin, free);
		ft_free_tab(d->map);
	}
	if (d->c)
		ft_lstclear_collect(d->c);
	if (d->twist)
		ft_lstclear_twist(d->twist);
	exit(0);
}

void	ft_check_malloc(void *data, t_data *d)
{
	if (!(data))
		ft_quit(2, "Error\nMalloc fail\n", d);
}
