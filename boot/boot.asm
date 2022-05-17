[org 0x7c00]
  mov bp, 0x9000
  mov sp, bp
  mov bx, REAL_MODE
  call print
  call switch_to_pm
  jmp $
    
;custom bootloader for TFOS

%include "lib/16/print.asm"
%include "lib/32-bit/gdt.asm"
%include "lib/32-bit/print.asm"
%include "lib/32-bit/hex.asm"
[bits 32]
BEGIN_PM:
  mov ebx, PROT_MODE
  call print_pm
  jmp $

REAL_MODE db "Entered 16 bit mode, ", 0
PROT_MODE db "Entered 32 bit mode, [: ", 0


times 510-($-$$) db 0
dw 0xaa55
