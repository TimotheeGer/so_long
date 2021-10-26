/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigerber <tigerber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 13:05:11 by tigerber          #+#    #+#             */
/*   Updated: 2021/10/26 20:44:10 by tigerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include "../libft/includes/libft.h"
# include "../mlx/mlx.h"

# include <stdlib.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 50

# endif

typedef struct s_list_twist
{
	int					x;
	int					y;
	struct s_list_twist	*next;
}				t_list_twist;

typedef struct s_map
{
	int	size_x;
	int	size_y;
	int	x;
	int	y;
	int	xo;
	int	yo;
	int	xa;
	int	color;
	int	maps;
}				t_map;

typedef struct s_img
{	
	void	*img;
	char	*addr;
	char	*tex;
	int		b_p_pixel;
	int		line_length;
	int		endian;
	int		color;
	int		width;
	int		heigth;
	int		x2;
	int		y2;
}				t_img;

typedef struct s_player
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

typedef struct s_collect
{
	int					x;
	int					y;
	struct s_collect	*next;
}				t_collect;

typedef struct s_position
{
	double	x;
	double	y;
	double	move;
	int		mvx;
	int		mvy;
	int		indicateur;
}				t_posi;

typedef struct s_data
{
	t_list			*begin;
	t_list			*lst;
	t_list_twist	*twist;
	t_list_twist	*begin_twist;
	t_collect		*c;
	t_collect		*begin_c;
	t_img			explo1;
	t_img			explo2;
	t_img			explo3;
	t_img			explo4;
	t_img			explo5;
	t_img			explo6;
	t_img			explo7;
	t_img			pl1;
	t_img			pl2;
	t_img			pl3;
	t_img			pl4;
	t_img			pl5;
	t_img			pl6;
	t_img			pl7;
	t_img			pl8;
	t_img			pl9;
	t_img			phamtom;
	t_img			torn;
	t_img			torn1;
	t_img			torn2;
	t_img			torn3;
	t_img			torn4;
	t_img			torn5;
	t_img			eau;
	t_img			box;
	t_img			roc;
	t_img			pomme;
	t_img			appletoxic;
	t_img			gate;
	t_img			gate_o;
	t_img			screen;
	t_posi			p;
	t_posi			e;
	t_map			m;
	int				indic_c;
	int				indic_p;
	char			*line;
	int				fd;
	char			**map;
	void			*mlx;
	void			*win;
	int				keyp;
	int				count;
	int				time;
	int				time2;
	int				time3;
	int				explo_x;
	int				explo_y;
	int				twist_x;
	int				twist_y;
	char			*str_steps;
	int				dead;
}				t_data;

t_collect		*ft_new_collect(int x, int y);

t_list_twist	*ft_new_twist(int x, int y);

void			ft_argu(t_data *d, int ac, char **av);

int				ft_checkargu(char *arg);

void			ft_get_map(t_data *d);

void			ft_get_in_lst(t_data *d);

int				ft_count_line_in_lst(t_list *lst);

int				ft_count_size_line(char *map);

void			ft_size_map(t_data *d);

void			ft_put_in_tab(t_data *d);

void			ft_parse_map(t_data *d);

void			ft_check_is_rectangle(t_data *d);

int				ft_checkpara(char *str, char c);

void			ft_checkaround(int y, int x, t_data *d);

int				ft_count_line_in_tab(char **tab);

int				ft_check_str(char *str, char c);

void			ft_check_map_dont_forget_one_and_get_pos(t_data *d);

void			ft_check_is_one_first_last(t_data *d);

void			ft_lstadd_collect(t_collect **alst, t_collect *new);

void			ft_lstclear_collect(t_collect *begin_c);

void			ft_get_position(int y, int x, char c, t_data *d);

void			ft_draw(t_data *d);

int				ft_render_next_frame(t_data *d);

void			ft_full_screen_color(t_data *d);

int				ft_cross(t_data *d);

void			ft_destroy(t_data *d);

int				create_trgb(int t, int r, int g, int b);

void			my_mlx_pixel_put(t_img *img, int x, int y, int color);

void			ft_draw_map(t_data *d);

void			ft_init_map(t_data *d);

void			ft_explosion_part_one(t_data *d);

void			ft_explosion_part_two(t_data *d);

void			ft_explosion(t_data *d);

void			p_map(t_data *data, int x, int y, int max);

void			ft_draw_player(t_data *d, int size);

int				key_hook(int keycode, t_data *d);

int				ft_escape(int keycode, t_data *d, int a);

void			move_front_back(int keycode, t_data *d);

void			move_lateral(int keycode, t_data *d);

int				ft_quit(int a, char *str, t_data *d);

void			ft_free_tab(char **strs);

void			ft_check_malloc(void *data, t_data *d);

void			ft_get_texture(t_data *d);

void			ft_get_texture_player_one(t_data *d);

void			ft_get_texture_player_two(t_data *d);

void			ft_get_texture_player_three(t_data *d);

void			ft_get_texture_explosion(t_data *d);

int				ft_quit_image(t_data *d);

void			print_map(t_data *d);

int				ft_check_line_space(t_data *d);

int				ft_check_line_space_inverse(t_data *d);

void			ft_get_new_map(t_data *d);

void			ft_put_steps(t_data *d);

void			ft_put_box(t_data *d);

void			ft_torn_sheet(t_data *d);

void			ft_torn_sheet_one(t_data *d, t_list_twist *temp);

void			ft_torn_sheet_two(t_data *d, t_list_twist *temp);

void			ft_lstadd_twist(t_list_twist **alst, t_list_twist *new);

void			ft_lstclear_twist(t_list_twist *begin_c);

void			ft_get_twist(int y, int x, t_data *d);

void			ft_print_steps(int key, t_data *d);

int				ft_check_twist(int y, int x, t_data *d);

int				ft_check_oec_mov(int y, int x, t_data *d);

void			ft_mov_w(int keycode, t_data *d);

void			ft_mov_s(int keycode, t_data *d);

void			ft_mov_d(int keycode, t_data *d);

void			ft_mov_a(int keycode, t_data *d);

void			ft_check_p_e_c(t_data *d);

int				ft_checkis_ocpe(char c);

void			ft_print_texture_pierre_colect(t_data *d, int x, int y);

void			ft_print_texture_gate_and_open(t_data *d, int x, int y);

void			ft_print_explo_part_one(t_data *d, int x, int y);

void			ft_print_explo_part_two(t_data *d, int x, int y);

void			ft_print_torn_part_one(t_data *d, int x, int y);

void			ft_print_torn_part_two(t_data *d, int x, int y);

void			ft_destroy_evironement(t_data *d);

void			ft_destroy_players(t_data *d);

void			ft_destroy_tornade(t_data *d);

void			ft_destroy_explo(t_data *d);

void			ft_get_tex_evironement(t_data *d);

void			ft_get_tex_evironement_two(t_data *d);

void			ft_get_tex_tornade(t_data *d);

void			ft_get_tex_tornade_two(t_data *d);

void			ft_get_texture_player(t_data *d);

void			ft_get_texture_explosion_one(t_data *d);

void			ft_get_texture_explosion_two(t_data *d);

void			ft_draw_player_back(t_data *d, int x2, int y2);

void			ft_draw_player_front(t_data *d, int x2, int y2);

void			ft_draw_player_right(t_data *d, int x2, int y2);

void			ft_draw_player_left(t_data *d, int x2, int y2);

void			ft_draw_player_start(t_data *d, int x2, int y2);

void			ft_print_game_over(void);

#endif
