# This makefile will automatically compile & link all .c and .asm files in the SRC folder

CC=gcc
LD=gcc
ASM=nasm

CFLAGS += -Wall -Wextra -Werror
CFLAGS += -m32

BUILD_DIR = build
SRC_DIR = src

OUT = 5.bin
C_SRC = $(wildcard $(SRC_DIR)/*.c)
C_OBJ = $(C_SRC:$(SRC_DIR)/%.c=$(BUILD_DIR)/%.o)

ASM_SRC = $(wildcard $(SRC_DIR)/*.asm)
ASM_OBJ = $(ASM_SRC:$(SRC_DIR)/%.asm=$(BUILD_DIR)/%.bin)

all: $(OUT)

$(OUT): $(C_OBJ) $(ASM_OBJ)
	$(LD) $(CFLAGS) -o $@ $(C_OBJ) $(ASM_OBJ)

$(C_OBJ) $(ASM_OBJ): | $(BUILD_DIR)

$(BUILD_DIR)/%.o : $(SRC_DIR)/%.c
	$(CC) $(CFLAGS) -c $< -o $@

$(ASM_OBJ) : $(BUILD_DIR)/%.bin : $(SRC_DIR)/%.asm
	$(ASM) -f elf -o $@ $<

$(BUILD_DIR):
	@mkdir -p $(BUILD_DIR)

clean:
	rm -rf $(BUILD_DIR)

fclean: clean
	rm -rf $(OUT)

re:	fclean all

.PHONY: all clean fclean re
