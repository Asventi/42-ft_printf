CC := cc
NAME := libftprintf.a

BUILD_DIR := .build/
SRC_DIR := src/
OBJ_DIR := $(BUILD_DIR)obj/
LIB_DIR := lib/
LIBS := libft.a
LIBS_PATH := $(addsuffix /, $(addprefix $(LIB_DIR), $(basename $(LIBS))))
INCLUDES := includes/ $(addsuffix includes/, $(LIBS_PATH))

SRC_FILE := ft_printf.c formats/num_formats.c formats/formats.c formats/str_formats.c

OBJ := $(SRC_FILE:%.c=$(OBJ_DIR)%.o)

DEPS := $(OBJ:%.o=%.d)

CFLAGS += -MMD -MP -Wall -Wextra -Werror
I_INCLUDES := $(INCLUDES:%=-I%)

all: $(NAME)

$(NAME): $(OBJ) $(foreach lib,$(LIBS),$(LIB_DIR)$(patsubst %.a,%,$(lib))/$(lib))
	ar -rcs $@ $^

$(OBJ_DIR)%.o: $(SRC_DIR)%.c
	@mkdir -p $(@D)
	cc $(I_INCLUDES) -c $< -o $@ $(CFLAGS)

%.a:
	make -C $(@D)

test: src/test.c $(NAME) $(foreach lib,$(LIBS),$(LIB_DIR)$(patsubst %.a,%,$(lib))/$(lib))
	cc $(I_INCLUDES) $^ -o $@

clean:
	@for lib_path in $(LIBS_PATH) ; do \
		make clean -C $${lib_path} ; \
	done
	rm -rf $(BUILD_DIR)

fclean: clean
	@for lib_path in $(LIBS_PATH) ; do \
		make fclean -C $${lib_path} ; \
	done
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus

-include $(DEPS)
