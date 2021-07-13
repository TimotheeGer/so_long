/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigerber <tigerber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 12:58:40 by tigerber          #+#    #+#             */
/*   Updated: 2021/07/13 15:39:07 by tigerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_print_all_para(t_data *d)
{
	int i = 0;
	t_list *temp;

	temp = d->lst; 
	while (temp)
	{
		printf ("#lst = %s#\n", (char *)temp->content);
		temp = temp->next;
	}
	if (d->map)
	{
		while (d->map[i])
		{
			printf("*test map = %s*\n", d->map[i]);
			i++;
		}
	}
	printf("map[fin] = %s\n", d->map[ft_count_line_in_tab(d->map) - 1]);
}

int	main(int ac, char **av)
{
	t_data	d;
	
	ft_memset(&d, 0, sizeof(t_data));
	ft_argu(&d, ac, av);
	ft_get_map(&d);
	ft_print_all_para(&d);
	ft_parse_map(&d);
	ft_quit(2, "FIN\n", &d);
	return (0);
}