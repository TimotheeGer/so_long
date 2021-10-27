/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigerber <tigerber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 12:58:40 by tigerber          #+#    #+#             */
/*   Updated: 2021/10/26 20:25:04 by tigerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

int	main(int ac, char **av)
{
	t_data	d;

	ft_memset(&d, 0, sizeof(t_data));
	ft_argu(&d, ac, av);
	ft_get_map(&d);
	ft_parse_map(&d);
	ft_draw(&d);
	ft_quit(2, "FIN\n", &d);
	return (0);
}
