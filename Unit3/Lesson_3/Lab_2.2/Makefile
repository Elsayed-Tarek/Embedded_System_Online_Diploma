#Copyright @Elsayed-tarek
CC=arm-none-eabi-
CFLAGS=-mcpu=cortex-m3 -gdwarf-2
INCS=-I .
LIBS=
SRC = $(wildcard *.c)
OBJ = $(SRC:.c=.o)
AS = $(wildcard *.s)
ASOBJ = $(AS:.s=.o)
all: learn-in-depth_cortexM4.hex
	@echo "-----build is done-----"

%.o: %.s
	$(CC)as.exe $(CFLAGS) $< -o $@ 2> log

%.o: %.c 
	$(CC)gcc.exe -c $(INCS) $(CFLAGS)  $< -o $@

learn-in-depth.elf: $(OBJ) $(ASOBJ) 
	$(CC)ld.exe -T linker_script.ld $(LIBS) $(OBJ) $(ASOBJ) -o $@ -Map=Map_file.map

learn-in-depth_cortexM4.hex: learn-in-depth.elf
	$(CC)objcopy.exe -O binary $< $@ 

clean: 
	rm *.o *.elf

clean_all:
	rm *.bin *.o *.elf 
	@echo "------All is removed------" 