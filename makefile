link:
	ld -o kernel.bin -Ttext 0x1000 entry.o kernel.o --oformat binary
	cat boot.bin kernel.bin > os-image.bin
kernel:
	gcc -ffreestanding -c src/kernel/kernel.c -o kernel.o
	nasm src/kernel/entry.asm -f elf -o entry.o



booter:
	nasm -fbin boot/boot.asm -o boot.bin
