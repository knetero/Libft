# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abazerou <abazerou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/09 13:07:13 by abazerou          #+#    #+#              #
#    Updated: 2022/11/03 20:15:19 by abazerou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=	ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c \
			ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_bzero.c \
			ft_memset.c ft_strchr.c ft_strrchr.c ft_isprint.c ft_memcmp.c ft_memchr.c ft_memcpy.c \
			ft_atoi.c ft_toupper.c ft_tolower.c ft_strnstr.c ft_calloc.c ft_strdup.c ft_memmove.c ft_strlcat.c ft_substr.c \
			ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c
NAME	=	libft.a 

HEADER	=	libft.h

CFLAGS	=	-Wall -Wextra -Werror

OBJS	=	$(SRCS:.c=.o)
OBJS_B	=	$(SRCS_B:.c=.o)

all: $(NAME)

$(NAME): $(OBJS) 
	ar -crs $@ $^
bonus: $(OBJS_B) $(OBJS)
	ar -crs $(NAME) $^

%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) -c $^

clean:
	rm -rf $(OBJS) $(OBJS_B)
fclean: clean
	rm -rf $(NAME)
re: fclean all

