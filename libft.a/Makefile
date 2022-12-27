CC	= gcc

CFLAGS	= -Wall -Wextra -Werror

FCT	= ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c

FCTO	= $(FCT:.c=.o)

RM	= rm -rf *.o

NAME	= libft.a

all:	$(NAME)

$(NAME):	$(FCTO)
			ar rcs $(NAME) $(FCTO)

clean:
			$(RM) $(FCTO)

fclean:		clean
			$(RM) $(NAME)

re:		fclean
			$(RM) $(NAME)


.PHONY:			all clean fclean re

