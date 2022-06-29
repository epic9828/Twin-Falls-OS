#makefile for TFOS

kernel.o: 
	gcc -ffreestanding -c src/kernel/kernel.c -o $@

entry.o: src/kernel/entry.asm
	nasm -f elf $< -o $@

kernel.bin: entry.o kernel.o
	ld -o $@ -Ttext 0x1000 $^ --oformat binary
kernel.dis: kernel.bin
	ndisasm -b 32 $< > $@
boot: 
	nasm -f bin boot/boot.asm -o boot.bin
os.bin: boot.bin kernel.bin
	cat $^ >  $@
