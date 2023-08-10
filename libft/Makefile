# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: iwozniak <iwozniak@student.42abudhabi.ae>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/03 12:11:53 by iwozniak          #+#    #+#              #
#    Updated: 2023/08/10 10:27:40 by iwozniak         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFILES = \
		ft_putchar \
		ft_putstr \
		ft_putnbr \
		ft_base_nbrlen \
		ft_u_base_nbrlen \
		ft_u_base_putnbr \
		ft_u_puthexa \
		ft_strlen \
		ft_strchr

NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs
RM = rm -f

SRCS_DIR = ./srcs/
SRCS = $(addprefix $(SRCS_DIR), $(addsuffix .c, $(CFILES)))

OBJS_DIR = ./
OBJS = $(addprefix $(OBJS_DIR), $(SRCS:.c=.o))

HDR_NAMES = libft.h
HDR_FOLDER = ./includes/
HDRS = $(addprefix $(HDR_FOLDER), $(HDR_NAMES))
HDR_INC = $(addprefix -I, $(HDR_FOLDER))

$(NAME): $(OBJS) $(HDRS)
	$(AR) $@ $^

$(OBJS_DIR)%.o: %.c $(HDRS)
	$(CC) $(CFLAGS) -c $(HDR_INC) -o $@ $<

all: $(NAME) $(HDRS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
