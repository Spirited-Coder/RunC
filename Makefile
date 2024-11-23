CC = gcc
CFLAGS = -Wall -g -Os -fomit-frame-pointer -fno-stack-protector -flto -funroll-loops -march=native
SRC_DIR = src
BIN_DIR = bin
INCLUDE_DIR = include

# Automatically detect all .c files in the src directory
SRC = $(wildcard $(SRC_DIR)/*.c)

# Automatically generate corresponding .o files in the bin directory
OBJ = $(SRC:$(SRC_DIR)/%.c=$(BIN_DIR)/%.o)

# Automatically generate corresponding executable file names (based on .c files containing 'main')
EXEC = $(SRC:$(SRC_DIR)/%.c=$(BIN_DIR)/%)

# Default target to build all programs
all: $(EXEC)

# Rule for compiling each .c file into an object file (.o)
$(BIN_DIR)/%.o: $(SRC_DIR)/%.c
	$(CC) $(CFLAGS) -c $< -o $@ -I$(INCLUDE_DIR)

# Rule for linking object files to create executables (only for files containing main)
$(BIN_DIR)/%: $(BIN_DIR)/%.o
	$(CC) $(CFLAGS) -o $@ $<

# Clean rule to remove compiled files
clean:
	rm -rf $(BIN_DIR)/*

.PHONY: all clean

