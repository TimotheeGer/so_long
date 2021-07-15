/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils_parse.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigerber <tigerber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 14:12:15 by tigerber          #+#    #+#             */
/*   Updated: 2021/07/15 14:07:35 by tigerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	ft_checkis_OCPE(char c)
{
	return (c == '0' || c == 'C' || c == 'P' || c == 'E');
}

int	ft_checkpara(char *str, char c)
{
	int	i;

	i = 0;
	while (str[i] == ' ' || str[i] == '\t')
		i++;
	if (str[i] == c)
		return (1);
	return (0);
}

int	ft_count_line_in_lst(t_list *lst)
{
	int		i;
	t_list	*temp;

	i = 0;
	temp = lst;
	while (temp)
	{
		i++;
		temp = temp->next;
	}
	return (i);
}

int	ft_count_line_in_tab(char **tab)
{
	int	i;

	i = 0;
	while (tab[i])
	{
		i++;
	}
	return (i);
}

int	ft_check_str(char *str, char c)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] != c)
			return (1);
		i++;
	}
	return (0);
}
