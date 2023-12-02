# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eyasa <eyasa@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/30 14:53:06 by eyasa             #+#    #+#              #
#    Updated: 2023/12/01 21:03:06 by eyasa            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SOURCES = display_file.c
PROGRAM = ft_display_file
CC = gcc
CFLAGS = -Wall -Wextra -Werror
OBJS = $(SOURCES:.c=.o)

all: $(OBJS)
	$(CC) $(CFLAGS) -o $(PROGRAM) $(OBJS)

%.o: %.c
	$(CC) $(FLAGS) -c $<

clean:
	$(RM) ${OBJS}

fclean: clean
	$(RM) ${PROGRAM}
