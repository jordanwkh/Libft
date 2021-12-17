NAME = libft.a

SRCS = ft_atoi.c\
ft_memmove.c\
ft_strchr.c\
ft_strlcpy.c\
ft_toupper.c\
ft_bzero.c\
ft_isdigit.c\
ft_memcpy.c\
ft_memset.c\
ft_strnstr.c\
ft_tolower.c\
ft_isalpha.c\
ft_isalnum.c\
ft_isascii.c\
ft_isprint.c\
ft_strlen.c\
ft_strlcat.c\
ft_strrchr.c\
ft_strncmp.c\
ft_memchr.c\
ft_memcmp.c\
ft_calloc.c\
ft_strdup.c\
ft_substr.c\
ft_strjoin.c\
ft_putchar_fd.c\
ft_strtrim.c\
ft_split.c\
ft_itoa.c\
ft_striteri.c\
ft_strmapi.c\
ft_putstr_fd.c\
ft_putendl_fd.c\
ft_putnbr_fd.c\

BONUS_SRCS = ft_lstnew.c\
ft_lstadd_front.c\
ft_lstsize.c\
ft_lstlast.c\
ft_lstadd_back.c\

OBJ = $(SRCS:%.c=%.o)	
BONUS_OBJ = $(BONUS_SRCS:%.c=%.o)

CFLAGS ?= -Wall -Wextra -Werror 

CC = gcc

.PHONY: fclean clean re

all: $(NAME)

$(NAME): $(OBJ)
	ar -rc $(NAME) $^

bonus: $(BONUS_OBJ) $(OBJ)
	ar -rc $(NAME) $^

%.o: %.c
	$(CC) $(CFLAGS) -o $@ -c $^

test: $(NAME) main.c
	$(CC) $(CFLAGS) -o $@ $^

clean:
	$(RM) $(OBJ) $(BONUS_OBJ)

fclean: clean
	$(RM) $(NAME)

re:	fclean all