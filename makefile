SRCS			= push_swap.c is_sorted.c rotate.c rotate_reverse.c sort_three.c swap.c push.c the_whole_way.c way_back.c the_sides.c ft_atoi.c ft_split.c the_beginning.c error.c

SRCS_B			= push_swap_bonus.c is_sorted_bonus.c rotate_bonus.c rotate_reverse_bonus.c swap_bonus.c push_bonus.c ft_atoi_bonus.c ft_split_bonus.c the_beginning_bonus.c error_bonus.c ft_strncmp_bonus.c get_next_line_bonus.c get_next_line_utils_bonus.c

NAME			= push_swap

NAME_B			= checker

CC				= cc

CFLAGS			= -Wall -Wextra -Werror

RM				= rm -f

AR				= ar rc 

OBJS			= $(SRCS:.c=.o)

OBJS_B			= $(SRCS_B:.c=.o)

all : $(NAME)

bonus : $(NAME_B)

$(NAME) : $(OBJS)
	cc ${CFLAGS} ${OBJS} -o ${NAME}

$(NAME_B) : $(OBJS_B)
	cc ${CFLAGS} ${OBJS_B} -o ${NAME_B}

clean :
	$(RM) $(OBJS) $(OBJS_B)

fclean : clean
	$(RM) $(NAME) $(NAME_B)

re : fclean all
