/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigerber <tigerber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 12:58:40 by tigerber          #+#    #+#             */
/*   Updated: 2021/07/15 16:02:44 by tigerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_print_all_para(t_data *d)
{
	int i = 0;
	t_list *temp;
	t_collect *temc;

	temp = d->lst;
	temc = d->c; 
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
	printf("posi P x = %d\n", d->p.x);
	printf("posi P y = %d\n", d->p.y);
	printf("indic P y = %d\n", d->p.indicateur);
	printf("posi E x = %d\n", d->e.x);
	printf("posi E y = %d\n", d->e.y);
	printf("indic E = %d\n", d->e.indicateur);
	while (temc)
	{
		printf("temc x = %d\n",temc->x);
		printf("temc y = %d\n",temc->y);
		printf("temc indic = %d\n",d->indic_c);
		temc = temc->next;
	}
	printf("size map x = %d\n", d->m.size_x);
	printf("size map y = %d\n", d->m.size_y);
}

int	main(int ac, char **av)
{
	t_data	d;

	ft_memset(&d, 0, sizeof(t_data));
	ft_argu(&d, ac, av);
	ft_get_map(&d);
	ft_parse_map(&d);
	ft_print_all_para(&d);
	ft_draw(&d);
	ft_quit(2, "FIN\n", &d);
	return (0);
}
