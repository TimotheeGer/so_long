# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tigerber <tigerber@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/26 15:50:08 by tigerber          #+#    #+#              #
#    Updated: 2021/10/27 14:54:52 by tigerber         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = so_long
BONUS = so_long_bonus

CC = clang
CFLAGS = -Wall -Werror -Wextra -g3
HEAD = -I includes -I libft/includes -I mlx
LIBFT_DIR = libft
MLX_DIR = mlx
LDFLAGS = -L ${LIBFT_DIR} -L ${MLX_DIR}
LIBS = -lm -lft -lmlx -lXext -lX11
DEFINE_DEFAULT= -D PROJECT_NAME="${NAME}"

SRC =	./srcs/so_long.c \
		./srcs/parsing/ft_get_argument.c \
		./srcs/parsing/ft_quit.c \
		./srcs/parsing/ft_get_map.c \
		./srcs/parsing/ft_utils_parse.c \
		./srcs/parsing/ft_utils_parse_two.c \
		./srcs/parsing/ft_utils_parse_three.c \
		./srcs/parsing/ft_parse_map.c \
		./srcs/parsing/ft_utils_lst.c \
		./srcs/parsing/ft_utils_lst_two.c \
		./srcs/draw/ft_draw.c \
		./srcs/draw/ft_destroy.c \
		./srcs/draw/ft_make_image.c \
		./srcs/draw/ft_quit_image.c \
		./srcs/draw/ft_utils_draw.c \
		./srcs/draw/ft_draw_map.c \
		./srcs/draw/ft_draw_map_two.c \
		./srcs/draw/ft_draw_map_three.c \
		./srcs/draw/ft_utils_draw_map.c \
		./srcs/draw/ft_utils_draw_map_two.c \
		./srcs/draw/ft_draw_player.c \
		./srcs/draw/ft_draw_player_two.c \
		./srcs/draw/ft_get_texture.c \
		./srcs/draw/ft_get_texture_two.c \
		./srcs/draw/ft_get_texture_three.c \
		./srcs/mov/mov.c \
		./srcs/mov/ft_utils_mov_one.c \
		./srcs/mov/ft_utils_mov_two.c 

SRC_BONUS =	./srcs_bonus/so_long_bonus.c \
			./srcs_bonus/parsing/ft_get_argument_bonus.c \
			./srcs_bonus/parsing/ft_quit_bonus.c \
			./srcs_bonus/parsing/ft_get_map_bonus.c \
			./srcs_bonus/parsing/ft_utils_parse_bonus.c \
			./srcs_bonus/parsing/ft_utils_parse_two_bonus.c \
			./srcs_bonus/parsing/ft_utils_parse_three_bonus.c \
			./srcs_bonus/parsing/ft_parse_map_bonus.c \
			./srcs_bonus/parsing/ft_utils_lst_bonus.c \
			./srcs_bonus/parsing/ft_utils_lst_two_bonus.c \
			./srcs_bonus/draw/ft_draw_bonus.c \
			./srcs_bonus/draw/ft_destroy_bonus.c \
			./srcs_bonus/draw/ft_make_image_bonus.c \
			./srcs_bonus/draw/ft_quit_image_bonus.c \
			./srcs_bonus/draw/ft_utils_draw_bonus.c \
			./srcs_bonus/draw/ft_draw_map_bonus.c \
			./srcs_bonus/draw/ft_draw_map_two_bonus.c \
			./srcs_bonus/draw/ft_draw_map_three_bonus.c \
			./srcs_bonus/draw/ft_utils_draw_map_bonus.c \
			./srcs_bonus/draw/ft_utils_draw_map_two_bonus.c \
			./srcs_bonus/draw/ft_draw_player_bonus.c \
			./srcs_bonus/draw/ft_draw_player_two_bonus.c \
			./srcs_bonus/draw/ft_get_texture_bonus.c \
			./srcs_bonus/draw/ft_get_texture_two_bonus.c \
			./srcs_bonus/draw/ft_get_texture_three_bonus.c \
			./srcs_bonus/mov/mov_bonus.c \
			./srcs_bonus/mov/ft_utils_mov_one_bonus.c \
			./srcs_bonus/mov/ft_utils_mov_two_bonus.c 
		
OBJS = ${SRC:.c=.o}

OBJS_BONUS = ${SRC_BONUS:.c=.o}

all : ${NAME}

$(NAME) : ${OBJS}
	@make -C ${LIBFT_DIR}
	@make -C ${MLX_DIR}
	@${CC} ${CFLAGS} ${LDFLAGS} ${DEFINE_DEFAULT} ${OBJS} -o ${NAME} ${LIBS}

%.o : %.c
	@$(CC) $(CFLAGS) ${HEAD} -o $@ -c $<

bonus : ${BONUS}

$(BONUS) : ${OBJS_BONUS}
	@make -C ${LIBFT_DIR}
	@make -C ${MLX_DIR}
	@${CC} ${CFLAGS} ${LDFLAGS} ${DEFINE_DEFAULT} ${OBJS_BONUS} -o ${BONUS} ${LIBS}

clean :
	@rm -rf ${OBJS}
	@rm -rf ${OBJS_BONUS}
	@make clean -C ${LIBFT_DIR}
	@make clean -C ${MLX_DIR}

fclean : clean
	@rm -rf ${NAME}
	@rm -rf ${BONUS}
	@make fclean -C ${LIBFT_DIR}
	@rm -rf screenshot.bmp

re : fclean all

re_bonus : fclean bonus

.PHONY:	all bonus clean fclean re re_bonus
