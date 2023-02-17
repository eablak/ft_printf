NAME	= libftprintf
CC = gcc
INC = ft_printf.h
CFLAGS = -Wall -Wextra -Werror

SRCS	= ft_x.c \
			ft_pointer.c \
			ft_printf.c \
			ft_putchr.c \
			ft_putnbr.c \
			ft_putstr.c \
			ft_unsigned.c \
			ft_upx.c 

OBJS = $(SRCS:.c=.o)

all: $(NAME).a

$(NAME).a: $(OBJS)
	@ar -rcs $(NAME).a $(OBJS)
	@echo "\x1B[1;36mDerleme işlemi tamamlandı.\x1B[1;36m"

%.o: %.c $(INC)
	@$(CC) -c $< -o $@ $(CFLAGS)
	@echo "\033[92mDerleme işlemi devam ediyor.\033[0m"


clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME).a

re: fclean all

.PHONY: all, clean, fclean, re
