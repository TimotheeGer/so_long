/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils_lst_two.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigerber <tigerber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 17:16:32 by tigerber          #+#    #+#             */
/*   Updated: 2021/10/26 17:17:10 by tigerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/so_long.h"

t_list_twist	*ft_new_twist(int x, int y)
{
	t_list_twist	*new_twist;

	new_twist = malloc (sizeof (t_list_twist));
	if (!(new_twist))
		return (NULL);
	new_twist->y = y;
	new_twist->x = x;
	new_twist->next = NULL;
	return (new_twist);
}

void	ft_lstadd_twist(t_list_twist **alst, t_list_twist *new)
{
	t_list_twist	*temp;

	if (!alst || !new)
		return ;
	if (*alst)
	{
		temp = *alst;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = new;
	}
	else
		*alst = new;
}

void	ft_lstclear_twist(t_list_twist *begin_c)
{
	t_list_twist	*temp;

	while (begin_c != NULL)
	{
		temp = begin_c;
		begin_c = temp->next;
		if (temp)
			free(temp);
	}
	begin_c = NULL;
}
