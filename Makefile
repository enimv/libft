NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRCS = ft_strlen.c 

OBJS = $(SRCS=.c:.o)

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