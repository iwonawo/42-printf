# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: iwozniak <iwozniak@student.42abudhabi.ae>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/01 12:32:42 by iwozniak          #+#    #+#              #
#    Updated: 2023/08/01 16:28:54 by iwozniak         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFILES = \
		ft_printf \

NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs
RM = rm -f

SRCS_DIR = ./srcs/
SRCS = $(addprefix $(SRCS_DIR), $(addsuffix .c, $(CFILES)))

OBJS_DIR = ./
OBJS = $(addprefix $(OBJS_DIR), $(SRCS:.c=.o))

HDR_NAMES = ft_printf.h
HDR_FOLDER = ./includes/
HDRS = $(addprefix $(HDR_FOLDER), $(HDR_NAMES))
HDR_INC = $(addprefix -I, $(HDR_FOLDER))

LIBFT_DIR = ./libft
LIBFT_AR = ./libft/libft.a

all: $(NAME) $(HDRS) $(LIBFT_AR)

$(NAME): $(OBJS) $(HDRS) $(LIBFT_AR)
	cp $(LIBFT_AR) $(NAME)
	$(AR) $@ $^

$(OBJS_DIR)%.o: %.c $(HDRS)
	$(CC) $(CFLAGS) -c $(HDR_INC) -o $@ $<

$(LIBFT_AR):
	@make -C $(LIBFT_DIR)

clean:
	@make clean -C $(LIBFT_DIR)
	$(RM) $(OBJS)

fclean: clean
	@make fclean -C $(LIBFT_DIR)
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
