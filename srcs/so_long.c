/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigerber <tigerber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 12:58:40 by tigerber          #+#    #+#             */
/*   Updated: 2021/10/22 15:28:54 by tigerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

void	ft_print_all_para(t_data *d)
{
	int i = 0;
	t_list *temp;
	t_collect *temc;
	t_list_twist *temt;

	temp = d->lst;
	temc = d->c; 
	temt = d->twist; 
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
	printf("posi P x = %f\n", d->p.x);
	printf("posi P y = %f\n", d->p.y);
	printf("indic P y = %d\n", d->p.indicateur);
	printf("posi E x = %f\n", d->e.x);
	printf("posi E y = %f\n", d->e.y);
	printf("indic E = %d\n", d->e.indicateur);
	while (temc)
	{
		printf("temc x = %d\n",temc->x);
		printf("temc y = %d\n",temc->y);
		printf("temc indic = %d\n",d->indic_c);
		temc = temc->next;
	}
	while (temt)
	{
		printf("temt x = %d\n",temt->x);
		printf("temt y = %d\n",temt->y);
		temt = temt->next;
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
