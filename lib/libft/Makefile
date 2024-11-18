CC := cc
NAME := libft.a

BUILD_DIR := .build/
SRC_DIR := src/
OBJ_DIR := $(BUILD_DIR)obj/
INCLUDES := includes/

SRC_FILE := is/ft_isalpha.c is/ft_isdigit.c is/ft_isalnum.c is/ft_isascii.c\
is/ft_isprint.c str/ft_strlen.c memory/ft_memset.c memory/ft_bzero.c memory/ft_memcpy.c\
memory/ft_memmove.c to/ft_toupper.c to/ft_tolower.c str/ft_strlcpy.c str/ft_strlcat.c\
str/ft_strchr.c str/ft_strrchr.c str/ft_strncmp.c memory/ft_memchr.c memory/ft_memcmp.c\
str/ft_strnstr.c str/ft_atoi.c memory/ft_calloc.c str/ft_strdup.c str/ft_substr.c\
str/ft_strjoin.c str/ft_strtrim.c str/ft_split.c str/ft_itoa.c str/ft_strmapi.c\
str/ft_striteri.c put/ft_putchar_fd.c put/ft_putstr_fd.c put/ft_putendl_fd.c\
put/ft_putnbr_fd.c chained/ft_lstnew.c chained/ft_lstadd_front.c chained/ft_lstsize.c chained/ft_lstlast.c\
chained/ft_lstadd_back.c chained/ft_lstdelone.c chained/ft_lstclear.c chained/ft_lstiter.c chained/ft_lstmap.c

OBJ := $(SRC_FILE:%.c=$(OBJ_DIR)%.o)

DEPS := $(OBJ:%.o=%.d)

CFLAGS += -MMD -MP -Wall -Wextra -Werror
I_INCLUDES := $(INCLUDES:%=-I%)

all: $(NAME)

$(NAME): $(OBJ)
	ar -rcs $@ $^

$(OBJ_DIR)%.o: $(SRC_DIR)%.c
	@mkdir -p $(@D)
	cc $(I_INCLUDES) -c $< -o $@ $(CFLAGS)

clean:
	rm -rf $(BUILD_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

-include $(DEPS)
