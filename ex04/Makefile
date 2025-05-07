##### VARIABLES #####

## COLORS ##

GREEN =\033[0;32m
YELLOW =\033[0;33m
RESET =\033[0m

## TARGET ##

NAME := replacer

## COMPILATION ##

CC := g++

CFLAGS += -Wall
CFLAGS += -Wextra
CFLAGS += -Werror
CFLAGS += -std=c++98

ifeq ($(d), 1)
		CFLAGS += -g3
endif

ifeq ($(d), 2)
		CFLAGS += -fsanitize=address,undefined -g3
endif

## SOURCES ##

SRCS += ContentReplacer.cpp
SRCS += ContentSaver.cpp
SRCS += ContentWriter.cpp
SRCS += FileCloser.cpp
SRCS += FileContentGetter.cpp
SRCS += FileCreator.cpp
SRCS += FileOpener.cpp
SRCS += FileReader.cpp
SRCS += FileReplacerUseCase.cpp
SRCS += main.cpp

## INCLUDES ##

INCLUDES_DIR := .

INCLUDES += ContentReplacer.hpp
INCLUDES += ContentSaver.hpp
INCLUDES += ContentWriter.hpp
INCLUDES += FileCloser.hpp
INCLUDES += FileContentGetter.hpp
INCLUDES += FileCreator.hpp
INCLUDES += FileOpener.hpp
INCLUDES += FileReader.hpp
INCLUDES += FileReplacerUseCase.hpp
INCLUDES += main.hpp

## OBJECTS ##

OBJS := $(SRCS:.cpp=.o)

## RULES ##

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -I$(INCLUDES_DIR) $(OBJS) -o $(NAME)
	@echo "$(GREEN)Replacer compiled!$(RESET)"

$(OBJS): %.o: %.cpp
	$(CC) $(CFLAGS) -I$(INCLUDES_DIR) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
