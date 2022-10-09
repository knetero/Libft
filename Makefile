# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abazerou <abazerou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/09 13:07:13 by abazerou          #+#    #+#              #
#    Updated: 2022/10/09 13:23:11 by abazerou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=	ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c \
			ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_tolower.c \
	
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

.PHONY: all clean fclean re bonus
