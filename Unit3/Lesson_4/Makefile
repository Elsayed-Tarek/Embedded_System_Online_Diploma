#Copyright @Elsayed-tarek
CC=arm-none-eabi-
CFLAGS=-mcpu=cortex-m4 -gdwarf-2 -g
INCS=-I .
LIBS=
SRC = $(wildcard *.c)
OBJ = $(SRC:.c=.o)
AS = $(wildcard *.s)
ASOBJ = $(AS:.s=.o)
Project_name  = unit3_lab4_cortexM4


all: $(Project_name).bin
	@echo "-----build is done-----"

%.o: %.s
	$(CC)as.exe $(CFLAGS) $< -o $@ 2> log

%.o: %.c 
	$(CC)gcc.exe -c $(INCS) $(CFLAGS)  $< -o $@

$(Project_name).elf: $(OBJ) $(ASOBJ) linker_script.ld
	$(CC)ld.exe -T linker_script.ld $(LIBS) $(OBJ) $(ASOBJ) -o $@ -Map=Map_file.map
	cp $(Project_name).elf $(Project_name).axf

$(Project_name).bin: $(Project_name).elf
	$(CC)objcopy.exe -O binary $< $@ 

clean: 
	rm *.o *.elf

clean_all:
	rm *.bin *.o *.elf 
	@echo "------All is removed------" 