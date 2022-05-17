#execute in cmd.exe
all:
	nasm -f bin boot/lib/boot.asm -o boot.bin
	gcc src/kernel/kernel.c -o src/kernel.bin -nostdlib
	
