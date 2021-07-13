/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigerber <tigerber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 13:05:11 by tigerber          #+#    #+#             */
/*   Updated: 2021/07/13 15:42:57 by tigerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef _SO_LONG_
# define _SO_LONG_

# include "../libft/includes/libft.h"

# include <stdlib.h>
# include <unistd.h>
# include "../mlx/mlx.h"
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 50
# endif

typedef struct	s_data
{
	char	*line;
	int		fd;
	t_list	*lst;
	t_list	*begin;
	char	**map;
}				t_data;

void	ft_argu(t_data *d, int ac, char **av);

int		ft_checkargu(char *arg);

void    ft_get_map(t_data *d);

void    ft_get_in_lst(t_data *d);

int		ft_count_line_in_lst(t_list *lst);

void	ft_put_in_tab(t_data *d);

void    ft_parse_map(t_data *d);

void    ft_check_is_rectangle(t_data *d);

int		ft_checkpara(char *str, char c);

void	ft_checkaround_zero(int y, int x, t_data *d);

int		ft_count_line_in_tab(char **tab);

int		ft_check_str(char *str, char c);






int		ft_quit(int a, char *str, t_data *d);

void	ft_free_tab(char **strs);

void	ft_check_malloc(void *data, t_data *d);

# endif
