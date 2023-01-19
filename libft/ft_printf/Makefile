# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hgill <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/11 14:32:55 by hgill             #+#    #+#              #
#    Updated: 2022/06/17 16:38:21 by hgill            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_printf.c ft_words.c ft_numbers.c
OBJS 		= $(SRCS:.c=.o)
CC 			= gcc
RM 			= rm -f
CFLAGS 		= -Wall -Wextra -Werror -I.

NAME 		= libftprintf.a

all:		$(NAME)

$(NAME):	$(OBJS)
		 	@ar -rcs $(NAME) $(OBJS)
clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean $(NAME)

.PHONY:		all clean fclean re
