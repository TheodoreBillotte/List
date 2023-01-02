##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## Makefile to compile list lib
##

CC = gcc
CFLAGS = -W -Wall -Wextra -Werror -I. -g3

SRC = $(wildcard src/*.c)
OBJ = $(SRC:.c=.o)
TARGET = liblist.a

all: $(TARGET)

$(TARGET): $(OBJ)
	$(AR) rsc $(TARGET) $(OBJ)

clean:
	rm -f $(OBJ) $(TEST_OBJ) $(COVERAGE_OBJ)

fclean: clean
	rm -f $(TARGET) $(TEST_TARGET)

re: fclean all
