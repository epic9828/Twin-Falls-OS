[org 0x7c00]
;custom bootloader for TFOS
mov bx, str1
call print
call print_nl
mov bx, code
call print


mov dx, 0x12fe
call hex


jmp $
%include "lib/print.asm"
%include "lib/hex.asm"
%include "lib/disk.asm"
str1:
  db 'TFOS', 0
code:
  db 'code:', 0

times 510-($-$$) db 0
dw 0xaa55
