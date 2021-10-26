# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tigerber <tigerber@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/26 15:50:08 by tigerber          #+#    #+#              #
#    Updated: 2021/10/26 19:41:51 by tigerber         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = so_long

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
		
OBJS = ${SRC:.c=.o}

all : ${NAME}

$(NAME) : ${OBJS}
	@make -C ${LIBFT_DIR}
	@make -C ${MLX_DIR}
	@${CC} ${CFLAGS} ${LDFLAGS} ${DEFINE_DEFAULT} ${OBJS} -o ${NAME} ${LIBS}

%.o : %.c
	@$(CC) $(CFLAGS) ${HEAD} -o $@ -c $<

clean :
	@rm -rf ${OBJS}
	@make clean -C ${LIBFT_DIR}
	@make clean -C ${MLX_DIR}

fclean : clean
	@rm -rf ${NAME}
	@make fclean -C ${LIBFT_DIR}
	@rm -rf screenshot.bmp

re : fclean all

.PHONY:	all clean fclean re
