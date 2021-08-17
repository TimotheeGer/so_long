/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_argument.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigerber <tigerber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 13:21:41 by tigerber          #+#    #+#             */
/*   Updated: 2021/08/16 15:52:20 by tigerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/so_long.h"

int	ft_checkargu(char *arg)
{
	int	i;

	i = ft_strlen(arg) - 4;
	if (arg[i] == '.')
	{
		if ((ft_strncmp(&arg[i], ".ber", 4) == 0))
			return (1);
	}
	return (0);
}

void	ft_argu(t_data *d, int ac, char **av)
{
	if ((ac == 2 && ft_checkargu(av[1])) == 1)
		d->fd = open(av[1], O_RDONLY);
	else
		ft_quit(1, "Error\nerror argument.\n", NULL);
	if (d->fd == -1)
		ft_quit(1, "Error\nerror argument.\n", NULL);
}
