#makefile for TFOS

kernel: 
	gcc -ffreestanding -nostdlib src/kernel/karnel.c -o kernel.o
	nasm -f bin src/kernel/entry.asm -o entry.o
ld:
	ld -o kernel.o -Ttext 0x1000 entry.o --oformat binary
