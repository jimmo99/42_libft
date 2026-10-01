# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ssaavedr <ssaavedr@student.42urduliz.com>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/10/01 11:14:37 by ssaavedr          #+#    #+#              #
#    Updated: 2026/10/01 13:10:24 by ssaavedr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = cc
CFLAGS = -Wall -Wextra -Werror

SRCS =	ft_isalpha.c \
		ft_isdigit.c \
		ft_isalnum.c \
# 		ft_isascii.c \
# 		ft_isprint.c \
# 		ft_strlen.c \
# 		ft_memset.c \
# 		ft_bzero.c \
# 		ft_memcpy.c \
# 		ft_memcpy.c \
# 		ft_memmove.c \
# 		ft_strlcpy.c \
# 		ft_toupper.c \
# 		ft_tolower.c \
# 		ft_strchr.c \
# 		ft_strrchr.c \
# 		ft_strncmp.c \
# 		ft_memchr.c \
# 		ft_strnstr.c \
# 		ft_atoi.c \
# 		ft_calloc.c \
# 		ft_strdup.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
