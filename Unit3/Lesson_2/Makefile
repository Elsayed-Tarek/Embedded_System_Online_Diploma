#Copyright @Elsayed-tarek
CC=arm-none-eabi-
CFLAGS=-mcpu=arm926ej-s -g
INCS=-I .
LIBS=
SRC = $(wildcard *.c)
OBJ = $(SRC:.c=.o)
AS = $(wildcard *.s)
ASOBJ = $(AS:.s=.o)
all: learn-in-depth.bin
	@echo "-----build is done-----"

%.o: %.s
	$(CC)as.exe $(CFLAGS) $< -o $@ 2> log

%.o: %.c 
	$(CC)gcc.exe -c $(INCS) $(CFLAGS)  $< -o $@

learn-in-depth.elf: $(OBJ) $(ASOBJ) linker_script.ld
	$(CC)ld.exe -T linker_script.ld $(LIBS) $(OBJ) $(ASOBJ) -o $@ -Map=Map_file.map

learn-in-depth.bin: learn-in-depth.elf
	$(CC)objcopy.exe -O binary $< $@ 

clean: 
	rm *.o *.elf

clean_all:
	rm *.bin *.o *.elf 
	@echo "------All is removed------" 