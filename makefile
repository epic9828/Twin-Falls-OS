#makefile for TFOS

kernel.o: src/kernel/kernel.c
	gcc -ffreestanding -c $< -o $@

entry.o: src/kernel/entry.asm
	nasm -f elf $< -o $@

kernel.bin: entry.o kernel.o
	ld -o $@ -Ttext 0x1000 $^ --oformat binary
kernel.dis: kernel.bin2
	ndisasm -b 32 $< > $@
boot.bin: boot.asm
	nasm -f bin $< -o $@
os.bin: boot.bin kernel.bin
	cat $^ >  $@
