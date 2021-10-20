/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigerber <tigerber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 13:05:11 by tigerber          #+#    #+#             */
/*   Updated: 2021/10/18 13:39:13 by tigerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef _SO_LONG_
# define _SO_LONG_

# include "../libft/includes/libft.h"

# include <stdlib.h>
# include <unistd.h>
# include <time.h>
# include "../mlx/mlx.h"
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 50
# endif

typedef struct		s_map
{
	int size_x;
	int size_y;
	int	x;
	int	y;
	int	xo;
	int	yo;
	int	xa;
	int color;
	int	maps;
}					t_map;

typedef struct	s_img
{
	
	void	*img;
	char	*addr;
	char	*texture;
	int		bits_per_pixel;
	int		line_length;
	int		endian;
	int		color;
	int		width;
	int		heigth;
	int		x2;
	int		y2;

}				t_img;

typedef struct	s_player
{
	
	void	*img;
	char	*addr;
	char	*texture;
	int		bits_per_pixel;
	int		line_length;
	int		endian;
	int		color;
	int		width;
	int		heigth;
	int		x2;
	int		y2;


}				t_player;

typedef struct	s_collect
{
	int x;
	int y;
	struct s_collect	*next;
}				t_collect;

typedef struct	s_position
{
	double x;
	double y;
	double move;
	int mvx;
	int mvy;
	int indicateur;
}				t_posi;


typedef struct	s_data
{
	t_img		explo1;
	t_img		explo2;
	t_img		explo3;
	t_img		explo4;
	t_img		explo5;
	t_img		explo6;
	t_img		explo7;
	t_img		player1;
	t_img		player2;
	t_img		player3;
	t_img		player4;
	t_img		player5;
	t_img		player6;
	t_img		player7;
	t_img		player8;
	t_img		player9;
	t_img		eau;
	t_img		pierre;
	t_img		pomme;
	t_img		gate;
	t_map		m;
	t_img		screen;
	t_posi		p;
	t_posi		e;
	t_collect	*c;
	t_collect	*begin_c;
	int			indic_c;
	char		*line;
	int			fd;
	t_list		*lst;
	t_list		*begin;
	char		**map;
	void		*mlx;
	void		*win;
	int			keyp;
	int			count;
	time_t		time;
	struct tm	*mytime;
}				t_data;

void	ft_argu(t_data *d, int ac, char **av);

int		ft_checkargu(char *arg);

void    ft_get_map(t_data *d);

void    ft_get_in_lst(t_data *d);

int		ft_count_line_in_lst(t_list *lst);

int		ft_count_size_line(char *map);

void	ft_size_map(t_data *d);

void	ft_put_in_tab(t_data *d);

void    ft_parse_map(t_data *d);

void    ft_check_is_rectangle(t_data *d);

int		ft_checkpara(char *str, char c);

void	ft_checkaround(int y, int x, t_data *d);

int		ft_checkis_OCPE(char c);

int		ft_count_line_in_tab(char **tab);

int		ft_check_str(char *str, char c);

void	ft_check_map_dont_forget_one_and_get_pos(t_data *d);

void	ft_check_is_one_first_last(t_data *d);

void	ft_lstadd_collect(t_collect **alst, t_collect *new);

t_collect	*ft_new_collect(int x, int y);

void	ft_lstclear_collect(t_collect *begin_c);

void	ft_get_position(int y, int x, char c, t_data *d);

void	ft_draw(t_data *d);

int		ft_render_next_frame(t_data *d);

void	ft_full_screen_color(t_data *d);

int		ft_cross(t_data *d);

void	ft_destroy(t_data *d);

int		create_trgb(int t, int r, int g, int b);

void	my_mlx_pixel_put(t_img *img, int x, int y, int color);

void	ft_draw_map(t_data *d);

void	ft_init_map(t_data *d);

void	p_map(t_data *data, int x, int y, int max);

void	ft_draw_player(t_data *d, int size);

int		key_hook(int keycode, t_data *d);

int		ft_escape(int keycode, t_data *d, int a);

void	move_front_back(int keycode, t_data *d);

void	move_lateral(int keycode, t_data *d);

int		ft_quit(int a, char *str, t_data *d);

void	ft_free_tab(char **strs);

void	ft_check_malloc(void *data, t_data *d);

void	ft_get_texture(t_data *d);

void	ft_get_texture_player_one(t_data *d);

void	ft_get_texture_player_two(t_data *d);

void	ft_get_texture_player_three(t_data *d);

void	ft_get_texture_explosion(t_data *d);

int		ft_quit_image(t_data *d);

void	print_map(t_data *d);

int    ft_check_line_space(t_data *d);

int    ft_check_line_space_inverse(t_data *d);

void	ft_get_new_map(t_data *d);



# endif
