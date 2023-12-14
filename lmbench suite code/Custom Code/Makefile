########################################################################
# ECE5504 ....
########################################################################

CC := riscv64-unknown-elf-gcc #Need to run source env.sh for this
OBJDUMP := riscv64-unknown-elf-objdump

CFLAGS := -g -O2 -std=gnu11 -Wall -specs=htif_nano.specs
CPPFLAGS := -I/home/shadiclink/rocket/chipyard-clean/riscv-tools-install/riscv64-unknown-elf/ #Change this path to your system's
LDFLAGS := -lm -static

SRC=bwidth2_read.c trap.c
OBJ= $(SRC:.c=.o)

TARGET=bwidth4_read.riscv

all: $(TARGET)

$(OBJ): %.o: %.c
	$(CC) $(CFLAGS) $(CPPFLAGS) -DSIZE=32 -c -o $@ $<

$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) $(CPPFLAGS) $(LDFLAGS) -o $@ $(OBJ)

clean:
	rm -f $(TARGET) $(OBJ)

.SUFFIXES: # Disable built-in suffix rules
