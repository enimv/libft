# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aoueldma <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/29 05:40:50 by aoueldma          #+#    #+#              #
#    Updated: 2021/12/02 09:58:53 by aoueldma         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRCS = ft_striteri.c ft_isascii.c ft_putchar_fd.c ft_memcmp.c ft_strdup.c ft_split.c ft_strmapi.c ft_atoi.c ft_strlcpy.c ft_substr.c ft_isdigit.c ft_memcpy.c ft_strjoin.c ft_strncmp.c ft_tolower.c ft_calloc.c ft_isprint.c ft_strlcat.c ft_strnstr.c ft_toupper.c ft_isalnum.c ft_memset.c ft_split.c ft_strrchr.c ft_itoa.c ft_isalpha.c ft_memchr.c ft_strchr.c ft_strlen.c ft_strtrim.c ft_bzero.c ft_memmove.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

OBJS = $(SRCS:.c=.o)

all : $(NAME)

$(NAME) : $(OBJS)
	ar rc $(NAME) $(OBJS)
$(OBJS) : 
		$(CC) $(CFLAGS) -c $(SRCS)
clean :
	rm -rf $(OBJS)
fclean : clean
	rm -rf $(NAME)
re : fclean all
