NAME	= libft.a

SRC_FILES	=	ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c \
				ft_isascii.c ft_isdigit.c ft_isprint.c ft_memchr.c ft_memcmp.c \
				ft_memcpy.c ft_memmove.c ft_memset.c ft_strchr.c ft_strdup.c \
				ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c \
				ft_strrchr.c ft_tolower.c ft_toupper.c

OBJ_FILES	= $(SRC_FILES:.c=.o)

CC = gcc
CFLAGS = -Wall -Werror -Wextra
INCLUDE	= -I include
RM = rm -rf

all: $(NAME)

$(NAME)	: $(OBJ_FILES)
			$(CC) $(CFLAGS) $(OBJ_FILES) $(INCLUDE) -o $(NAME)
			
clean:
	${RM} $(OBJ_FILES)

fclean: clean
	${RM} $(NAME)

re: fclean all

.PHONY: all clean fclean
