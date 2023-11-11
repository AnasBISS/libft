Name = libft.h
srcs = srcs/ft_isascii srcs/ft_memmove.c srcs/ft_strlcpy.c ft_tolower.c ft_atoi.c ft_isdigit.c ft_memset.c ft_strlen.c ft_toupper.c ft_bzero.c ft_isprint.c ft_strchr.c ft_strncmp.c ft_isalnum.c ft_memchr.c ft_strdup.c ft_strnstr.c ft_isalpha.c ft_memcmp.c ft_strlcat.c ft_strrchr.c
OBJS = $(srcs:.c=.o)
CC = gcc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

all:
	$(CC) $(CFLAGS) $(srcs) -o $(Name)
clean:
	${RM} ${OBJS}
fclean: clean
	${RM} ${NAME}
re: fclean all
		
