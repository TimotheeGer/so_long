/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils_lst.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigerber <tigerber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 13:11:06 by tigerber          #+#    #+#             */
/*   Updated: 2021/10/22 15:13:24 by tigerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/so_long.h"

t_collect	*ft_new_collect(int x, int y)
{
	t_collect	*new_collect;

	new_collect = malloc (sizeof (t_collect));
	if (!(new_collect))
		return (NULL);
	new_collect->y = y;
	new_collect->x = x;
	new_collect->next = NULL;
	return (new_collect);
}

void	ft_lstadd_collect(t_collect **alst, t_collect *new)
{
	t_collect	*temp;

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

void	ft_lstclear_collect(t_collect *begin_c)
{
	t_collect	*temp;

	while (begin_c != NULL)
	{
		temp = begin_c;
		begin_c = temp->next;
		if (temp)
			free(temp);
	}
	begin_c = NULL;
}

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